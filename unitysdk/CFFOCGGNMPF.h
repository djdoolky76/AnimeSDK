#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCityAtmosphereSubwayArrived; }
namespace RPG::GameCore { class TaskContext; }

#define CFFOCGGNMPF_CTOR_OFFSET UNITYSDK_OFFSET(0xCA11860)
#define CFFOCGGNMPF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCA11890)

	class CFFOCGGNMPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareCityAtmosphereSubwayArrived*))((::PBYTE)hIl2Cpp + CFFOCGGNMPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFFOCGGNMPF_EVALUATE_OFFSET))(this);
		}

	};
