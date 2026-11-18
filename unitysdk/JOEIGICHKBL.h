#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define JOEIGICHKBL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18753280)
#define JOEIGICHKBL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x187530D0)
#define JOEIGICHKBL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x187538E0)
#define JOEIGICHKBL__CTOR_OFFSET UNITYSDK_OFFSET(0x18753780)

inline static constexpr unsigned int JOEIGICHKBL_TypeDefinitionIndex = 88214;

class JOEIGICHKBL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x28
	::KCMIFNGABDC_1<::System::String*>* MLLDMPJMCCP; // 0x30
	::KCMIFNGABDC_1<::System::String*>* GGPDDKIDFAN; // 0x38
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* GAFNNKAPHPH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEIGICHKBL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEIGICHKBL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JOEIGICHKBL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEIGICHKBL_GDEOPIBNOIN_OFFSET))(this);
	}
};
