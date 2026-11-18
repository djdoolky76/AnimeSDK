#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define LDJIIHDELJL_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1773DD80)
#define LDJIIHDELJL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1773DD10)
#define LDJIIHDELJL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1773DAB0)
#define LDJIIHDELJL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1773E3A0)
#define LDJIIHDELJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1773E160)

inline static constexpr unsigned int LDJIIHDELJL_TypeDefinitionIndex = 59100;

class LDJIIHDELJL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* AIKGHJFOKED; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::CPABOPKIGAL* DGLPCINAMAC; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJIIHDELJL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJIIHDELJL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LDJIIHDELJL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LDJIIHDELJL_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJIIHDELJL_GDEOPIBNOIN_OFFSET))(this);
	}
};
