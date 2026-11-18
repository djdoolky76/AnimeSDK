#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIPCMLEONLI;

#define FAPOJHHEIMH_HLKGLCKHNFP_ALCCMNLIGJE_OFFSET UNITYSDK_OFFSET(0x13562480)
#define FAPOJHHEIMH_HLKGLCKHNFP_FFIEOCBBJAF_OFFSET UNITYSDK_OFFSET(0x140DBF10)
#define FAPOJHHEIMH_HLKGLCKHNFP__CTOR_OFFSET UNITYSDK_OFFSET(0x13562470)

inline static constexpr unsigned int FAPOJHHEIMH_HLKGLCKHNFP_TypeDefinitionIndex = 82338;

class FAPOJHHEIMH_HLKGLCKHNFP : public ::System::Object
{
public:
	::System::Int32 HBFCDLLPFGK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPOJHHEIMH_HLKGLCKHNFP__CTOR_OFFSET))(this);
	}

	::System::Boolean ALCCMNLIGJE(::GIPCMLEONLI* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::GIPCMLEONLI*))((::PBYTE)hIl2Cpp + FAPOJHHEIMH_HLKGLCKHNFP_ALCCMNLIGJE_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Boolean FFIEOCBBJAF(::GIPCMLEONLI* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::GIPCMLEONLI*))((::PBYTE)hIl2Cpp + FAPOJHHEIMH_HLKGLCKHNFP_FFIEOCBBJAF_OFFSET))(this, IMLLDOHDCNC);
	}
};
