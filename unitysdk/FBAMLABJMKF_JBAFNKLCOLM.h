#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF_OABEILNIEOK;
class PNJDGHBEMLK;

#define FBAMLABJMKF_JBAFNKLCOLM_ABEMBCEILCL_OFFSET UNITYSDK_OFFSET(0xF9EEEB0)
#define FBAMLABJMKF_JBAFNKLCOLM__CTOR_OFFSET UNITYSDK_OFFSET(0xF9EEEA0)

inline static constexpr unsigned int FBAMLABJMKF_JBAFNKLCOLM_TypeDefinitionIndex = 78145;

class FBAMLABJMKF_JBAFNKLCOLM : public ::System::Object
{
public:
	::FBAMLABJMKF_OABEILNIEOK* KGFKHBMEKBL; // 0x10
	::System::Single BFMMEICFNCD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_JBAFNKLCOLM__CTOR_OFFSET))(this);
	}

	::System::Boolean ABEMBCEILCL(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_JBAFNKLCOLM_ABEMBCEILCL_OFFSET))(this, CDKCJAKODPN);
	}
};
