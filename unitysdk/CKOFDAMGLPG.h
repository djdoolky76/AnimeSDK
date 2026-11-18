#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define CKOFDAMGLPG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A1B8A70)
#define CKOFDAMGLPG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A1B89E0)
#define CKOFDAMGLPG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1B8960)
#define CKOFDAMGLPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B89D0)

inline static constexpr unsigned int CKOFDAMGLPG_TypeDefinitionIndex = 70647;

class CKOFDAMGLPG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xFE; // 0x0
	::System::Int32 CFMBGCMCNMM; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKOFDAMGLPG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOFDAMGLPG__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOFDAMGLPG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOFDAMGLPG_FIGPAOKNJLN_OFFSET))(this);
	}
};
