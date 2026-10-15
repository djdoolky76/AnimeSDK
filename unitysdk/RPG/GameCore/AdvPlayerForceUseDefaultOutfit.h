#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPlayerForceUseDefaultOutfit; }
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AAE40)
#define RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AAE80)
#define RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AADE0)

namespace RPG::GameCore
{
	class AdvPlayerForceUseDefaultOutfit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* DefaultSlotTypes; // 0x28
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* EffectList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERFORCEUSEDEFAULTOUTFIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
