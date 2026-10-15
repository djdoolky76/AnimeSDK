#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleCharacterInfoConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLECHARACTERINFOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4040)
#define RPG_GAMECORE_FREESTYLECHARACTERINFOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6F3F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleCharacterInfoConfigRow_TypeDefinitionIndex = 13301;

	class FreeStyleCharacterInfoConfigRow : public ::System::Object
	{
	public:
		::System::String* FreeStyleCharacterID; // 0x10
		::System::UInt32 AvatarBodyID; // 0x18
		::System::UInt32 AvatarFlagID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERINFOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleCharacterInfoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERINFOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
