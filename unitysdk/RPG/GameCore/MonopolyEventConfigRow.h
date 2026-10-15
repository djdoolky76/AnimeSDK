#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyEventType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyEventConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89EC10)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D89E2C0)

namespace RPG::GameCore
{
	class MonopolyEventConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AutoTriggerEffectIDList; // 0x10
		::Il2CppArray<::System::UInt32>* EventOptionIDList; // 0x18
		::System::String* PicPath; // 0x20
		::System::UInt32 DiceNum; // 0x28
		::System::Boolean Skippable; // 0x2C
		::System::Boolean IsDataReport; // 0x2D
		::System::Boolean IsSpecial; // 0x2E
		::System::Byte _padding0[0x1];
		::System::UInt32 EventID; // 0x30
		::RPG::GameCore::MonopolyEventType Type; // 0x34
		::RPG::Client::TextID EventContent; // 0x38
		::RPG::Client::TextID EventName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyEventConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
