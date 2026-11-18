#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OMPFICOEDFF;
namespace System { class String; }

#define AMJCFGOGENM_PHOOKPKJICE_JDBIPFKHCDO_OFFSET UNITYSDK_OFFSET(0x134E2B70)
#define AMJCFGOGENM_PHOOKPKJICE__CTOR_OFFSET UNITYSDK_OFFSET(0x134E2B60)

inline static constexpr unsigned int AMJCFGOGENM_PHOOKPKJICE_TypeDefinitionIndex = 92763;

class AMJCFGOGENM_PHOOKPKJICE : public ::System::Object
{
public:
	::System::String* EDGBMBBOCNG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM_PHOOKPKJICE__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBIPFKHCDO(::OMPFICOEDFF* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMPFICOEDFF*))((::PBYTE)hIl2Cpp + AMJCFGOGENM_PHOOKPKJICE_JDBIPFKHCDO_OFFSET))(this, DFMKILICPFB);
	}
};
