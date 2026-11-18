#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define AAMAIBOEGHL_KDILBLDGOGB_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x14393A40)
#define AAMAIBOEGHL_KDILBLDGOGB__CTOR_OFFSET UNITYSDK_OFFSET(0x14393C80)

inline static constexpr unsigned int AAMAIBOEGHL_KDILBLDGOGB_TypeDefinitionIndex = 49878;

class AAMAIBOEGHL_KDILBLDGOGB : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* GGFNBBADDDC; // 0x10
	::UnityEngine::Transform* GOHLGCJPNCO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMAIBOEGHL_KDILBLDGOGB__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMAIBOEGHL_KDILBLDGOGB_LBJEOHBBBPN_OFFSET))(this);
	}
};
