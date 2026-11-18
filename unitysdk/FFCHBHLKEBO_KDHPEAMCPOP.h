#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define FFCHBHLKEBO_KDHPEAMCPOP_FLPNHBBEIDO_OFFSET UNITYSDK_OFFSET(0x11D71B00)
#define FFCHBHLKEBO_KDHPEAMCPOP_KALILDODAGO_OFFSET UNITYSDK_OFFSET(0x11D71B10)
#define FFCHBHLKEBO_KDHPEAMCPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x11D71AF0)

inline static constexpr unsigned int FFCHBHLKEBO_KDHPEAMCPOP_TypeDefinitionIndex = 86063;

class FFCHBHLKEBO_KDHPEAMCPOP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFCHBHLKEBO_KDHPEAMCPOP__CTOR_OFFSET))(this);
	}

	::System::Void FLPNHBBEIDO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FFCHBHLKEBO_KDHPEAMCPOP_FLPNHBBEIDO_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void KALILDODAGO(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FFCHBHLKEBO_KDHPEAMCPOP_KALILDODAGO_OFFSET))(this, NAPFALLANDL);
	}
};
