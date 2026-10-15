#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_NPCDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D0EF0)
#define RPG_GAMECORE_NPCDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8D0770)

namespace RPG::GameCore
{
	class NPCDataRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::RPG::Client::TextID DefaultNPCTitle; // 0x20
		::System::UInt32 SeriesID; // 0x30
		::RPG::GameCore::NPCSubType SubType; // 0x34
		::System::UInt32 ID; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID DefaultNPCName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
