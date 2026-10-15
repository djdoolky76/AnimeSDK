#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebugLogLevel.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDebugLogEventAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B86C0)
#define RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B86D0)
#define RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B8690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDebugLogEventAction_TypeDefinitionIndex = 18652;

	class FiveDimDebugLogEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::DebugLogLevel Level; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Message; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDebugLogEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDebugLogEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDebugLogEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDebugLogEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDEBUGLOGEVENTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
