#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RandomEventChoiceRow; }

#define RPG_GAMECORE_RANDOMEVENTCHOICEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F227E50)
#define RPG_GAMECORE_RANDOMEVENTCHOICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F227B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomEventChoiceRow_TypeDefinitionIndex = 14405;

	class RandomEventChoiceRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Option; // 0x10
		::System::UInt32 EventCostOption; // 0x20
		::System::UInt32 EventBuffDay; // 0x24
		::System::UInt32 EventRewardFund; // 0x28
		::System::UInt32 ChoiceID; // 0x2C
		::System::Boolean IsCancel; // 0x30
		::System::Byte _padding0[0x3];
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
