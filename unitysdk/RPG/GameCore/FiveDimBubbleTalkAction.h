#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimActionBubbleTalkInfo; }
namespace RPG::GameCore { class FiveDimBubbleTalkAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B39D0)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B39E0)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B3990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBubbleTalkAction_TypeDefinitionIndex = 18772;

	class FiveDimBubbleTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean UseCondition; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* LevelVarName; // 0x18
		::Il2CppArray<::System::Int16>* ActiveLevelVarValues; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimActionBubbleTalkInfo*>* BubbleTalkInfoList; // 0x28
		::System::Boolean IsLoop; // 0x30
		::System::Byte _padding1[0x3];
		::System::Single LoopInterval; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
