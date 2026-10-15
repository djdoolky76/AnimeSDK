#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MessageLinkType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageLinkRow; }
namespace System { class String; }

#define RPG_GAMECORE_MESSAGELINKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84F690)
#define RPG_GAMECORE_MESSAGELINKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D84EF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageLinkRow_TypeDefinitionIndex = 14471;

	class MessageLinkRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::GameCore::MessageLinkType Type; // 0x18
		::System::Boolean OnceOnly; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID Title; // 0x28
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
