#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RandomEventChoiceRow; }

#define RPG_GAMECORE_RANDOMEVENTCHOICEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB84110)
#define RPG_GAMECORE_RANDOMEVENTCHOICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB83E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomEventChoiceRow_TypeDefinitionIndex = 14405;

	class RandomEventChoiceRow : public ::System::Object
	{
	public:
		::System::UInt32 EventCostOption; // 0x10
		::System::UInt32 EventRewardFund; // 0x14
		::RPG::Client::TextID Option; // 0x18
		::System::Boolean IsCancel; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 ChoiceID; // 0x2C
		::System::UInt32 EventBuffDay; // 0x30
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
