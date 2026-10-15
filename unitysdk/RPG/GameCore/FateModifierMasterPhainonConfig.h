#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierMasterPhainonConfig; }

#define RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B710)
#define RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69B720)
#define RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B6D0)

namespace RPG::GameCore
{
	class FateModifierMasterPhainonConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierMasterPhainonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierMasterPhainonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierMasterPhainonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierMasterPhainonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERPHAINONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
