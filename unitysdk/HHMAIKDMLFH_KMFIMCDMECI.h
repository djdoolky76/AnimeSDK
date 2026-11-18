#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define HHMAIKDMLFH_KMFIMCDMECI_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x16F39020)
#define HHMAIKDMLFH_KMFIMCDMECI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F39170)

inline static constexpr unsigned int HHMAIKDMLFH_KMFIMCDMECI_TypeDefinitionIndex = 89719;

class HHMAIKDMLFH_KMFIMCDMECI : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* GOHLGCJPNCO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMAIKDMLFH_KMFIMCDMECI__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHMAIKDMLFH_KMFIMCDMECI_LBJEOHBBBPN_OFFSET))(this);
	}
};
