#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleAnimEventEntry; }
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLEANIMGROUPEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F37F0)
#define RPG_GAMECORE_FREESTYLEANIMGROUPEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F35B0)

namespace RPG::GameCore
{
	class FreeStyleAnimGroupEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleAnimEventEntry*>* Clips; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x20
		::System::String* AllowTriggerLayer; // 0x28
		::System::Boolean AllowTriggeringOnTransitionOut; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMGROUPEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleAnimGroupEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleAnimGroupEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMGROUPEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
