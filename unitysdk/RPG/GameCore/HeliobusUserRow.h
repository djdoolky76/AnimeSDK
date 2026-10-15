#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusUserRow; }
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSUSERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D767800)
#define RPG_GAMECORE_HELIOBUSUSERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D767170)

namespace RPG::GameCore
{
	class HeliobusUserRow : public ::System::Object
	{
	public:
		::System::String* UserIconPath; // 0x10
		::System::UInt32 HeliobusUserID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID HeliobusUserName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusUserRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusUserRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSUSERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
