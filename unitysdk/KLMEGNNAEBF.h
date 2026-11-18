#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define KLMEGNNAEBF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15221D50)
#define KLMEGNNAEBF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15221CC0)
#define KLMEGNNAEBF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15221C30)
#define KLMEGNNAEBF__CCTOR_OFFSET UNITYSDK_OFFSET(0x15221BB0)
#define KLMEGNNAEBF__CTOR_OFFSET UNITYSDK_OFFSET(0x15221C20)

inline static constexpr unsigned int KLMEGNNAEBF_TypeDefinitionIndex = 92276;

class KLMEGNNAEBF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x2F; // 0x0
	::System::Boolean HPINBCPMHJE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLMEGNNAEBF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEGNNAEBF__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEGNNAEBF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMEGNNAEBF_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean HPINBCPMHJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLMEGNNAEBF_CNHBDOMKKDE_OFFSET))(this, HPINBCPMHJE);
	}
};
