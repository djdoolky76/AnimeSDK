#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RandomEventChoiceRow; }

#define RPG_GAMECORE_RANDOMEVENTCHOICEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96BD70)
#define RPG_GAMECORE_RANDOMEVENTCHOICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D96BA90)

namespace RPG::GameCore
{
	class RandomEventChoiceRow : public ::System::Object
	{
	public:
		::System::UInt32 ChoiceID; // 0x10
		::System::Boolean IsCancel; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID Option; // 0x18
		::System::UInt32 EventRewardFund; // 0x28
		::System::UInt32 EventBuffDay; // 0x2C
		::System::UInt32 EventCostOption; // 0x30
		::System::UInt32 EventRewardBuff; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMEVENTCHOICEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomEventChoiceRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomEventChoiceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMEVENTCHOICEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
