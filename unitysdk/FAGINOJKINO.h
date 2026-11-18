#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FAGINOJKINO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1418E660)
#define FAGINOJKINO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1418E510)
#define FAGINOJKINO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1418EB00)
#define FAGINOJKINO__CTOR_OFFSET UNITYSDK_OFFSET(0x1418E9D0)

inline static constexpr unsigned int FAGINOJKINO_TypeDefinitionIndex = 42782;

class FAGINOJKINO : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Single>* CDKDDDKKPPE; // 0x28
	::AAMKEDEDHPD_1<::System::Single>* MOILJAKPMHN; // 0x30
	::KCMIFNGABDC_1<::System::String*>* FMMECCNEOCO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGINOJKINO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGINOJKINO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FAGINOJKINO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGINOJKINO_GDEOPIBNOIN_OFFSET))(this);
	}
};
