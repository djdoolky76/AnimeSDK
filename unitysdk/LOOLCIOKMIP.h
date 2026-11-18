#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define LOOLCIOKMIP_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x12D4ADB0)
#define LOOLCIOKMIP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12D4AD40)
#define LOOLCIOKMIP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12D4AC00)
#define LOOLCIOKMIP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12D4B070)
#define LOOLCIOKMIP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4AF70)

inline static constexpr unsigned int LOOLCIOKMIP_TypeDefinitionIndex = 50993;

class LOOLCIOKMIP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOLCIOKMIP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOLCIOKMIP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LOOLCIOKMIP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOLCIOKMIP_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LOOLCIOKMIP_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
