#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define PCBLBMKJCOI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1AFD62E0)
#define PCBLBMKJCOI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1AFD6200)
#define PCBLBMKJCOI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1AFD6870)
#define PCBLBMKJCOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6780)

inline static constexpr unsigned int PCBLBMKJCOI_TypeDefinitionIndex = 80876;

class PCBLBMKJCOI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLBMKJCOI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLBMKJCOI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PCBLBMKJCOI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBLBMKJCOI_GDEOPIBNOIN_OFFSET))(this);
	}
};
