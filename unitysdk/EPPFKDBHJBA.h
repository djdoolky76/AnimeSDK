#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define EPPFKDBHJBA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1418C8C0)
#define EPPFKDBHJBA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1418C7E0)
#define EPPFKDBHJBA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1418CF20)
#define EPPFKDBHJBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1418CE30)

inline static constexpr unsigned int EPPFKDBHJBA_TypeDefinitionIndex = 61138;

class EPPFKDBHJBA : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* BDIHONPBEGB; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPFKDBHJBA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPFKDBHJBA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EPPFKDBHJBA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPFKDBHJBA_GDEOPIBNOIN_OFFSET))(this);
	}
};
