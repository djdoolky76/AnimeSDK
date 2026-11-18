#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDEHNKGKACK.h"
#include "unitysdk/JPDHILFCILB.h"

namespace System { class String; }

#define GPOCOKALOJH_EAHAHGEDJND_OFFSET UNITYSDK_OFFSET(0x15B36810)
#define GPOCOKALOJH_OHHOAEBHHDI_OFFSET UNITYSDK_OFFSET(0x15B367D0)
#define GPOCOKALOJH__CTOR_OFFSET UNITYSDK_OFFSET(0x15B36990)

inline static constexpr unsigned int GPOCOKALOJH_TypeDefinitionIndex = 84842;

class GPOCOKALOJH : public ::NDEHNKGKACK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCOKALOJH__CTOR_OFFSET))(this);
	}

	::System::String* OHHOAEBHHDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOCOKALOJH_OHHOAEBHHDI_OFFSET))(this);
	}

	::JPDHILFCILB EAHAHGEDJND(::JPDHILFCILB PPKCIIOEIJI, ::JPDHILFCILB LGEMJIABMPO)
	{
		return ((::JPDHILFCILB(*)(::PVOID, ::JPDHILFCILB, ::JPDHILFCILB))((::PBYTE)hIl2Cpp + GPOCOKALOJH_EAHAHGEDJND_OFFSET))(this, PPKCIIOEIJI, LGEMJIABMPO);
	}
};
