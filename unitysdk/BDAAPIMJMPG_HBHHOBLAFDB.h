#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class Transform; }

#define BDAAPIMJMPG_HBHHOBLAFDB_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x142494B0)
#define BDAAPIMJMPG_HBHHOBLAFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x14249600)

inline static constexpr unsigned int BDAAPIMJMPG_HBHHOBLAFDB_TypeDefinitionIndex = 92389;

class BDAAPIMJMPG_HBHHOBLAFDB : public ::PIOMHDMPINF
{
public:
	::UnityEngine::Transform* KGPMOJCMIFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAAPIMJMPG_HBHHOBLAFDB__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAAPIMJMPG_HBHHOBLAFDB_LBJEOHBBBPN_OFFSET))(this);
	}
};
