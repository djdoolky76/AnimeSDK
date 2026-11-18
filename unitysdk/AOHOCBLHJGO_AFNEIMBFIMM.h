#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define AOHOCBLHJGO_AFNEIMBFIMM_FBLMHHJNGIL_OFFSET UNITYSDK_OFFSET(0x12671670)
#define AOHOCBLHJGO_AFNEIMBFIMM__CTOR_OFFSET UNITYSDK_OFFSET(0x12671660)

inline static constexpr unsigned int AOHOCBLHJGO_AFNEIMBFIMM_TypeDefinitionIndex = 79200;

class AOHOCBLHJGO_AFNEIMBFIMM : public ::System::Object
{
public:
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHOCBLHJGO_AFNEIMBFIMM__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 FBLMHHJNGIL()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHOCBLHJGO_AFNEIMBFIMM_FBLMHHJNGIL_OFFSET))(this);
	}
};
