#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define BFCEDLEPBMA_PKCEANAPNHB_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0xFF6D6A0)
#define BFCEDLEPBMA_PKCEANAPNHB__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6D8E0)

inline static constexpr unsigned int BFCEDLEPBMA_PKCEANAPNHB_TypeDefinitionIndex = 55528;

class BFCEDLEPBMA_PKCEANAPNHB : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* HGPHKCCIMLG; // 0x10
	::UnityEngine::Transform* PNDOLJBHMHE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCEDLEPBMA_PKCEANAPNHB__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFCEDLEPBMA_PKCEANAPNHB_LBJEOHBBBPN_OFFSET))(this);
	}
};
