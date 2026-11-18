#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define JBBMHNCEMJK_FHCLNIBNJFD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x130663D0)
#define JBBMHNCEMJK_FHCLNIBNJFD__CTOR_OFFSET UNITYSDK_OFFSET(0x130663C0)

inline static constexpr unsigned int JBBMHNCEMJK_FHCLNIBNJFD_TypeDefinitionIndex = 46856;

class JBBMHNCEMJK_FHCLNIBNJFD : public ::System::Object
{
public:
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBMHNCEMJK_FHCLNIBNJFD__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBMHNCEMJK_FHCLNIBNJFD_LIDNPLMPHAL_OFFSET))(this);
	}
};
