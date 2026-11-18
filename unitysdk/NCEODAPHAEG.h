#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

#define NCEODAPHAEG_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x16B62F60)
#define NCEODAPHAEG_GONIMLGAMEI_OFFSET UNITYSDK_OFFSET(0x16B630E0)
#define NCEODAPHAEG_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x16B63050)
#define NCEODAPHAEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16B62C90)
#define NCEODAPHAEG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B63010)

inline static constexpr unsigned int NCEODAPHAEG_TypeDefinitionIndex = 44344;

class NCEODAPHAEG : public ::BBKFNNHAKBP
{
public:
	::System::Int32 LDDIBDOIJEC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEODAPHAEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEODAPHAEG_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEODAPHAEG_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEODAPHAEG_KHAEIOINMBG_OFFSET))(this);
	}

	::System::Void GONIMLGAMEI(::System::Int32 PPKEDEIDCGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCEODAPHAEG_GONIMLGAMEI_OFFSET))(this, PPKEDEIDCGD);
	}
};
