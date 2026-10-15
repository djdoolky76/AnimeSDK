#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageItemTextOverrideRow; }
namespace System { class String; }

#define RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87C070)
#define RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D87BED0)

namespace RPG::GameCore
{
	class MessageItemTextOverrideRow : public ::System::Object
	{
	public:
		::System::String* Conditions; // 0x10
		::RPG::Client::TextID MainText; // 0x18
		::System::UInt32 ItemID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageItemTextOverrideRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageItemTextOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMTEXTOVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
