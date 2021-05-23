#include <src/jaz/gravis/t3Vector.h>

class NoMotionModel
{
	public:

		NoMotionModel();

		inline void updatePosition(
				const double* x,
				int particle_index,
				gravis::d3Vector& position) const;

		inline void updateCostGradient(
				const gravis::d3Vector *dC_dPos,
				int particle_index,
				int fc,
				double *target) const;

		inline double computePriorCostAndGradient(
				const double *x,
				int fc,
				double* gradDest) const;

		inline int getParameterCount() const;
};

void NoMotionModel::updatePosition(
        const double *x, 
        int particle_index, 
        gravis::d3Vector &position) const
{	
}

void NoMotionModel::updateCostGradient(
        const gravis::d3Vector *dC_dPos, 
        int particle_index, 
        int fc, 
        double *target) const
{	
}

double NoMotionModel::computePriorCostAndGradient(
        const double *x, 
        int fc, 
        double *gradDest) const
{
	return 0.0;
}

int NoMotionModel::getParameterCount() const
{
	return 0;
}
