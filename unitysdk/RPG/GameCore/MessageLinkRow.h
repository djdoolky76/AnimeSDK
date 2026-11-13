#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MessageLinkType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageLinkRow; }
namespace System { class String; }

#define RPG_GAMECORE_MESSAGELINKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E1EB0)
#define RPG_GAMECORE_MESSAGELINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6E1770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageLinkRow_TypeDefinitionIndex = 14626;

	class MessageLinkRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID Title; // 0x18
		::RPG::GameCore::MessageLinkType Type; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::Boolean OnceOnly; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageLinkRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageLinkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGELINKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
