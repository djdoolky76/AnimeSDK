#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define IBLDIOAONBD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15E9D790)
#define IBLDIOAONBD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15E9D640)
#define IBLDIOAONBD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15E9DC70)
#define IBLDIOAONBD_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x15E9DC80)
#define IBLDIOAONBD_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x15E9D550)
#define IBLDIOAONBD__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9DB40)

inline static constexpr unsigned int IBLDIOAONBD_TypeDefinitionIndex = 74876;

class IBLDIOAONBD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* CCKCEMKNGJL; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* OLMEJLNJIDB; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* MGJDANALDEH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLDIOAONBD__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IBLDIOAONBD_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLDIOAONBD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IBLDIOAONBD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLDIOAONBD_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + IBLDIOAONBD_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}
};
