#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGIENOHBMJ;
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD15BDA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS4_0__SENDGETGAMEREFSTATICDATAAPIHTTPREQ_B__0_OFFSET UNITYSDK_OFFSET(0xD1657F0)

namespace RPG::Client
{
	class GridFightGameRef___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _SendGetGameRefStaticDataApiHttpReq_b__0(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS4_0__SENDGETGAMEREFSTATICDATAAPIHTTPREQ_B__0_OFFSET))(this, a1);
		}

	};
}
