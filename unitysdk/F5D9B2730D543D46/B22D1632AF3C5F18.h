#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseRaycaster; }

#define F5D9B2730D543D46_B22D1632AF3C5F18_A44E95E5AA30CE4F_OFFSET UNITYSDK_OFFSET(0x19FB3C0)
#define F5D9B2730D543D46_B22D1632AF3C5F18_A8BA3B36A7E8232A_OFFSET UNITYSDK_OFFSET(0x184BDF0)
#define F5D9B2730D543D46_B22D1632AF3C5F18_E09EE49B45034CBD_OFFSET UNITYSDK_OFFSET(0x42289D0)
#define F5D9B2730D543D46_B22D1632AF3C5F18_E80B9F472EEFDF74_OFFSET UNITYSDK_OFFSET(0x4227D40)

namespace F5D9B2730D543D46
{
	inline static constexpr unsigned int B22D1632AF3C5F18_TypeDefinitionIndex = 18523;

	struct alignas(8) B22D1632AF3C5F18
	{
		::UnityEngine::GameObject* A3E53F53FD3D4133; // 0x10
		::UnityEngine::EventSystems::BaseRaycaster* E85A43EF7DC046E2; // 0x18
		::System::Single A9D7E78EEC7DC76A; // 0x20
		::System::Single EBC9556C8060B538; // 0x24
		::System::Int32 AFFF28BFAB13D01F; // 0x28
		::System::Int32 F61236D487F3F2FE; // 0x2C
		::System::Int32 E1779B0E8BE8B61C; // 0x30
		::System::Int32 E1D6218C8AD27C1C; // 0x34
		::System::Int32 FBE25E3379A9A53A; // 0x38
		::UnityEngine::Vector3 A1BF736B4A341158; // 0x3C
		::UnityEngine::Vector3 BB79458FD35700BD; // 0x48
		::UnityEngine::Vector2 B7803DA1AD8D55F9; // 0x54
		::System::Int32 A3326B34D10E9B3F; // 0x5C

		::System::Void A44E95E5AA30CE4F(::UnityEngine::GameObject* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + F5D9B2730D543D46_B22D1632AF3C5F18_A44E95E5AA30CE4F_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean E09EE49B45034CBD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F5D9B2730D543D46_B22D1632AF3C5F18_E09EE49B45034CBD_OFFSET))(this);
		}

		::System::String* E80B9F472EEFDF74()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F5D9B2730D543D46_B22D1632AF3C5F18_E80B9F472EEFDF74_OFFSET))(this);
		}

		::UnityEngine::GameObject* A8BA3B36A7E8232A()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + F5D9B2730D543D46_B22D1632AF3C5F18_A8BA3B36A7E8232A_OFFSET))(this);
		}
	};
}
