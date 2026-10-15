#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDialogueOptionDisplayRow; }

#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C92B0)
#define RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C8C50)

namespace RPG::GameCore
{
	class RogueDialogueOptionDisplayRow : public ::System::Object
	{
	public:
		::System::UInt32 OptionDisplayID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID OptionTitle; // 0x18
		::RPG::Client::TextID OptionDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDialogueOptionDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDialogueOptionDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEOPTIONDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
