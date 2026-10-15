#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelRandomEffectConfig; }

#define RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A7A20)
#define RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A7A30)
#define RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A79D0)

namespace RPG::GameCore
{
	class ChimeraDuelRandomEffectConfig : public ::RPG::GameCore::ChimeraDuelEffectConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelValueGetter* RandomValueGetter; // 0x20
		::System::Boolean IsAffectByAttribute; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRandomEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRandomEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelRandomEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelRandomEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANDOMEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
