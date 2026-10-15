#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareCityAtmosphereSubwayArrived; }
namespace RPG::GameCore { class TaskContext; }

#define CFFOCGGNMPF_CTOR_OFFSET UNITYSDK_OFFSET(0xCA0A8D0)
#define CFFOCGGNMPF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xCA0A900)

inline static constexpr unsigned int CFFOCGGNMPF_TypeDefinitionIndex = 52554;

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
