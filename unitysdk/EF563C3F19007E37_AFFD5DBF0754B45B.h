#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class FA9B773E8C9B97E9;

#define EF563C3F19007E37_AFFD5DBF0754B45B_B0C5084CEFD6C6D7_OFFSET UNITYSDK_OFFSET(0x191C7E0)
#define EF563C3F19007E37_AFFD5DBF0754B45B_FC7A6E723649D79C_OFFSET UNITYSDK_OFFSET(0x191C830)

inline static constexpr unsigned int EF563C3F19007E37_AFFD5DBF0754B45B_TypeDefinitionIndex = 1505;

struct alignas(8) EF563C3F19007E37_AFFD5DBF0754B45B
{
	::FA9B773E8C9B97E9<::UnityEngine::Vector2>* B8B0EF9ED37BA7F0; // 0x10
	::System::Single EC003D0719B9EC9B; // 0x18

	::UnityEngine::Vector3 FC7A6E723649D79C(::UnityEngine::Vector3 FE15C7C59E804551)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EF563C3F19007E37_AFFD5DBF0754B45B_FC7A6E723649D79C_OFFSET))(this, FE15C7C59E804551);
	}

	::System::Single B0C5084CEFD6C6D7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EF563C3F19007E37_AFFD5DBF0754B45B_B0C5084CEFD6C6D7_OFFSET))(this);
	}
};
