#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BF4DD89C80BF83C5_E5119AEFEC363515_B0C5084CEFD6C6D7_OFFSET UNITYSDK_OFFSET(0x16F3000)
#define BF4DD89C80BF83C5_E5119AEFEC363515_FC7A6E723649D79C_OFFSET UNITYSDK_OFFSET(0x16F3060)

inline static constexpr unsigned int BF4DD89C80BF83C5_E5119AEFEC363515_TypeDefinitionIndex = 570;

struct alignas(4) BF4DD89C80BF83C5_E5119AEFEC363515
{
	::System::Single F0CEBBB186782829; // 0x10
	::System::Boolean FDF212B9C836B6D5; // 0x14

	::UnityEngine::Vector3 FC7A6E723649D79C(::UnityEngine::Vector3 FE15C7C59E804551)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BF4DD89C80BF83C5_E5119AEFEC363515_FC7A6E723649D79C_OFFSET))(this, FE15C7C59E804551);
	}

	::System::Single B0C5084CEFD6C6D7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BF4DD89C80BF83C5_E5119AEFEC363515_B0C5084CEFD6C6D7_OFFSET))(this);
	}
};
