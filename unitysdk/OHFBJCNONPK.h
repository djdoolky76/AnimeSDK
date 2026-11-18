#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define OHFBJCNONPK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xF191500)
#define OHFBJCNONPK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xF191560)
#define OHFBJCNONPK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xF191470)
#define OHFBJCNONPK__CCTOR_OFFSET UNITYSDK_OFFSET(0xF1913F0)
#define OHFBJCNONPK__CTOR_OFFSET UNITYSDK_OFFSET(0xF191460)

inline static constexpr unsigned int OHFBJCNONPK_TypeDefinitionIndex = 90058;

class OHFBJCNONPK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x3E; // 0x0
	::System::Int32 GLCCOAOBDIF; // 0x20
	::System::Boolean DOFCLPCLHOJ; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHFBJCNONPK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFBJCNONPK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFBJCNONPK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 GLCCOAOBDIF, ::System::Boolean DOFCLPCLHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OHFBJCNONPK_CNHBDOMKKDE_OFFSET))(this, GLCCOAOBDIF, DOFCLPCLHOJ);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFBJCNONPK_FIGPAOKNJLN_OFFSET))(this);
	}
};
