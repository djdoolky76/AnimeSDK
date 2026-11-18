#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define HFDGEAODJDM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B44E20)
#define HFDGEAODJDM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B44C20)
#define HFDGEAODJDM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B453D0)
#define HFDGEAODJDM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B451C0)

inline static constexpr unsigned int HFDGEAODJDM_TypeDefinitionIndex = 60775;

class HFDGEAODJDM : public ::CGJEMKCKIJG
{
public:
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::MKBBPOFGLOF* DGLPCINAMAC; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGEAODJDM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGEAODJDM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HFDGEAODJDM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDGEAODJDM_GDEOPIBNOIN_OFFSET))(this);
	}
};
