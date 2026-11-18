#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMBIGIINHFJ.h"
#include "unitysdk/COJIGJFLJME.h"

class KGBFLHNJHHN;

#define GGLJLBOIEFM_ENGLHHBDMGI_OFFSET UNITYSDK_OFFSET(0x1BACA800)
#define GGLJLBOIEFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACA7F0)

inline static constexpr unsigned int GGLJLBOIEFM_TypeDefinitionIndex = 10548;

class GGLJLBOIEFM : public ::HMBIGIINHFJ
{
public:
	::System::Void _ctor(::COJIGJFLJME LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::COJIGJFLJME, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GGLJLBOIEFM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 ENGLHHBDMGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLJLBOIEFM_ENGLHHBDMGI_OFFSET))(this);
	}
};
