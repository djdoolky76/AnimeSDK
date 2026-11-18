#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLAOLLBNIKL.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/MKEAICMIBPL.h"

class KDAMKPJPCME;

#define EIIPGKMGIJO_CJBCHJLHELG_OFFSET UNITYSDK_OFFSET(0x1EA14290)
#define EIIPGKMGIJO_LDFNHHIIPOD_OFFSET UNITYSDK_OFFSET(0x1EA14740)
#define EIIPGKMGIJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA141B0)

inline static constexpr unsigned int EIIPGKMGIJO_TypeDefinitionIndex = 94819;

class EIIPGKMGIJO : public ::MKEAICMIBPL
{
public:
	// static const ::System::Single KPIGDCHBGPF; // 0x0
	::JGLIFHIAIEH FPOFECBCDDH; // 0x30
	::DLAOLLBNIKL OCOJFKMOKMK; // 0x38
	::System::Single PFDEICFIHDC; // 0x3C

	::System::Void _ctor(::KDAMKPJPCME* JLLAMEIACCM)
	{
		return ((::System::Void(*)(::PVOID, ::KDAMKPJPCME*))((::PBYTE)hIl2Cpp + EIIPGKMGIJO__CTOR_OFFSET))(this, JLLAMEIACCM);
	}

	::System::Void CJBCHJLHELG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIIPGKMGIJO_CJBCHJLHELG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean LDFNHHIIPOD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIPGKMGIJO_LDFNHHIIPOD_OFFSET))(this);
	}
};
