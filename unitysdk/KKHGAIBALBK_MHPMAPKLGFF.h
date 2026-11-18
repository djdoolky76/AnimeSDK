#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define KKHGAIBALBK_MHPMAPKLGFF_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x157F2F30)
#define KKHGAIBALBK_MHPMAPKLGFF__CTOR_OFFSET UNITYSDK_OFFSET(0x157F3080)

inline static constexpr unsigned int KKHGAIBALBK_MHPMAPKLGFF_TypeDefinitionIndex = 81361;

class KKHGAIBALBK_MHPMAPKLGFF : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* ODALDIOFMPH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHGAIBALBK_MHPMAPKLGFF__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHGAIBALBK_MHPMAPKLGFF_LBJEOHBBBPN_OFFSET))(this);
	}
};
