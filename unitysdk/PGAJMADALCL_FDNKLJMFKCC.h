#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define PGAJMADALCL_FDNKLJMFKCC_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1949CE50)
#define PGAJMADALCL_FDNKLJMFKCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1949D260)

inline static constexpr unsigned int PGAJMADALCL_FDNKLJMFKCC_TypeDefinitionIndex = 38583;

class PGAJMADALCL_FDNKLJMFKCC : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* KGPMOJCMIFI; // 0x10
	::UnityEngine::Transform* KOIJDEHLKCO; // 0x18
	::UnityEngine::Transform* JHALEALNFIK; // 0x20
	::UnityEngine::RectTransform* GLBNLNBDGAF; // 0x28
	::UnityEngine::Transform* GMLJFKKLALD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAJMADALCL_FDNKLJMFKCC__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGAJMADALCL_FDNKLJMFKCC_LBJEOHBBBPN_OFFSET))(this);
	}
};
