#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/SetJumpEnergyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetLocalAvatarJumpEnergyAction; }

#define RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AC2F0)
#define RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AC300)
#define RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AC2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetLocalAvatarJumpEnergyAction_TypeDefinitionIndex = 18737;

	class FiveDimSetLocalAvatarJumpEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::SetJumpEnergyType SetType; // 0x10
		::System::Int32 Num; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETLOCALAVATARJUMPENERGYACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
