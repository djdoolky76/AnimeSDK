#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhoneThemeRow; }
namespace System { class String; }

#define RPG_GAMECORE_PHONETHEMEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DED80)
#define RPG_GAMECORE_PHONETHEMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8DE680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhoneThemeRow_TypeDefinitionIndex = 14487;

	class PhoneThemeRow : public ::System::Object
	{
	public:
		::System::String* PhoneThemeMain; // 0x10
		::System::String* PhoneThemeApp; // 0x18
		::System::String* PhoneThemeItem; // 0x20
		::System::UInt32 ShowParam; // 0x28
		::System::UInt32 ID; // 0x2C
		::RPG::GameCore::PersonalizeShowType ShowType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhoneThemeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhoneThemeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHONETHEMEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
