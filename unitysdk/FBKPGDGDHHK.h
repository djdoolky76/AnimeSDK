#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define FBKPGDGDHHK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10F56610)
#define FBKPGDGDHHK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10F56580)
#define FBKPGDGDHHK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10F56C70)
#define FBKPGDGDHHK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F56BD0)

inline static constexpr unsigned int FBKPGDGDHHK_TypeDefinitionIndex = 65845;

class FBKPGDGDHHK : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKPGDGDHHK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKPGDGDHHK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FBKPGDGDHHK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKPGDGDHHK_GDEOPIBNOIN_OFFSET))(this);
	}
};
