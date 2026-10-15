#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TargetUnMuteModifierEventSource; }
namespace RPG::GameCore { class TaskContext; }

#define AGGEJKHFDMO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF2F950)
#define AGGEJKHFDMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF2F980)

	class AGGEJKHFDMO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TargetUnMuteModifierEventSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TargetUnMuteModifierEventSource*))((::PBYTE)hIl2Cpp + AGGEJKHFDMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGEJKHFDMO_ONTASKBEGIN_OFFSET))(this);
		}

	};
