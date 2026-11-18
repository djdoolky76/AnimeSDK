#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OKLHKHIEBMH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1B7A25E0)
#define OKLHKHIEBMH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1B7A2550)
#define OKLHKHIEBMH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1B7A2970)
#define OKLHKHIEBMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A28D0)

inline static constexpr unsigned int OKLHKHIEBMH_TypeDefinitionIndex = 49394;

class OKLHKHIEBMH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* FNLGDLHAEGD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLHKHIEBMH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLHKHIEBMH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OKLHKHIEBMH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLHKHIEBMH_GDEOPIBNOIN_OFFSET))(this);
	}
};
