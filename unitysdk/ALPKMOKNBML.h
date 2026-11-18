#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCKLHFKJAHH.h"

class OMDAPGKMILG;

#define ALPKMOKNBML_GLPCKGAMNGG_OFFSET UNITYSDK_OFFSET(0x134E2120)
#define ALPKMOKNBML_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x134E2170)
#define ALPKMOKNBML__CTOR_OFFSET UNITYSDK_OFFSET(0x134E21D0)

inline static constexpr unsigned int ALPKMOKNBML_TypeDefinitionIndex = 60744;

class ALPKMOKNBML : public ::PCKLHFKJAHH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPKMOKNBML__CTOR_OFFSET))(this);
	}

	::System::Boolean GLPCKGAMNGG(::OMDAPGKMILG* LJBPECKCCEA, ::System::Boolean AKCGNOGCACG)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMDAPGKMILG*, ::System::Boolean))((::PBYTE)hIl2Cpp + ALPKMOKNBML_GLPCKGAMNGG_OFFSET))(this, LJBPECKCCEA, AKCGNOGCACG);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ALPKMOKNBML_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}
};
