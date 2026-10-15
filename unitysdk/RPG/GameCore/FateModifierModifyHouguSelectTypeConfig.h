#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierModifyHouguSelectTypeConfig; }

#define RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B770)
#define RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69B780)
#define RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B730)

namespace RPG::GameCore
{
	class FateModifierModifyHouguSelectTypeConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierModifyHouguSelectTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierModifyHouguSelectTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierModifyHouguSelectTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierModifyHouguSelectTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMODIFYHOUGUSELECTTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
