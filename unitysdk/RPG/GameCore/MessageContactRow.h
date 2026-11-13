#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageContactRow; }
namespace System { class String; }

#define RPG_GAMECORE_MESSAGECONTACTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D9A30)
#define RPG_GAMECORE_MESSAGECONTACTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6D9300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactRow_TypeDefinitionIndex = 14612;

	class MessageContactRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID SignatureText; // 0x20
		::System::UInt32 ContactsCamp; // 0x30
		::System::UInt32 ContactsType; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageContactRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageContactRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
