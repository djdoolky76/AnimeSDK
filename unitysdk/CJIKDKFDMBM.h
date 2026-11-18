#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define CJIKDKFDMBM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x145CD910)
#define CJIKDKFDMBM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x145CD7E0)
#define CJIKDKFDMBM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x145CD750)
#define CJIKDKFDMBM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x145CD870)
#define CJIKDKFDMBM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x145CD650)
#define CJIKDKFDMBM__CCTOR_OFFSET UNITYSDK_OFFSET(0x145CD6D0)
#define CJIKDKFDMBM__CTOR_OFFSET UNITYSDK_OFFSET(0x145CD740)

inline static constexpr unsigned int CJIKDKFDMBM_TypeDefinitionIndex = 62024;

class CJIKDKFDMBM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x67; // 0x0
	::System::Boolean BLKJDELBNNB; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJIKDKFDMBM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIKDKFDMBM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIKDKFDMBM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIKDKFDMBM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIKDKFDMBM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIKDKFDMBM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean BKPAEDCEMON)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJIKDKFDMBM_CNHBDOMKKDE_OFFSET))(this, BKPAEDCEMON);
	}
};
