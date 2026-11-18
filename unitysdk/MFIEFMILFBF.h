#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MFIEFMILFBF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14051B40)
#define MFIEFMILFBF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14051A70)
#define MFIEFMILFBF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14051E30)
#define MFIEFMILFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x14051D40)

inline static constexpr unsigned int MFIEFMILFBF_TypeDefinitionIndex = 59594;

class MFIEFMILFBF : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* CEOMOMEMHFE; // 0x18
	::KCMIFNGABDC_1<::System::String*>* FHFIGKGJJAJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIEFMILFBF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIEFMILFBF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MFIEFMILFBF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIEFMILFBF_GDEOPIBNOIN_OFFSET))(this);
	}
};
