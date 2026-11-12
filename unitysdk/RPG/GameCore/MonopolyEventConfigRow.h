#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyEventType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyEventConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB8F60)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAB8610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventConfigRow_TypeDefinitionIndex = 12094;

	class MonopolyEventConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventOptionIDList; // 0x10
		::Il2CppArray<::System::UInt32>* AutoTriggerEffectIDList; // 0x18
		::System::String* PicPath; // 0x20
		::RPG::Client::TextID EventName; // 0x28
		::RPG::Client::TextID EventContent; // 0x38
		::System::UInt32 EventID; // 0x48
		::System::UInt32 DiceNum; // 0x4C
		::System::Boolean IsDataReport; // 0x50
		::System::Boolean Skippable; // 0x51
		::System::Boolean IsSpecial; // 0x52
		::System::Byte _padding0[0x1];
		::RPG::GameCore::MonopolyEventType Type; // 0x54
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
