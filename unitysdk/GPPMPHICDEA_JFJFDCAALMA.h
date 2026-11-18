#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGBMOOJHMBF;

#define GPPMPHICDEA_JFJFDCAALMA_MJKHKNJCALI_OFFSET UNITYSDK_OFFSET(0x14921670)
#define GPPMPHICDEA_JFJFDCAALMA__CTOR_OFFSET UNITYSDK_OFFSET(0x14921660)

inline static constexpr unsigned int GPPMPHICDEA_JFJFDCAALMA_TypeDefinitionIndex = 42618;

class GPPMPHICDEA_JFJFDCAALMA : public ::System::Object
{
public:
	::System::Int32 LDFGDMAFLPL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JFJFDCAALMA__CTOR_OFFSET))(this);
	}

	::System::Void MJKHKNJCALI(::JGBMOOJHMBF* CGKFIIGDHAL)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JFJFDCAALMA_MJKHKNJCALI_OFFSET))(this, CGKFIIGDHAL);
	}
};
