#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IFHJKICDBGG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F62C50)
#define IFHJKICDBGG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F62B10)
#define IFHJKICDBGG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F62F80)
#define IFHJKICDBGG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F62E80)

inline static constexpr unsigned int IFHJKICDBGG_TypeDefinitionIndex = 42477;

class IFHJKICDBGG : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::String*>* KJCDOFNGPMA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHJKICDBGG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHJKICDBGG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IFHJKICDBGG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHJKICDBGG_GDEOPIBNOIN_OFFSET))(this);
	}
};
