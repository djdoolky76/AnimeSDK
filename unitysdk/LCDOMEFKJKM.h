#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENDIKPBCBBO;

#define LCDOMEFKJKM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18654050)
#define LCDOMEFKJKM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x18653F90)
#define LCDOMEFKJKM_KDDDIKFDEII_OFFSET UNITYSDK_OFFSET(0x186540F0)
#define LCDOMEFKJKM_LOPODKHFJFJ_OFFSET UNITYSDK_OFFSET(0x18654110)
#define LCDOMEFKJKM__CTOR_OFFSET UNITYSDK_OFFSET(0x18653F80)

inline static constexpr unsigned int LCDOMEFKJKM_TypeDefinitionIndex = 93103;

class LCDOMEFKJKM : public ::System::Object
{
public:
	::System::Single PLIEJAHPCOP; // 0x10
	::System::UInt32 PMNFHLOGIFO; // 0x14
	::System::Single HAIIKCBEJMD; // 0x18
	::System::UInt32 PFMCLCMBDJM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDOMEFKJKM__CTOR_OFFSET))(this);
	}

	static ::LCDOMEFKJKM* JFDOOELFAOA(::ENDIKPBCBBO* HACJFKBLODH)
	{
		return ((::LCDOMEFKJKM*(*)(::ENDIKPBCBBO*))((::PBYTE)hIl2Cpp + LCDOMEFKJKM_JFDOOELFAOA_OFFSET))(HACJFKBLODH);
	}

	::LCDOMEFKJKM* DGNAAPGKIPL()
	{
		return ((::LCDOMEFKJKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDOMEFKJKM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::UInt32 KDDDIKFDEII()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDOMEFKJKM_KDDDIKFDEII_OFFSET))(this);
	}

	::System::UInt32 LOPODKHFJFJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCDOMEFKJKM_LOPODKHFJFJ_OFFSET))(this);
	}
};
