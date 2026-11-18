#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class LGAFMFNMCOG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define CHFMBGAFNNJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x128F8E90)
#define CHFMBGAFNNJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x128F8D40)
#define CHFMBGAFNNJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x128F90B0)
#define CHFMBGAFNNJ_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x128F9020)
#define CHFMBGAFNNJ_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x128F8B60)
#define CHFMBGAFNNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x128F8EF0)

inline static constexpr unsigned int CHFMBGAFNNJ_TypeDefinitionIndex = 42988;

class CHFMBGAFNNJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* KODJLPBHDKE; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* KICKDDOPKNI; // 0x30
	::KCMIFNGABDC_1<::System::Single>* GEEMKIKDHLB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFMBGAFNNJ__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + CHFMBGAFNNJ_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFMBGAFNNJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHFMBGAFNNJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + CHFMBGAFNNJ_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFMBGAFNNJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
