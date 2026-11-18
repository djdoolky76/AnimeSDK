#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDEHNKGKACK.h"
#include "unitysdk/JPDHILFCILB.h"

namespace System { class String; }

#define KOKBJMFFGIG_EAHAHGEDJND_OFFSET UNITYSDK_OFFSET(0x13C8A130)
#define KOKBJMFFGIG_OHHOAEBHHDI_OFFSET UNITYSDK_OFFSET(0x13C8A0F0)
#define KOKBJMFFGIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8A2B0)

inline static constexpr unsigned int KOKBJMFFGIG_TypeDefinitionIndex = 55321;

class KOKBJMFFGIG : public ::NDEHNKGKACK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBJMFFGIG__CTOR_OFFSET))(this);
	}

	::System::String* OHHOAEBHHDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKBJMFFGIG_OHHOAEBHHDI_OFFSET))(this);
	}

	::JPDHILFCILB EAHAHGEDJND(::JPDHILFCILB PPKCIIOEIJI, ::JPDHILFCILB LGEMJIABMPO)
	{
		return ((::JPDHILFCILB(*)(::PVOID, ::JPDHILFCILB, ::JPDHILFCILB))((::PBYTE)hIl2Cpp + KOKBJMFFGIG_EAHAHGEDJND_OFFSET))(this, PPKCIIOEIJI, LGEMJIABMPO);
	}
};
