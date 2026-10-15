#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarBaseClickConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterEnergyBarTutorialConfig; }

#define RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B1670)
#define RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B1680)
#define RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B19C0)

namespace RPG::GameCore
{
	class MonsterEnergyBarTutorialConfig : public ::RPG::GameCore::MonsterEnergyBarBaseClickConfig
	{
	public:
		::System::UInt32 TutorialGroupID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterEnergyBarTutorialConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterEnergyBarTutorialConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterEnergyBarTutorialConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterEnergyBarTutorialConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERENERGYBARTUTORIALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
