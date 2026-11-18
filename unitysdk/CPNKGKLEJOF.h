#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/IBLIIKNIAFE.h"

#define CPNKGKLEJOF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x193EEF30)
#define CPNKGKLEJOF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x193EEF80)
#define CPNKGKLEJOF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x193EEEA0)
#define CPNKGKLEJOF__CCTOR_OFFSET UNITYSDK_OFFSET(0x193EEE20)
#define CPNKGKLEJOF__CTOR_OFFSET UNITYSDK_OFFSET(0x193EEE90)

inline static constexpr unsigned int CPNKGKLEJOF_TypeDefinitionIndex = 74079;

class CPNKGKLEJOF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x65; // 0x0
	::IBLIIKNIAFE KKMENMCMMBN; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNKGKLEJOF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKGKLEJOF__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKGKLEJOF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::IBLIIKNIAFE KKMENMCMMBN)
	{
		return ((::System::Void(*)(::PVOID, ::IBLIIKNIAFE))((::PBYTE)hIl2Cpp + CPNKGKLEJOF_CNHBDOMKKDE_OFFSET))(this, KKMENMCMMBN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKGKLEJOF_FIGPAOKNJLN_OFFSET))(this);
	}
};
