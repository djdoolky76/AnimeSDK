#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleQTEBaseConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_BATTLEQTEBASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D466E80)
#define RPG_GAMECORE_BATTLEQTEBASECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D466C40)
#define RPG_GAMECORE_BATTLEQTEBASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4662A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleQTEBaseConfig_TypeDefinitionIndex = 23343;

	class BattleQTEBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Delay; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInit; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTick; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIClick; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEQTEBASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleQTEBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleQTEBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEQTEBASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleQTEBaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleQTEBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEQTEBASECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
