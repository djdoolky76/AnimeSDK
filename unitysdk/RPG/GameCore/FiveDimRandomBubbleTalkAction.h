#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimActionRandomBubbleTalkInfoGroup; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }

#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A9340)
#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A9350)
#define RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A9300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRandomBubbleTalkAction_TypeDefinitionIndex = 18774;

	class FiveDimRandomBubbleTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimActionRandomBubbleTalkInfoGroup*>* BubbleTalkInfoGroupList; // 0x10
		::System::Boolean IsLoop; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single LoopInterval; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRANDOMBUBBLETALKACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
