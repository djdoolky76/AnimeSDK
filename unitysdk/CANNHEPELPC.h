#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CANNHEPELPC_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x145A0BC0)
#define CANNHEPELPC_BIOLHHIFLLL_OFFSET UNITYSDK_OFFSET(0x145A1690)
#define CANNHEPELPC_DIIAFIMGCKH_OFFSET UNITYSDK_OFFSET(0x145A1940)
#define CANNHEPELPC_EBPJGHKKODB_OFFSET UNITYSDK_OFFSET(0x145A1390)
#define CANNHEPELPC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x145A0B30)
#define CANNHEPELPC_EMKDJKAANCH_OFFSET UNITYSDK_OFFSET(0x145A1BF0)
#define CANNHEPELPC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x145A08C0)
#define CANNHEPELPC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x145A1500)
#define CANNHEPELPC_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x145A1510)
#define CANNHEPELPC_KDCABPFJKBF_OFFSET UNITYSDK_OFFSET(0x145A15A0)
#define CANNHEPELPC_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x145A07D0)
#define CANNHEPELPC__CTOR_OFFSET UNITYSDK_OFFSET(0x145A11B0)

inline static constexpr unsigned int CANNHEPELPC_TypeDefinitionIndex = 71137;

class CANNHEPELPC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BJLDCJCDEPN; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x30
	::KCMIFNGABDC_1<::System::Single>* HFEEEKLAPKE; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* PMGMAHLEMMO; // 0x40
	::AAMKEDEDHPD_1<::System::Boolean>* AOJJFINGBOI; // 0x48
	::KCMIFNGABDC_1<::System::Int32>* CEBMPMAOEFO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNHEPELPC__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + CANNHEPELPC_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNHEPELPC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CANNHEPELPC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean EBPJGHKKODB(::MoleMole::EntityHandle IHPHGMJDGLN, ::System::Collections::Generic::List_1<::System::Int32>* LCFCEOKABON)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CANNHEPELPC_EBPJGHKKODB_OFFSET))(this, IHPHGMJDGLN, LCFCEOKABON);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANNHEPELPC_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + CANNHEPELPC_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::EntityHandle KDCABPFJKBF(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CANNHEPELPC_KDCABPFJKBF_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean BIOLHHIFLLL(::MoleMole::EntityHandle IHPHGMJDGLN, ::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CANNHEPELPC_BIOLHHIFLLL_OFFSET))(this, IHPHGMJDGLN, HMPKKCKNFIH);
	}

	::System::Boolean DIIAFIMGCKH(::MoleMole::EntityHandle IHPHGMJDGLN, ::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CANNHEPELPC_DIIAFIMGCKH_OFFSET))(this, IHPHGMJDGLN, HMPKKCKNFIH);
	}

	::System::Boolean EMKDJKAANCH(::MoleMole::EntityHandle IHPHGMJDGLN, ::System::Collections::Generic::List_1<::System::String*>* HMPKKCKNFIH, ::System::Int32 GNOPKLNMAIK)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CANNHEPELPC_EMKDJKAANCH_OFFSET))(this, IHPHGMJDGLN, HMPKKCKNFIH, GNOPKLNMAIK);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CANNHEPELPC_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
