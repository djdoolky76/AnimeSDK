#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define JGPMKLLPPBI_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1C35FB20)
#define JGPMKLLPPBI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1C35FAB0)
#define JGPMKLLPPBI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1C35F7E0)
#define JGPMKLLPPBI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1C3605F0)
#define JGPMKLLPPBI_HKIENBIKNBH_OFFSET UNITYSDK_OFFSET(0x1C360270)
#define JGPMKLLPPBI_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x1C360600)
#define JGPMKLLPPBI_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x1C35F690)
#define JGPMKLLPPBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35FFB0)

inline static constexpr unsigned int JGPMKLLPPBI_TypeDefinitionIndex = 90552;

class JGPMKLLPPBI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* IHLDIOOCHEM; // 0x28
	::CPABOPKIGAL* CJNEMGNJIEI; // 0x30
	::CPABOPKIGAL* PKKLIFFIMMB; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* FMDCCMLPJDM; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* LFPCKGNFIME; // 0x48
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* EFIJGFCFOJI; // 0x50
	::CPABOPKIGAL* AJCPNCIMKGC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPMKLLPPBI__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + JGPMKLLPPBI_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPMKLLPPBI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JGPMKLLPPBI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JGPMKLLPPBI_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPMKLLPPBI_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Void HKIENBIKNBH(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* NFBIEEPHGFB, ::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JGPMKLLPPBI_HKIENBIKNBH_OFFSET))(AMNIHACKELI, NFBIEEPHGFB, DEBGKPLOPCG);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + JGPMKLLPPBI_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
