#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BEPOLNIANJN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1854E730)
#define BEPOLNIANJN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1854E6A0)
#define BEPOLNIANJN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1854E610)
#define BEPOLNIANJN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1854E590)
#define BEPOLNIANJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1854E600)

inline static constexpr unsigned int BEPOLNIANJN_TypeDefinitionIndex = 80430;

class BEPOLNIANJN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xDA; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEPOLNIANJN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPOLNIANJN__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPOLNIANJN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPOLNIANJN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPOLNIANJN_CNHBDOMKKDE_OFFSET))(this);
	}
};
