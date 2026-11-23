#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/SafeHandle.h"

#define FB9C69C2978712B9_A4555184A1656FFE_OFFSET UNITYSDK_OFFSET(0x3C96F10)
#define FB9C69C2978712B9__CTOR_OFFSET UNITYSDK_OFFSET(0x3C96EC0)

inline static constexpr unsigned int FB9C69C2978712B9_TypeDefinitionIndex = 11692;

class FB9C69C2978712B9 : public ::System::Runtime::InteropServices::SafeHandle
{
public:
	::System::Void _ctor(::System::Boolean F61E953F737E3C7A)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FB9C69C2978712B9__CTOR_OFFSET))(this, F61E953F737E3C7A);
	}

	::System::Boolean A4555184A1656FFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FB9C69C2978712B9_A4555184A1656FFE_OFFSET))(this);
	}
};
