#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

class AA7347A411C1EEB7;

#define A16CF5893AA15C98_A3861A3204C77657_FE0557A0A4CD6C32_OFFSET UNITYSDK_OFFSET(0x4406F50)
#define A16CF5893AA15C98_A3861A3204C77657__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A16CF5893AA15C98_A3861A3204C77657_TypeDefinitionIndex = 19559;

class A16CF5893AA15C98_A3861A3204C77657 : public ::System::Object
{
public:
	::System::Single A2343AEB3DD90EEE; // 0x10
	::System::Int32 F9EEAAB1F076280F; // 0x14
	::UnityEngine::Vector3 FCC1106B65E67AD9; // 0x18

	::System::Void FE0557A0A4CD6C32(::UnityEngine::Vector3 F8CCF7420AF01839, ::AA7347A411C1EEB7* F3FC7811EBBC5839, ::UnityEngine::Vector2 A6E3D42BC274C74B)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::AA7347A411C1EEB7*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + A16CF5893AA15C98_A3861A3204C77657_FE0557A0A4CD6C32_OFFSET))(this, F8CCF7420AF01839, F3FC7811EBBC5839, A6E3D42BC274C74B);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A16CF5893AA15C98_A3861A3204C77657__CTOR_OFFSET))(this);
	}
};
