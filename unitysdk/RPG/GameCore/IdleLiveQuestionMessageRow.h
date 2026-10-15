#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionMessageRow; }

#define RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77E290)
#define RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77E170)

namespace RPG::GameCore
{
	class IdleLiveQuestionMessageRow : public ::System::Object
	{
	public:
		::System::UInt32 MessageID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveQuestionMessageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveQuestionMessageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONMESSAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
