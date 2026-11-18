#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPICNDJAPFN.h"

class LJGLBEHLLBO;
class LNPEBGNBKMF;
namespace System { class String; }

#define BIIPAKCGIJO_CJBCHJLHELG_OFFSET UNITYSDK_OFFSET(0x1DAB1CF0)
#define BIIPAKCGIJO_MNKPNPKONBP_OFFSET UNITYSDK_OFFSET(0x1DAB1C30)
#define BIIPAKCGIJO_OHKCLMDBOID_OFFSET UNITYSDK_OFFSET(0x1DAB1F40)
#define BIIPAKCGIJO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB1BF0)

inline static constexpr unsigned int BIIPAKCGIJO_TypeDefinitionIndex = 93679;

class BIIPAKCGIJO : public ::OPICNDJAPFN
{
public:
	::LJGLBEHLLBO* HBHNPKPPKFE; // 0x40

	::System::Void _ctor(::LNPEBGNBKMF* JLLAMEIACCM)
	{
		return ((::System::Void(*)(::PVOID, ::LNPEBGNBKMF*))((::PBYTE)hIl2Cpp + BIIPAKCGIJO__CTOR_OFFSET))(this, JLLAMEIACCM);
	}

	::System::String* MNKPNPKONBP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIPAKCGIJO_MNKPNPKONBP_OFFSET))(this);
	}

	::System::Void CJBCHJLHELG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BIIPAKCGIJO_CJBCHJLHELG_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::String* OHKCLMDBOID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIPAKCGIJO_OHKCLMDBOID_OFFSET))(this);
	}
};
