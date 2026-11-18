#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
template <typename T> class KCMIFNGABDC_1;

#define JFOBMBCMBIN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19452400)
#define JFOBMBCMBIN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x194521F0)
#define JFOBMBCMBIN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19452E90)
#define JFOBMBCMBIN_GDLADPFAPKN_OFFSET UNITYSDK_OFFSET(0x19452AC0)
#define JFOBMBCMBIN_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x19452E00)
#define JFOBMBCMBIN_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x194520A0)
#define JFOBMBCMBIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19452C30)

inline static constexpr unsigned int JFOBMBCMBIN_TypeDefinitionIndex = 72482;

class JFOBMBCMBIN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* LFPCKGNFIME; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* FMDCCMLPJDM; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* GPBKFAPAKIO; // 0x40
	::CPABOPKIGAL* CJNEMGNJIEI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOBMBCMBIN__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + JFOBMBCMBIN_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOBMBCMBIN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JFOBMBCMBIN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + JFOBMBCMBIN_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOBMBCMBIN_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Void GDLADPFAPKN(::Foundation::ViewObject::ViewObjectHandle DBMEFDJPDCB)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + JFOBMBCMBIN_GDLADPFAPKN_OFFSET))(DBMEFDJPDCB);
	}
};
