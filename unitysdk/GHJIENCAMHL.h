#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define GHJIENCAMHL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x720B40)

inline static constexpr unsigned int GHJIENCAMHL_TypeDefinitionIndex = 41517;

struct alignas(8) GHJIENCAMHL
{
	::System::Boolean NKLKGDALCHM; // 0x10
	::System::Byte _padding0[0x7];
	::UnityEngine::GameObject* DHMNJDAMION; // 0x18
	::System::UInt32 FEHHPGJFNBC; // 0x20

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIENCAMHL_NPOLNFDBOOD_OFFSET))(this);
	}
};
