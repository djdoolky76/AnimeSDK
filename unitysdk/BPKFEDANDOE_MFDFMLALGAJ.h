#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define BPKFEDANDOE_MFDFMLALGAJ_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0xFF98270)
#define BPKFEDANDOE_MFDFMLALGAJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFF983C0)

inline static constexpr unsigned int BPKFEDANDOE_MFDFMLALGAJ_TypeDefinitionIndex = 42254;

class BPKFEDANDOE_MFDFMLALGAJ : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* KOIJDEHLKCO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKFEDANDOE_MFDFMLALGAJ__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKFEDANDOE_MFDFMLALGAJ_LBJEOHBBBPN_OFFSET))(this);
	}
};
