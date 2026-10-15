#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimKillAvatarEffectAction; }
namespace RPG::GameCore { class LittleGameKillEffectParams; }

#define RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D697C10)
#define RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D697C20)
#define RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D697B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimKillAvatarEffectAction_TypeDefinitionIndex = 18742;

	class FiveDimKillAvatarEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameKillEffectParams* KillParams; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMKILLAVATAREFFECTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
