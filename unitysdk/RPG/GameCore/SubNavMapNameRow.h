#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SubNavMapNameRow; }

#define RPG_GAMECORE_SUBNAVMAPNAMEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB38C30)
#define RPG_GAMECORE_SUBNAVMAPNAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB38A90)

namespace RPG::GameCore
{
	class SubNavMapNameRow : public ::System::Object
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 SubMapID; // 0x14
		::RPG::Client::TextID Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPNAMEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubNavMapNameRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubNavMapNameRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBNAVMAPNAMEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
