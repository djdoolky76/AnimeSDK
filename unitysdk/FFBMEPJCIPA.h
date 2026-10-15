#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MuteTargetTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define FFBMEPJCIPA_CTOR_OFFSET UNITYSDK_OFFSET(0x15730030)
#define FFBMEPJCIPA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15730060)

	class FFBMEPJCIPA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MuteTargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MuteTargetTimeSlow*))((::PBYTE)hIl2Cpp + FFBMEPJCIPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBMEPJCIPA_ONTASKBEGIN_OFFSET))(this);
		}

	};
