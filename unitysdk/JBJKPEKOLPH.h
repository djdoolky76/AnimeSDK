#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define JBJKPEKOLPH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x153CA6B0)
#define JBJKPEKOLPH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x153CA560)
#define JBJKPEKOLPH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x153CA9F0)
#define JBJKPEKOLPH__CTOR_OFFSET UNITYSDK_OFFSET(0x153CA8C0)

inline static constexpr unsigned int JBJKPEKOLPH_TypeDefinitionIndex = 87751;

class JBJKPEKOLPH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* GLMAGAHEKJF; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x30
	::KCMIFNGABDC_1<::System::String*>* MBDHHLFFEKG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJKPEKOLPH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJKPEKOLPH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JBJKPEKOLPH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJKPEKOLPH_GDEOPIBNOIN_OFFSET))(this);
	}
};
