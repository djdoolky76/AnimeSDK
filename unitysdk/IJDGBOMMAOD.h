#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define IJDGBOMMAOD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x153ACCC0)
#define IJDGBOMMAOD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x153ACA00)
#define IJDGBOMMAOD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x153AD480)
#define IJDGBOMMAOD__CTOR_OFFSET UNITYSDK_OFFSET(0x153AD240)

inline static constexpr unsigned int IJDGBOMMAOD_TypeDefinitionIndex = 79867;

class IJDGBOMMAOD : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* FMDCCMLPJDM; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* NOMHDNNPDJF; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* LFPCKGNFIME; // 0x28
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* APABAMKOPJE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDGBOMMAOD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDGBOMMAOD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IJDGBOMMAOD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDGBOMMAOD_GDEOPIBNOIN_OFFSET))(this);
	}
};
