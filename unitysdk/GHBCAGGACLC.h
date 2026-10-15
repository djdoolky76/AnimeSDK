#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareFloorCustomFloatV2; }
namespace RPG::GameCore { class TaskContext; }

#define GHBCAGGACLC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A08EA0)
#define GHBCAGGACLC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A08ED0)

inline static constexpr unsigned int GHBCAGGACLC_TypeDefinitionIndex = 52559;

	class GHBCAGGACLC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareFloorCustomFloatV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareFloorCustomFloatV2*))((::PBYTE)hIl2Cpp + GHBCAGGACLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBCAGGACLC_EVALUATE_OFFSET))(this);
		}

	};
