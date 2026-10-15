#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS44_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA69F50)
#define RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS44_0__CREATESESSION_B__0_OFFSET UNITYSDK_OFFSET(0xDA6A980)

namespace RPG::Client
{
	inline static constexpr unsigned int PSManager___c__DisplayClass44_0_TypeDefinitionIndex = 66738;

	class PSManager___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS44_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateSession_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSMANAGER___C__DISPLAYCLASS44_0__CREATESESSION_B__0_OFFSET))(this, a1);
		}

	};
}
