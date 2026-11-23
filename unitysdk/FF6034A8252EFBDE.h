#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FF6034A8252EFBDE_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x2807CC0)

inline static constexpr unsigned int FF6034A8252EFBDE_TypeDefinitionIndex = 16809;

struct alignas(4) FF6034A8252EFBDE
{
	::UnityEngine::Vector3 A0C1F1E95D5F6CA9; // 0x10
	::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110; // 0x1C

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF6034A8252EFBDE_F0D2AFBD3CAE7F65_OFFSET))(this);
	}
};
