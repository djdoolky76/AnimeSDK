#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJKJDFBGJPL.h"
#include "unitysdk/JPDHILFCILB.h"

namespace System { class String; }

#define BDFJNAAIPEH_EAHAHGEDJND_OFFSET UNITYSDK_OFFSET(0x169E5B10)
#define BDFJNAAIPEH_OHHOAEBHHDI_OFFSET UNITYSDK_OFFSET(0x169E5AD0)
#define BDFJNAAIPEH__CTOR_OFFSET UNITYSDK_OFFSET(0x169E5C60)

inline static constexpr unsigned int BDFJNAAIPEH_TypeDefinitionIndex = 90095;

class BDFJNAAIPEH : public ::DJKJDFBGJPL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFJNAAIPEH__CTOR_OFFSET))(this);
	}

	::System::String* OHHOAEBHHDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFJNAAIPEH_OHHOAEBHHDI_OFFSET))(this);
	}

	::JPDHILFCILB EAHAHGEDJND(::JPDHILFCILB OMMEALOOOOD)
	{
		return ((::JPDHILFCILB(*)(::PVOID, ::JPDHILFCILB))((::PBYTE)hIl2Cpp + BDFJNAAIPEH_EAHAHGEDJND_OFFSET))(this, OMMEALOOOOD);
	}
};
