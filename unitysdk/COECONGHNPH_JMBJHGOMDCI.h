#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/COECONGHNPH_EMOCKMCNAKD.h"

#define COECONGHNPH_JMBJHGOMDCI_COMPARE_OFFSET UNITYSDK_OFFSET(0x147AFE70)
#define COECONGHNPH_JMBJHGOMDCI__CTOR_OFFSET UNITYSDK_OFFSET(0x147AFEF0)

inline static constexpr unsigned int COECONGHNPH_JMBJHGOMDCI_TypeDefinitionIndex = 66836;

class COECONGHNPH_JMBJHGOMDCI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COECONGHNPH_JMBJHGOMDCI__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::COECONGHNPH_EMOCKMCNAKD HAAEBCOBKFF, ::COECONGHNPH_EMOCKMCNAKD BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::COECONGHNPH_EMOCKMCNAKD, ::COECONGHNPH_EMOCKMCNAKD))((::PBYTE)hIl2Cpp + COECONGHNPH_JMBJHGOMDCI_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
