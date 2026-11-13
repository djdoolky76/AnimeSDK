#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PINGPONGMODULE_PINGPONGUIINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x18D96A50)

namespace RPG::Client
{
	inline static constexpr unsigned int PingPongModule_PingPongUIInfo_TypeDefinitionIndex = 68399;

	class PingPongModule_PingPongUIInfo : public ::System::Object
	{
	public:
		::System::String* SPSkillBtnImage; // 0x10
		::System::Boolean MPSkillBan; // 0x18
		::System::Boolean SPSkillBan; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single SPRatio; // 0x1C
		::System::Single MPRatio; // 0x20
		::System::Single HPRatio; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PINGPONGMODULE_PINGPONGUIINFO_CTOR_OFFSET))(this);
		}

	};
}
