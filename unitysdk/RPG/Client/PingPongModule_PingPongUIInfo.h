#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PINGPONGMODULE_PINGPONGUIINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDB265A0)

namespace RPG::Client
{
	class PingPongModule_PingPongUIInfo : public ::System::Object
	{
	public:
		::System::String* SPSkillBtnImage; // 0x10
		::System::Single HPRatio; // 0x18
		::System::Boolean MPSkillBan; // 0x1C
		::System::Boolean SPSkillBan; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single MPRatio; // 0x20
		::System::Single SPRatio; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_PINGPONGUIINFO_CTOR_OFFSET))(this);
		}

	};
}
