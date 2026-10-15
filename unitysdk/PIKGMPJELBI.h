#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtBattleTriggerCameraAbility; }
namespace RPG::GameCore { class TaskContext; }

#define PIKGMPJELBI_CTOR_OFFSET UNITYSDK_OFFSET(0xC26DB10)
#define PIKGMPJELBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC26DB40)

	class PIKGMPJELBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBattleTriggerCameraAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBattleTriggerCameraAbility*))((::PBYTE)hIl2Cpp + PIKGMPJELBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGMPJELBI_ONTASKBEGIN_OFFSET))(this);
		}

	};
