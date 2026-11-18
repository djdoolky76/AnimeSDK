#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define JHJEELAIABC_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1C361A90)
#define JHJEELAIABC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1C361A20)
#define JHJEELAIABC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1C361700)
#define JHJEELAIABC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1C362210)
#define JHJEELAIABC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C361FE0)

inline static constexpr unsigned int JHJEELAIABC_TypeDefinitionIndex = 81610;

class JHJEELAIABC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* MAJGEEOGAMG; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* KFGGLIPKGPL; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* MHGKBLEIKKE; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* OKEPGOMHOMM; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40
	::KCMIFNGABDC_1<::System::String*>* MFOIHNFNKKG; // 0x48
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* HFALCNADKML; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJEELAIABC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJEELAIABC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JHJEELAIABC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJEELAIABC_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JHJEELAIABC_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
