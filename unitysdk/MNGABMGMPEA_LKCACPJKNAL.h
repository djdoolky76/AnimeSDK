#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class GameObject; }

#define MNGABMGMPEA_LKCACPJKNAL_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1217AB40)
#define MNGABMGMPEA_LKCACPJKNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1217AC90)

inline static constexpr unsigned int MNGABMGMPEA_LKCACPJKNAL_TypeDefinitionIndex = 82888;

class MNGABMGMPEA_LKCACPJKNAL : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* CJMIKOMHKKF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGABMGMPEA_LKCACPJKNAL__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGABMGMPEA_LKCACPJKNAL_LBJEOHBBBPN_OFFSET))(this);
	}
};
