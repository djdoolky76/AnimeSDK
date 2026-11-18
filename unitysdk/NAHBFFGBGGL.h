#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDEHNKGKACK.h"
#include "unitysdk/JPDHILFCILB.h"

namespace System { class String; }

#define NAHBFFGBGGL_EAHAHGEDJND_OFFSET UNITYSDK_OFFSET(0x18C48020)
#define NAHBFFGBGGL_OHHOAEBHHDI_OFFSET UNITYSDK_OFFSET(0x18C47FE0)
#define NAHBFFGBGGL__CTOR_OFFSET UNITYSDK_OFFSET(0x18C481A0)

inline static constexpr unsigned int NAHBFFGBGGL_TypeDefinitionIndex = 87010;

class NAHBFFGBGGL : public ::NDEHNKGKACK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHBFFGBGGL__CTOR_OFFSET))(this);
	}

	::System::String* OHHOAEBHHDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHBFFGBGGL_OHHOAEBHHDI_OFFSET))(this);
	}

	::JPDHILFCILB EAHAHGEDJND(::JPDHILFCILB PPKCIIOEIJI, ::JPDHILFCILB LGEMJIABMPO)
	{
		return ((::JPDHILFCILB(*)(::PVOID, ::JPDHILFCILB, ::JPDHILFCILB))((::PBYTE)hIl2Cpp + NAHBFFGBGGL_EAHAHGEDJND_OFFSET))(this, PPKCIIOEIJI, LGEMJIABMPO);
	}
};
