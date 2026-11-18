#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class GameObject; }

#define MABKHIPFGGA_OMGIDBAELOF_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x14DD6860)
#define MABKHIPFGGA_OMGIDBAELOF__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD6AA0)

inline static constexpr unsigned int MABKHIPFGGA_OMGIDBAELOF_TypeDefinitionIndex = 65715;

class MABKHIPFGGA_OMGIDBAELOF : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* MHELANMFIMJ; // 0x10
	::UnityEngine::GameObject* BOCJCMIDJPE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKHIPFGGA_OMGIDBAELOF__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MABKHIPFGGA_OMGIDBAELOF_LBJEOHBBBPN_OFFSET))(this);
	}
};
