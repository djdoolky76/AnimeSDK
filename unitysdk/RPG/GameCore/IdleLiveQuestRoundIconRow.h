#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestRoundIconRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77DF20)
#define RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77DDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestRoundIconRow_TypeDefinitionIndex = 11744;

	class IdleLiveQuestRoundIconRow : public ::System::Object
	{
	public:
		::System::String* QuestRoundIconPath; // 0x10
		::System::UInt32 QuestID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveQuestRoundIconRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveQuestRoundIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
