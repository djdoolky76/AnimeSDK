#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class FKNKBAOGJOA;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define EFJPJOIHJKK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11A6F8A0)
#define EFJPJOIHJKK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11A6F7D0)
#define EFJPJOIHJKK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11A6FB30)
#define EFJPJOIHJKK__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6FA80)

inline static constexpr unsigned int EFJPJOIHJKK_TypeDefinitionIndex = 80110;

class EFJPJOIHJKK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x18
	::FKNKBAOGJOA* HIDBCHPGMCA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJPJOIHJKK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJPJOIHJKK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EFJPJOIHJKK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJPJOIHJKK_GDEOPIBNOIN_OFFSET))(this);
	}
};
