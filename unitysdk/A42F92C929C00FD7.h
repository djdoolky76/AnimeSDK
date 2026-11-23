#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define A42F92C929C00FD7_A98E074B6469BCF6_OFFSET UNITYSDK_OFFSET(0x1EAE190)
#define A42F92C929C00FD7_AF764B54A54C9B65_OFFSET UNITYSDK_OFFSET(0x1DC0A30)
#define A42F92C929C00FD7_B46A251905AA9AAC_OFFSET UNITYSDK_OFFSET(0x1EAE1A0)
#define A42F92C929C00FD7_B87B9B076F43AA7B_OFFSET UNITYSDK_OFFSET(0x16BB200)
#define A42F92C929C00FD7_E8A7C6746F5EB39E_OFFSET UNITYSDK_OFFSET(0x3FC2390)
#define A42F92C929C00FD7_F8DDFEE7F8C52482_OFFSET UNITYSDK_OFFSET(0x2504B20)

inline static constexpr unsigned int A42F92C929C00FD7_TypeDefinitionIndex = 14416;

struct alignas(4) A42F92C929C00FD7
{
	::System::UInt32 B0336811370D8BFD; // 0x10
	::UnityEngine::Vector3 E72123AEC04C29FC; // 0x14
	::UnityEngine::Quaternion FADF0A124FF06481; // 0x20

	::System::Void AF764B54A54C9B65(::UnityEngine::Quaternion E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + A42F92C929C00FD7_AF764B54A54C9B65_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void E8A7C6746F5EB39E(::UnityEngine::Vector3 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + A42F92C929C00FD7_E8A7C6746F5EB39E_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::UInt32 B46A251905AA9AAC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A42F92C929C00FD7_B46A251905AA9AAC_OFFSET))(this);
	}

	::System::Void A98E074B6469BCF6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A42F92C929C00FD7_A98E074B6469BCF6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::UnityEngine::Quaternion B87B9B076F43AA7B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + A42F92C929C00FD7_B87B9B076F43AA7B_OFFSET))(this);
	}

	::UnityEngine::Vector3 F8DDFEE7F8C52482()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + A42F92C929C00FD7_F8DDFEE7F8C52482_OFFSET))(this);
	}
};
