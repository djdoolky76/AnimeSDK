#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ScoringShowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetBattleScoringItem; }

#define RPG_GAMECORE_SETBATTLESCORINGITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA97740)
#define RPG_GAMECORE_SETBATTLESCORINGITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA97750)
#define RPG_GAMECORE_SETBATTLESCORINGITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA97700)

namespace RPG::GameCore
{
	class SetBattleScoringItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ScoringID; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x1C
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x20
		::RPG::GameCore::ScoringShowType ShowType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* DisplayValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLESCORINGITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleScoringItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleScoringItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLESCORINGITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleScoringItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleScoringItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLESCORINGITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
