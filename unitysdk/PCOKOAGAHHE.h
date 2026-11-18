#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PCOKOAGAHHE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1195CDE0)
#define PCOKOAGAHHE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1195CD10)
#define PCOKOAGAHHE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1195D290)
#define PCOKOAGAHHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1195D1A0)

inline static constexpr unsigned int PCOKOAGAHHE_TypeDefinitionIndex = 69325;

class PCOKOAGAHHE : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* OJAMPHDOBJA; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* DNPOAEIPHGH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOKOAGAHHE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOKOAGAHHE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PCOKOAGAHHE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOKOAGAHHE_GDEOPIBNOIN_OFFSET))(this);
	}
};
