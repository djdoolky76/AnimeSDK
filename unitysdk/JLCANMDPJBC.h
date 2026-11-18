#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALKLCLEAPDM;
class IBENDELLLAO;
class PLFFFNBOAIP;
namespace MoleMole { class UITabBtn03RowScrollViewWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLCANMDPJBC_AKLCNHODDOI_OFFSET UNITYSDK_OFFSET(0x13090080)
#define JLCANMDPJBC_BKEAPOBNOAB_OFFSET UNITYSDK_OFFSET(0x1308FE60)
#define JLCANMDPJBC_CNGFHHECIEL_OFFSET UNITYSDK_OFFSET(0x1308FCA0)
#define JLCANMDPJBC_DGFAJDNHCIJ_OFFSET UNITYSDK_OFFSET(0x1308FE70)
#define JLCANMDPJBC_ECIAECPCHLF_OFFSET UNITYSDK_OFFSET(0x1308FE00)
#define JLCANMDPJBC_EOJPKGFEKEH_OFFSET UNITYSDK_OFFSET(0x1308F5F0)
#define JLCANMDPJBC_LBMFLMIHDMB_OFFSET UNITYSDK_OFFSET(0x1308F870)
#define JLCANMDPJBC_LNLJNGLNJAP_OFFSET UNITYSDK_OFFSET(0x1308FED0)
#define JLCANMDPJBC_NMHMMMGAKBO_OFFSET UNITYSDK_OFFSET(0x1308FC90)
#define JLCANMDPJBC_ODNPMLLGJJE_OFFSET UNITYSDK_OFFSET(0x1308FEE0)
#define JLCANMDPJBC_PFHAHNIBJFB_OFFSET UNITYSDK_OFFSET(0x13090090)
#define JLCANMDPJBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1308FC10)

inline static constexpr unsigned int JLCANMDPJBC_TypeDefinitionIndex = 89163;

class JLCANMDPJBC : public ::System::Object
{
public:
	// static const ::System::Int32 NAGLDBOGHHA = 0x2; // 0x0
	::System::Collections::Generic::List_1<::ALKLCLEAPDM*>* _MBOOFNLJCND_k__BackingField; // 0x10
	::PLFFFNBOAIP* _GHMENCICKDD_k__BackingField; // 0x18
	::IBENDELLLAO* JFGKMBDHIHA; // 0x20
	::System::Boolean _CICHLFCLPJO_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCANMDPJBC__CTOR_OFFSET))(this);
	}

	::System::Void EOJPKGFEKEH(::MoleMole::UITabBtn03RowScrollViewWidgetController* IPKLKAFOGAN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITabBtn03RowScrollViewWidgetController*))((::PBYTE)hIl2Cpp + JLCANMDPJBC_EOJPKGFEKEH_OFFSET))(this, IPKLKAFOGAN);
	}

	::System::Void NMHMMMGAKBO(::PLFFFNBOAIP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PLFFFNBOAIP*))((::PBYTE)hIl2Cpp + JLCANMDPJBC_NMHMMMGAKBO_OFFSET))(this, EGEGIMGMJHN);
	}

	::IBENDELLLAO* LBMFLMIHDMB()
	{
		return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCANMDPJBC_LBMFLMIHDMB_OFFSET))(this);
	}

	::System::Int32 CNGFHHECIEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCANMDPJBC_CNGFHHECIEL_OFFSET))(this);
	}

	::System::Int32 ECIAECPCHLF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCANMDPJBC_ECIAECPCHLF_OFFSET))(this);
	}

	::System::Void BKEAPOBNOAB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLCANMDPJBC_BKEAPOBNOAB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DGFAJDNHCIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCANMDPJBC_DGFAJDNHCIJ_OFFSET))(this);
	}

	::System::Boolean LNLJNGLNJAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCANMDPJBC_LNLJNGLNJAP_OFFSET))(this);
	}

	::System::Boolean ODNPMLLGJJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCANMDPJBC_ODNPMLLGJJE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::ALKLCLEAPDM*>* AKLCNHODDOI()
	{
		return ((::System::Collections::Generic::List_1<::ALKLCLEAPDM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCANMDPJBC_AKLCNHODDOI_OFFSET))(this);
	}

	::PLFFFNBOAIP* PFHAHNIBJFB()
	{
		return ((::PLFFFNBOAIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCANMDPJBC_PFHAHNIBJFB_OFFSET))(this);
	}
};
