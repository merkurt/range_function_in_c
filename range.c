void DRANGE(double* arr, double start, double end, int step){
    double stepVal = (end - start) / step;
    double val = start;
    for(int i = 0; i < step; i++){
        arr[i] = val;
        val += stepVal;
    }
}
void FRANGE(float* arr, float start, float end, int step){
    float stepVal = (end - start) / step;
    float val = start;
    for(int i = 0; i < step; i++){
        arr[i] = val;
        val += stepVal;
    }
}