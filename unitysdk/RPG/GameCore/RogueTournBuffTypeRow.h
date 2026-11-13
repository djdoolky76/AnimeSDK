#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournBuffTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNBUFFTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF26AB0)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EF262B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuffTypeRow_TypeDefinitionIndex = 15173;

	class RogueTournBuffTypeRow : public ::System::Object
	{
	public:
		::System::String* RogueBuffTypeIcon; // 0x10
		::System::String* RogueBuffTypeSmallIcon; // 0x18
		::System::String* RogueBuffTypeDecoName; // 0x20
		::System::String* RogueBuffTypeLargeIcon; // 0x28
		::RPG::Client::TextID RogueBuffTypeTitle; // 0x30
		::RPG::Client::TextID RogueBuffTypeName; // 0x40
		::System::UInt32 RogueBuffType; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID RogueBuffTypeSubTitle; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournBuffTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournBuffTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
