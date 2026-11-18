#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MGCPJNAGCHA_KDKKFLKKHNA_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x774100)
#define MGCPJNAGCHA_KDKKFLKKHNA_DANIBFAIJIN_OFFSET UNITYSDK_OFFSET(0x7740B0)
#define MGCPJNAGCHA_KDKKFLKKHNA_LGNMMGFANEN_OFFSET UNITYSDK_OFFSET(0x773FF0)
#define MGCPJNAGCHA_KDKKFLKKHNA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x774050)

inline static constexpr unsigned int MGCPJNAGCHA_KDKKFLKKHNA_TypeDefinitionIndex = 51608;

struct alignas(4) MGCPJNAGCHA_KDKKFLKKHNA
{
	::System::Int32 GOKEGHENOGP; // 0x10
	::System::Int32 EHPAJFODHIP; // 0x14

	::System::Boolean LGNMMGFANEN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPJNAGCHA_KDKKFLKKHNA_LGNMMGFANEN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD(::System::Int32 FFKACGMPIHJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MGCPJNAGCHA_KDKKFLKKHNA_NPOLNFDBOOD_OFFSET))(this, FFKACGMPIHJ);
	}

	::System::Boolean DANIBFAIJIN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPJNAGCHA_KDKKFLKKHNA_DANIBFAIJIN_OFFSET))(this);
	}

	::System::Boolean ANPBCLAFCJB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCPJNAGCHA_KDKKFLKKHNA_ANPBCLAFCJB_OFFSET))(this);
	}
};
