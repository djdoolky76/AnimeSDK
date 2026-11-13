#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetupRotatableRegionAirlock; }
namespace RPG::GameCore { class TaskContext; }

#define PDIGEHCCKBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAE5420)
#define PDIGEHCCKBP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AAE5450)

inline static constexpr unsigned int PDIGEHCCKBP_TypeDefinitionIndex = 54162;

	class PDIGEHCCKBP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupRotatableRegionAirlock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupRotatableRegionAirlock*))((::PBYTE)hIl2Cpp + PDIGEHCCKBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIGEHCCKBP_ONTASKBEGIN_OFFSET))(this);
		}

	};
