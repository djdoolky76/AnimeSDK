#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleCardSelectItemGroup; }
namespace RPG::GameCore { class ShowBattleCardBuffSelection; }

#define RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD7760)
#define RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1DAD7770)
#define RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAD7730)

namespace RPG::GameCore
{
	class ShowBattleCardBuffSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleCardSelectItemGroup*>* SelectItemGroups; // 0x18
		::System::Single AutoSelectDelay; // 0x20
		::System::Single AutoConfirmDelay; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleCardBuffSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleCardBuffSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleCardBuffSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleCardBuffSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLECARDBUFFSELECTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
