#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKOMBDCNEHB.h"

namespace UnityEngine { class Transform; }

#define OIMLPOGIDDG_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0xE153E30)
#define OIMLPOGIDDG__CTOR_OFFSET UNITYSDK_OFFSET(0xE153DE0)

inline static constexpr unsigned int OIMLPOGIDDG_TypeDefinitionIndex = 43510;

class OIMLPOGIDDG : public ::CKOMBDCNEHB
{
public:
	::System::Void _ctor(::UnityEngine::Transform* LFJAEIBHLOP, ::UnityEngine::Transform* NCDCDPOBDHF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OIMLPOGIDDG__CTOR_OFFSET))(this, LFJAEIBHLOP, NCDCDPOBDHF);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLPOGIDDG_DABGFBDHOGD_OFFSET))(this);
	}
};
