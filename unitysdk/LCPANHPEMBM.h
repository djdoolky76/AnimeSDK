#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGNPOMIAMOI;

#define LCPANHPEMBM_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x1F43A470)
#define LCPANHPEMBM_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x1F43A3E0)
#define LCPANHPEMBM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1F43A310)
#define LCPANHPEMBM_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x1F43A550)
#define LCPANHPEMBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F43A3A0)

inline static constexpr unsigned int LCPANHPEMBM_TypeDefinitionIndex = 29028;

class LCPANHPEMBM : public ::System::Object
{
public:
	// static const ::System::Int32 OHFAFKKIBMO = 0x100; // 0x0
	::Il2CppArray<::JGNPOMIAMOI*>* OIKHJHDKOJJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPANHPEMBM__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPANHPEMBM_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void FLHNGDLANDC(::JGNPOMIAMOI* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::JGNPOMIAMOI*))((::PBYTE)hIl2Cpp + LCPANHPEMBM_FLHNGDLANDC_OFFSET))(this, GBELIHABEDH);
	}

	::System::Void ANPBCLAFCJB(::JGNPOMIAMOI* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::JGNPOMIAMOI*))((::PBYTE)hIl2Cpp + LCPANHPEMBM_ANPBCLAFCJB_OFFSET))(this, GBELIHABEDH);
	}

	::JGNPOMIAMOI* OMPFLKCBFHF(::System::Int32 IJMOMICKHEN)
	{
		return ((::JGNPOMIAMOI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCPANHPEMBM_OMPFLKCBFHF_OFFSET))(this, IJMOMICKHEN);
	}
};
