class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minute = minutes * 6;
        double hourhand = (hour % 12) * 30 + (minutes * 0.5);

        double diff = abs(hourhand - minute);

        return min( diff, 360.0 - diff);
        
    }
};