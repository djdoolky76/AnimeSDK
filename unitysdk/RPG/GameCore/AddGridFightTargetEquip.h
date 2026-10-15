#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddGridFightTargetEquip; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D388390)
#define RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3883A0)
#define RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D388360)

namespace RPG::GameCore
{
	class AddGridFightTargetEquip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean isUpgradeEquip; // 0x20
		::System::Boolean isAllEquipCraftable; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 EquipID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddGridFightTargetEquip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddGridFightTargetEquip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddGridFightTargetEquip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddGridFightTargetEquip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTTARGETEQUIP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
