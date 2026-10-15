#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class AnimGroupEventEntry; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ANIMGROUPEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F2620)
#define RPG_GAMECORE_ANIMGROUPEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F2420)

namespace RPG::GameCore
{
	class AnimGroupEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimGroupEventEntry*>* States; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x20
		::System::Boolean ForceCheckEnteredWhenTriggerExit; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMGROUPEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimGroupEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimGroupEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMGROUPEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
