#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define JBICNHFDLIB_CEAPJPAPODO_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x160D20D0)
#define JBICNHFDLIB_CEAPJPAPODO__CTOR_OFFSET UNITYSDK_OFFSET(0x160D2220)

inline static constexpr unsigned int JBICNHFDLIB_CEAPJPAPODO_TypeDefinitionIndex = 66939;

class JBICNHFDLIB_CEAPJPAPODO : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* GGJEFJPIEDM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBICNHFDLIB_CEAPJPAPODO__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBICNHFDLIB_CEAPJPAPODO_LBJEOHBBBPN_OFFSET))(this);
	}
};
