#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define FAGKFHCECFA_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6BF360)
#define FAGKFHCECFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6BF350)
#define FAGKFHCECFA__CTOR_OFFSET UNITYSDK_OFFSET(0x6BF320)

inline static constexpr unsigned int FAGKFHCECFA_TypeDefinitionIndex = 79694;

struct alignas(4) FAGKFHCECFA
{
	::UnityEngine::Vector3 FDMFADJDIPJ; // 0x10
	::UnityEngine::Quaternion DJPDAIAFIFH; // 0x1C
	::System::Single OCJJLJJKBCI; // 0x2C

	::System::Void _ctor(::UnityEngine::Vector3 GADABMPMNEM, ::UnityEngine::Quaternion GNDKDEJMFKM, ::System::Single ECMOEENIHME)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + FAGKFHCECFA__CTOR_OFFSET))(this, GADABMPMNEM, GNDKDEJMFKM, ECMOEENIHME);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGKFHCECFA_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAGKFHCECFA_DPIHOJBBGLA_OFFSET))(this);
	}
};
