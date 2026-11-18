#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKCJAIFHNKF.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/NEIGJHNJNFL.h"

class KCBEGMCCKCA;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define HJEKLHIDFJN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13DA3DB0)
#define HJEKLHIDFJN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13DA3920)
#define HJEKLHIDFJN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13DA4150)
#define HJEKLHIDFJN_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0x13DA3B20)
#define HJEKLHIDFJN__CTOR_OFFSET UNITYSDK_OFFSET(0x13DA3F90)

inline static constexpr unsigned int HJEKLHIDFJN_TypeDefinitionIndex = 77386;

class HJEKLHIDFJN : public ::BKCJAIFHNKF
{
public:
	::MKBBPOFGLOF* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* EECEKEPKHCC; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* DAEIJCOCECC; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* CDDAMLBHFNA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKLHIDFJN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKLHIDFJN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void LHLLFJDCOOF(::KCBEGMCCKCA* MHPNGBGGMMN, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::KCBEGMCCKCA*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HJEKLHIDFJN_LHLLFJDCOOF_OFFSET))(this, MHPNGBGGMMN, BKBGPKNGNMF);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF, ::NEIGJHNJNFL DIHNFECKHMD)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::NEIGJHNJNFL))((::PBYTE)hIl2Cpp + HJEKLHIDFJN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF, DIHNFECKHMD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKLHIDFJN_GDEOPIBNOIN_OFFSET))(this);
	}
};
