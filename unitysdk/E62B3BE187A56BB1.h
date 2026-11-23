#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define E62B3BE187A56BB1_A324714249850ACA_OFFSET UNITYSDK_OFFSET(0x2496940)
#define E62B3BE187A56BB1_A84DD752BE7FD60D_OFFSET UNITYSDK_OFFSET(0x1EF7020)
#define E62B3BE187A56BB1_BFE8980E79EE50B9_OFFSET UNITYSDK_OFFSET(0x1DC0A20)
#define E62B3BE187A56BB1_EFF76C95E0AC13FE_OFFSET UNITYSDK_OFFSET(0x3959F40)
#define E62B3BE187A56BB1_FA194587CB938504_OFFSET UNITYSDK_OFFSET(0x3959F30)

inline static constexpr unsigned int E62B3BE187A56BB1_TypeDefinitionIndex = 12455;

struct alignas(4) E62B3BE187A56BB1
{
	::UnityEngine::Vector3 FDCA522D4266E47C; // 0x10
	::UnityEngine::Vector3 FE0A742BE79475BC; // 0x1C
	::UnityEngine::Vector3 A18BB33E66EC4D5C; // 0x28
	::UnityEngine::Vector3 E3F6D2D0245DB738; // 0x34
	::UnityEngine::Quaternion ACBEF6F13E2BC5B2; // 0x40

	::System::Void A84DD752BE7FD60D(::UnityEngine::Vector3 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + E62B3BE187A56BB1_A84DD752BE7FD60D_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void BFE8980E79EE50B9(::UnityEngine::Quaternion E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + E62B3BE187A56BB1_BFE8980E79EE50B9_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void FA194587CB938504(::UnityEngine::Vector3 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + E62B3BE187A56BB1_FA194587CB938504_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EFF76C95E0AC13FE(::UnityEngine::Vector3 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + E62B3BE187A56BB1_EFF76C95E0AC13FE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void A324714249850ACA(::UnityEngine::Vector3 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + E62B3BE187A56BB1_A324714249850ACA_OFFSET))(this, E937D4885DAA1AE8);
	}
};
