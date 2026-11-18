#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBGDCIMNPHI.h"

namespace UnityEngine { class Transform; }

#define KFJEJIOHDJM_CKALKMPNFIM_OFFSET UNITYSDK_OFFSET(0x178FC540)
#define KFJEJIOHDJM_FFDGILHMOPN_OFFSET UNITYSDK_OFFSET(0x178FC4B0)
#define KFJEJIOHDJM_MNAELFIOLKC_OFFSET UNITYSDK_OFFSET(0x178FC440)
#define KFJEJIOHDJM__CTOR_OFFSET UNITYSDK_OFFSET(0x178FC530)

inline static constexpr unsigned int KFJEJIOHDJM_TypeDefinitionIndex = 59599;

class KFJEJIOHDJM : public ::BBGDCIMNPHI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJEJIOHDJM__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* MNAELFIOLKC()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJEJIOHDJM_MNAELFIOLKC_OFFSET))(this);
	}

	::System::Void FFDGILHMOPN(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFJEJIOHDJM_FFDGILHMOPN_OFFSET))(this, FIPHFGHNNBE);
	}

	::UnityEngine::Transform* CKALKMPNFIM()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJEJIOHDJM_CKALKMPNFIM_OFFSET))(this);
	}
};
