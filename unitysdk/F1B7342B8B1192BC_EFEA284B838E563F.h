#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define F1B7342B8B1192BC_EFEA284B838E563F_B0C5084CEFD6C6D7_OFFSET UNITYSDK_OFFSET(0x1B0D580)
#define F1B7342B8B1192BC_EFEA284B838E563F_FC7A6E723649D79C_OFFSET UNITYSDK_OFFSET(0x1B0D5D0)

inline static constexpr unsigned int F1B7342B8B1192BC_EFEA284B838E563F_TypeDefinitionIndex = 2031;

struct alignas(4) F1B7342B8B1192BC_EFEA284B838E563F
{
	::UnityEngine::Vector3 BB3F341422EC897F; // 0x10
	::System::Single E4B6D8B196BDA12D; // 0x1C

	::UnityEngine::Vector3 FC7A6E723649D79C(::UnityEngine::Vector3 FE15C7C59E804551)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + F1B7342B8B1192BC_EFEA284B838E563F_FC7A6E723649D79C_OFFSET))(this, FE15C7C59E804551);
	}

	::System::Single B0C5084CEFD6C6D7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + F1B7342B8B1192BC_EFEA284B838E563F_B0C5084CEFD6C6D7_OFFSET))(this);
	}
};
