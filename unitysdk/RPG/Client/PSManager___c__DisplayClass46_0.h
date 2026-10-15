#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS46_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA6A2B0)
#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS46_0__JOINSESSION_B__0_OFFSET UNITYSDK_OFFSET(0xDA6AF80)

namespace RPG::Client
{
	inline static constexpr unsigned int PSManager___c__DisplayClass46_0_TypeDefinitionIndex = 66740;

	class PSManager___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::String* sessionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS46_0_CTOR_OFFSET))(this);
		}

		::System::Void _JoinSession_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS46_0__JOINSESSION_B__0_OFFSET))(this, a1);
		}

	};
}
