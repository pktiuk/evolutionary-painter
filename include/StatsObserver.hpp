#ifndef STATS_OBSERVER
#define STATS_OBSERVER

#include "EvolAlg.hpp"
#include "EvolAlgObserver.hpp"

/**
 * @brief Observer class used for printing statistics for EvolAlg.
 * It shows
 * - current generation
 * - generation speed (Gen/s)
 * - fitness (in precents)
 *
 */
class StatsObserver : EvolAlgObserver
{
  private:
    EvolAlg *observed_EvolAlg_ = nullptr;

    sf::Clock clock;
    unsigned long long first_generation_;
    unsigned long long first_fitness_;

    bool started_ = false;

    sf::Clock view_timer_;
    int refresh_time_ = 100; // in miliseconds

  public:
    StatsObserver();
    ~StatsObserver();

    virtual void update();
    void setObservedEvolAlg(EvolAlg *p);
};

#endif // STATS_OBSERVER