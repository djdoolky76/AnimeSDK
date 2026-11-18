#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define JDIGKHLGEGE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18731A90)
#define JDIGKHLGEGE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18731A00)
#define JDIGKHLGEGE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18731C80)
#define JDIGKHLGEGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18731BE0)

inline static constexpr unsigned int JDIGKHLGEGE_TypeDefinitionIndex = 65762;

class JDIGKHLGEGE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIGKHLGEGE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIGKHLGEGE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JDIGKHLGEGE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIGKHLGEGE_GDEOPIBNOIN_OFFSET))(this);
	}
};
