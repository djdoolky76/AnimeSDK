#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetPlayerAvatarIDAction; }

#define RPG_GAMECORE_FIVEDIMSETPLAYERAVATARIDACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A04E0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERAVATARIDACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F7A04F0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERAVATARIDACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F7A0440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerAvatarIDAction_TypeDefinitionIndex = 18848;

	class FiveDimSetPlayerAvatarIDAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERAVATARIDACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerAvatarIDAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerAvatarIDAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERAVATARIDACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerAvatarIDAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerAvatarIDAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERAVATARIDACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
