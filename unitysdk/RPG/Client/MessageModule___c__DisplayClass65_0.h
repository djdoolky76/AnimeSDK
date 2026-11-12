#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MessageModule; }

#define RPG_CLIENT_MESSAGEMODULE___C__DISPLAYCLASS65_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE13D2B0)
#define RPG_CLIENT_MESSAGEMODULE___C__DISPLAYCLASS65_0___REBUILDMESSAGEGROUP_B__0_OFFSET UNITYSDK_OFFSET(0xE144030)
#define RPG_CLIENT_MESSAGEMODULE___C__DISPLAYCLASS65_0___REBUILDMESSAGEGROUP_B__1_OFFSET UNITYSDK_OFFSET(0xE144060)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageModule___c__DisplayClass65_0_TypeDefinitionIndex = 68007;

	class MessageModule___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::RPG::Client::MessageModule* __4__this; // 0x10
		::System::UInt32 groupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE___C__DISPLAYCLASS65_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RebuildMessageGroup_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE___C__DISPLAYCLASS65_0___REBUILDMESSAGEGROUP_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __RebuildMessageGroup_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEMODULE___C__DISPLAYCLASS65_0___REBUILDMESSAGEGROUP_B__1_OFFSET))(this, a1);
		}

	};
}
