#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DHDNDNAMJHI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1329A6B0)
#define DHDNDNAMJHI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1329A5E0)
#define DHDNDNAMJHI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1329AB30)
#define DHDNDNAMJHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1329AA40)

inline static constexpr unsigned int DHDNDNAMJHI_TypeDefinitionIndex = 47277;

class DHDNDNAMJHI : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* BKKNMBJFGHN; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDNDNAMJHI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDNDNAMJHI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DHDNDNAMJHI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDNDNAMJHI_GDEOPIBNOIN_OFFSET))(this);
	}
};
