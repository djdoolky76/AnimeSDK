#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define A69945DB44BC8BC7_B42E1593F5ED965B_B0C5084CEFD6C6D7_OFFSET UNITYSDK_OFFSET(0x176CF40)
#define A69945DB44BC8BC7_B42E1593F5ED965B_FC7A6E723649D79C_OFFSET UNITYSDK_OFFSET(0x176CF90)

inline static constexpr unsigned int A69945DB44BC8BC7_B42E1593F5ED965B_TypeDefinitionIndex = 835;

struct alignas(4) A69945DB44BC8BC7_B42E1593F5ED965B
{
	::System::Single EC003D0719B9EC9B; // 0x10
	::System::Single F0CEBBB186782829; // 0x14
	::System::Single E4B6D8B196BDA12D; // 0x18

	::UnityEngine::Vector3 FC7A6E723649D79C(::UnityEngine::Vector3 FE15C7C59E804551)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + A69945DB44BC8BC7_B42E1593F5ED965B_FC7A6E723649D79C_OFFSET))(this, FE15C7C59E804551);
	}

	::System::Single B0C5084CEFD6C6D7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + A69945DB44BC8BC7_B42E1593F5ED965B_B0C5084CEFD6C6D7_OFFSET))(this);
	}
};
