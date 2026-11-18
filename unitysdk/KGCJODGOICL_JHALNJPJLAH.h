#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define KGCJODGOICL_JHALNJPJLAH_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1515DD00)
#define KGCJODGOICL_JHALNJPJLAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1515DE50)

inline static constexpr unsigned int KGCJODGOICL_JHALNJPJLAH_TypeDefinitionIndex = 56553;

class KGCJODGOICL_JHALNJPJLAH : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* ODALDIOFMPH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCJODGOICL_JHALNJPJLAH__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCJODGOICL_JHALNJPJLAH_LBJEOHBBBPN_OFFSET))(this);
	}
};
