#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDEHNKGKACK.h"
#include "unitysdk/JPDHILFCILB.h"

namespace System { class String; }

#define KFOHIMMNLJE_EAHAHGEDJND_OFFSET UNITYSDK_OFFSET(0x157E93A0)
#define KFOHIMMNLJE_OHHOAEBHHDI_OFFSET UNITYSDK_OFFSET(0x157E9360)
#define KFOHIMMNLJE__CTOR_OFFSET UNITYSDK_OFFSET(0x157E95D0)

inline static constexpr unsigned int KFOHIMMNLJE_TypeDefinitionIndex = 67570;

class KFOHIMMNLJE : public ::NDEHNKGKACK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOHIMMNLJE__CTOR_OFFSET))(this);
	}

	::System::String* OHHOAEBHHDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOHIMMNLJE_OHHOAEBHHDI_OFFSET))(this);
	}

	::JPDHILFCILB EAHAHGEDJND(::JPDHILFCILB PPKCIIOEIJI, ::JPDHILFCILB LGEMJIABMPO)
	{
		return ((::JPDHILFCILB(*)(::PVOID, ::JPDHILFCILB, ::JPDHILFCILB))((::PBYTE)hIl2Cpp + KFOHIMMNLJE_EAHAHGEDJND_OFFSET))(this, PPKCIIOEIJI, LGEMJIABMPO);
	}
};
