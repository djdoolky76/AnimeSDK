#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define FDGOIJNGBOB_IEJIJHBKDNA_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x10F5FAD0)
#define FDGOIJNGBOB_IEJIJHBKDNA__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5FE00)

inline static constexpr unsigned int FDGOIJNGBOB_IEJIJHBKDNA_TypeDefinitionIndex = 64924;

class FDGOIJNGBOB_IEJIJHBKDNA : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* KGPMOJCMIFI; // 0x10
	::UnityEngine::Transform* GMLJFKKLALD; // 0x18
	::UnityEngine::Transform* KOIJDEHLKCO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOIJNGBOB_IEJIJHBKDNA__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDGOIJNGBOB_IEJIJHBKDNA_LBJEOHBBBPN_OFFSET))(this);
	}
};
