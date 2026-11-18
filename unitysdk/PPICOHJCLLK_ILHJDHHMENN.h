#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define PPICOHJCLLK_ILHJDHHMENN_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1A8077A0)
#define PPICOHJCLLK_ILHJDHHMENN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8078F0)

inline static constexpr unsigned int PPICOHJCLLK_ILHJDHHMENN_TypeDefinitionIndex = 65152;

class PPICOHJCLLK_ILHJDHHMENN : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* IPAJICIFKAC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPICOHJCLLK_ILHJDHHMENN__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPICOHJCLLK_ILHJDHHMENN_LBJEOHBBBPN_OFFSET))(this);
	}
};
