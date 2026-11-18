#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDEHNKGKACK.h"
#include "unitysdk/JPDHILFCILB.h"

namespace System { class String; }

#define DBAICAOGMOD_EAHAHGEDJND_OFFSET UNITYSDK_OFFSET(0x1A1CDF40)
#define DBAICAOGMOD_OHHOAEBHHDI_OFFSET UNITYSDK_OFFSET(0x1A1CDF00)
#define DBAICAOGMOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CE0D0)

inline static constexpr unsigned int DBAICAOGMOD_TypeDefinitionIndex = 89976;

class DBAICAOGMOD : public ::NDEHNKGKACK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAICAOGMOD__CTOR_OFFSET))(this);
	}

	::System::String* OHHOAEBHHDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAICAOGMOD_OHHOAEBHHDI_OFFSET))(this);
	}

	::JPDHILFCILB EAHAHGEDJND(::JPDHILFCILB PPKCIIOEIJI, ::JPDHILFCILB LGEMJIABMPO)
	{
		return ((::JPDHILFCILB(*)(::PVOID, ::JPDHILFCILB, ::JPDHILFCILB))((::PBYTE)hIl2Cpp + DBAICAOGMOD_EAHAHGEDJND_OFFSET))(this, PPKCIIOEIJI, LGEMJIABMPO);
	}
};
