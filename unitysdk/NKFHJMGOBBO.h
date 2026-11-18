#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNNHMDCKJOB.h"

class CJIEIHEDMME;

#define NKFHJMGOBBO_DEKNGAMFBPH_OFFSET UNITYSDK_OFFSET(0x172957E0)
#define NKFHJMGOBBO_EDJKEKOKEPD_OFFSET UNITYSDK_OFFSET(0x17295410)
#define NKFHJMGOBBO__CTOR_OFFSET UNITYSDK_OFFSET(0x172957D0)

inline static constexpr unsigned int NKFHJMGOBBO_TypeDefinitionIndex = 65540;

class NKFHJMGOBBO : public ::MNNHMDCKJOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKFHJMGOBBO__CTOR_OFFSET))(this);
	}

	::System::Void EDJKEKOKEPD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + NKFHJMGOBBO_EDJKEKOKEPD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void DEKNGAMFBPH(::CJIEIHEDMME* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + NKFHJMGOBBO_DEKNGAMFBPH_OFFSET))(this, MIALFKCCCPI);
	}
};
