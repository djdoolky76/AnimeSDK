#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyOptionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyEventOptionRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYEVENTOPTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABA320)
#define RPG_GAMECORE_MONOPOLYEVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAB99D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventOptionRow_TypeDefinitionIndex = 12096;

	class MonopolyEventOptionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x10
		::System::String* EffectContentText; // 0x18
		::Il2CppArray<::System::UInt32>* NextOptionList; // 0x20
		::RPG::Client::TextID EffectContent; // 0x28
		::RPG::GameCore::MonopolyOptionType OptionType; // 0x38
		::System::UInt32 DiceScoreRequirement; // 0x3C
		::System::Boolean IsHideEffect; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 TextDisplayParam2; // 0x44
		::RPG::Client::TextID OptionContent; // 0x48
		::System::UInt32 EventOptionID; // 0x58
		::System::UInt32 TextDisplayParam1; // 0x5C
		::RPG::Client::TextID OptionBubbleTalk; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyEventOptionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyEventOptionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
