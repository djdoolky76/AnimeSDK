#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InControlKeyInfoRow; }
namespace System { class String; }

#define RPG_GAMECORE_INCONTROLKEYINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D784C90)
#define RPG_GAMECORE_INCONTROLKEYINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D784540)

namespace RPG::GameCore
{
	class InControlKeyInfoRow : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::RPG::Client::TextID keyString; // 0x18
		::System::Boolean isSettingKey; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID keyStringFrance; // 0x30
		::RPG::Client::TextID keyStringGermany; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::InControlKeyInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InControlKeyInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLKEYINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
