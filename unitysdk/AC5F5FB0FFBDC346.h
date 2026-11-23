#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/SafeHandle.h"

#define AC5F5FB0FFBDC346_A4555184A1656FFE_OFFSET UNITYSDK_OFFSET(0x3C6A640)
#define AC5F5FB0FFBDC346__CTOR_OFFSET UNITYSDK_OFFSET(0x3C6A630)

inline static constexpr unsigned int AC5F5FB0FFBDC346_TypeDefinitionIndex = 11659;

class AC5F5FB0FFBDC346 : public ::System::Runtime::InteropServices::SafeHandle
{
public:
	::System::Boolean A4555184A1656FFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AC5F5FB0FFBDC346_A4555184A1656FFE_OFFSET))(this);
	}

	::System::Void _ctor(::System::Boolean F61E953F737E3C7A)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AC5F5FB0FFBDC346__CTOR_OFFSET))(this, F61E953F737E3C7A);
	}
};
