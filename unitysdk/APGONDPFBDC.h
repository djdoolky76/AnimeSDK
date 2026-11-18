#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define APGONDPFBDC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x134EDD40)
#define APGONDPFBDC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x134EDB40)
#define APGONDPFBDC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x134EE3A0)
#define APGONDPFBDC__CTOR_OFFSET UNITYSDK_OFFSET(0x134EE1D0)

inline static constexpr unsigned int APGONDPFBDC_TypeDefinitionIndex = 39491;

class APGONDPFBDC : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* BNMHCMLKAGN; // 0x20
	::CPABOPKIGAL* HMNPNEALHEH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x30
	::MKBBPOFGLOF* ENKIHNCJHDA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGONDPFBDC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGONDPFBDC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + APGONDPFBDC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APGONDPFBDC_GDEOPIBNOIN_OFFSET))(this);
	}
};
