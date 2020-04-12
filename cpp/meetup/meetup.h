#ifndef MEETUP_H
#define MEETUP_H

#include <string>
#include <boost/date_time/gregorian/gregorian.hpp>

using namespace std;
using namespace boost::gregorian;

namespace meetup {
    class scheduler {
    public:
        scheduler(int, int);

        date find(const string&, int) const;
        date monteenth() const;
        date tuesteenth() const;
        date wednesteenth() const;
        date thursteenth() const;
        date friteenth() const;
        date saturteenth() const;
        date sunteenth() const;
        date first_monday() const;
        date first_tuesday() const;
        date first_wednesday() const;
        date first_thursday() const;
        date first_friday() const;
        date first_saturday() const;
        date first_sunday() const;
        date second_monday() const;
        date second_tuesday() const;
        date second_wednesday() const;
        date second_thursday() const;
        date second_friday() const;
        date second_saturday() const;
        date second_sunday() const;
        date third_monday() const;
        date third_tuesday() const;
        date third_wednesday() const;
        date third_thursday() const;
        date third_friday() const;
        date third_saturday() const;
        date third_sunday() const;
        date fourth_monday() const;
        date fourth_tuesday() const;
        date fourth_wednesday() const;
        date fourth_thursday() const;
        date fourth_friday() const;
        date fourth_saturday() const;
        date fourth_sunday() const;
        date last_monday() const;
        date last_tuesday() const;
        date last_wednesday() const;
        date last_thursday() const;
        date last_friday() const;
        date last_saturday() const;
        date last_sunday() const;
    private:
        int month;
        int year;
        int last_day;
    };
}

#endif
