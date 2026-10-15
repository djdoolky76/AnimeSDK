#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class RtSetDynamicValueByDamageDataProperty; }
namespace RPG::GameCore { class TaskContext; }

#define GOMADIPPDFP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B39BF0)
#define GOMADIPPDFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B39CD0)

	class GOMADIPPDFP
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSetDynamicValueByDamageDataProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSetDynamicValueByDamageDataProperty*))((::PBYTE)hIl2Cpp + GOMADIPPDFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOMADIPPDFP_ONTASKBEGIN_OFFSET))(this);
		}

	};
