#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CPGMPAFIJOB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A1C4DB0)
#define CPGMPAFIJOB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A1C4CE0)
#define CPGMPAFIJOB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A1C5040)
#define CPGMPAFIJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C4F50)

inline static constexpr unsigned int CPGMPAFIJOB_TypeDefinitionIndex = 77126;

class CPGMPAFIJOB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* LFEAAMLJAMK; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* CNFGPELOPNM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGMPAFIJOB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGMPAFIJOB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPGMPAFIJOB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGMPAFIJOB_GDEOPIBNOIN_OFFSET))(this);
	}
};
