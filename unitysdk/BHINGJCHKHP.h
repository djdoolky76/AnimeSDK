#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BHINGJCHKHP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15077400)
#define BHINGJCHKHP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x150771F0)
#define BHINGJCHKHP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15077EF0)
#define BHINGJCHKHP__CTOR_OFFSET UNITYSDK_OFFSET(0x15077D50)

inline static constexpr unsigned int BHINGJCHKHP_TypeDefinitionIndex = 67741;

class BHINGJCHKHP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* GLHGFAONLIN; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x30
	::KCMIFNGABDC_1<::System::String*>* GGPDDKIDFAN; // 0x38
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* GAFNNKAPHPH; // 0x40
	::KCMIFNGABDC_1<::System::String*>* MLLDMPJMCCP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHINGJCHKHP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHINGJCHKHP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BHINGJCHKHP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHINGJCHKHP_GDEOPIBNOIN_OFFSET))(this);
	}
};
