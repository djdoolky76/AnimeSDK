#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMOOAAKONBD;
namespace MoleMole::Config { class GamepadRumbleEntry; }
namespace System { class String; }

#define DMOOAAKONBD_DDLBLGNAPLJ_IPPJNLKBGGI_OFFSET UNITYSDK_OFFSET(0x13E5A310)
#define DMOOAAKONBD_DDLBLGNAPLJ_JOGFHLMBPDM_OFFSET UNITYSDK_OFFSET(0x13E5A3A0)
#define DMOOAAKONBD_DDLBLGNAPLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13E5A300)

inline static constexpr unsigned int DMOOAAKONBD_DDLBLGNAPLJ_TypeDefinitionIndex = 82815;

class DMOOAAKONBD_DDLBLGNAPLJ : public ::System::Object
{
public:
	::MoleMole::Config::GamepadRumbleEntry* BHBOHMNGMPK; // 0x10
	::DMOOAAKONBD* KLHPEBKNIFB; // 0x18
	::System::String* MCOHLHMKLIP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOOAAKONBD_DDLBLGNAPLJ__CTOR_OFFSET))(this);
	}

	::System::Void IPPJNLKBGGI(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DMOOAAKONBD_DDLBLGNAPLJ_IPPJNLKBGGI_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}

	::System::Void JOGFHLMBPDM(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DMOOAAKONBD_DDLBLGNAPLJ_JOGFHLMBPDM_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}
};
