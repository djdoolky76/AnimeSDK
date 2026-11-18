#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BHHCOGGKDEM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1856A8A0)
#define BHHCOGGKDEM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1856A810)
#define BHHCOGGKDEM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1856A6E0)
#define BHHCOGGKDEM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1856A770)
#define BHHCOGGKDEM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1856A5F0)
#define BHHCOGGKDEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1856A660)
#define BHHCOGGKDEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1856A6D0)

inline static constexpr unsigned int BHHCOGGKDEM_TypeDefinitionIndex = 43660;

class BHHCOGGKDEM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x13B; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHHCOGGKDEM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHCOGGKDEM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHCOGGKDEM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHCOGGKDEM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHCOGGKDEM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHCOGGKDEM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHCOGGKDEM_CNHBDOMKKDE_OFFSET))(this);
	}
};
