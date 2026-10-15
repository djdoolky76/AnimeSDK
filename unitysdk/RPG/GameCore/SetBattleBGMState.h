#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetBattleBGMState; }

#define RPG_GAMECORE_SETBATTLEBGMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA96690)
#define RPG_GAMECORE_SETBATTLEBGMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA966A0)
#define RPG_GAMECORE_SETBATTLEBGMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA96660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleBGMState_TypeDefinitionIndex = 22965;

	class SetBattleBGMState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StateName; // 0x18
		::System::Boolean InsertSpecial; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* DelayTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEBGMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleBGMState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleBGMState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEBGMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleBGMState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleBGMState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEBGMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
