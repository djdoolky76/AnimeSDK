#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBattleUIPanelState; }
namespace System { class String; }

#define RPG_GAMECORE_SETBATTLEUIPANELSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6A6E0)
#define RPG_GAMECORE_SETBATTLEUIPANELSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6A6F0)
#define RPG_GAMECORE_SETBATTLEUIPANELSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6A6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetBattleUIPanelState_TypeDefinitionIndex = 22815;

	class SetBattleUIPanelState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleUIPanelType>* PanelTypes; // 0x18
		::System::String* PanelGroup; // 0x20
		::System::Boolean IsActive; // 0x28
		::System::Boolean AllPanel; // 0x29
		::System::Byte _padding0[0x6];
		::System::String* UniqueKey; // 0x30
		::System::Boolean IsRevert; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleUIPanelState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleUIPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleUIPanelState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleUIPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLEUIPANELSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
