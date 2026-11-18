#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNCGCMHIOGN;

#define DMHOLJNNCJA_IDJFPIAHDDC_JMHDKNDCFIL_OFFSET UNITYSDK_OFFSET(0x1834D700)
#define DMHOLJNNCJA_IDJFPIAHDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1834D6F0)

inline static constexpr unsigned int DMHOLJNNCJA_IDJFPIAHDDC_TypeDefinitionIndex = 46943;

class DMHOLJNNCJA_IDJFPIAHDDC : public ::System::Object
{
public:
	::PNCGCMHIOGN* NOCCODBMGFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_IDJFPIAHDDC__CTOR_OFFSET))(this);
	}

	::System::Boolean JMHDKNDCFIL(::PNCGCMHIOGN* ALPANKAJAGK)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNCGCMHIOGN*))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_IDJFPIAHDDC_JMHDKNDCFIL_OFFSET))(this, ALPANKAJAGK);
	}
};
