#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimFireAvatarEffectAction; }
namespace RPG::GameCore { class LittleGameFireEffectParams; }

#define RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BDB40)
#define RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BDB50)
#define RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BDB10)

namespace RPG::GameCore
{
	class FiveDimFireAvatarEffectAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IgnoreInitEvent; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameFireEffectParams* FireParams; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFIREAVATAREFFECTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
