#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueBySkillProperty; }
namespace RPG::GameCore { class TaskContext; }

#define KDBBBJBONPD_CTOR_OFFSET UNITYSDK_OFFSET(0xB346DF0)
#define KDBBBJBONPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB346ED0)

	class KDBBBJBONPD
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueBySkillProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueBySkillProperty*))((::PBYTE)hIl2Cpp + KDBBBJBONPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBBBJBONPD_ONTASKBEGIN_OFFSET))(this);
		}

	};
