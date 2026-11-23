#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/A9D8B58477663DCE.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody2D; }

#define UNITYENGINE_A40E9D8A6791DA32_A8BA3B36A7E8232A_OFFSET UNITYSDK_OFFSET(0x41AEE00)
#define UNITYENGINE_A40E9D8A6791DA32_F5E813789A9B76DD_OFFSET UNITYSDK_OFFSET(0x41AED50)
#define UNITYENGINE_A40E9D8A6791DA32_F8674FAC04179A5F_OFFSET UNITYSDK_OFFSET(0x41AEF20)
#define UNITYENGINE_A40E9D8A6791DA32_F8FC6F280E80196C_OFFSET UNITYSDK_OFFSET(0x41AEF40)

namespace UnityEngine
{
	inline static constexpr unsigned int A40E9D8A6791DA32_TypeDefinitionIndex = 21369;

	class A40E9D8A6791DA32 : public ::System::Object
	{
	public:
		::System::Int32 B54114F6BBE37349; // 0x10
		::System::Int32 AE7FE5CAC3FCC2E0; // 0x14
		::System::Int32 E1BCDB6C570026FD; // 0x18
		::System::Int32 A398B56FD5AC51C4; // 0x1C
		::UnityEngine::Vector2 EF4A2366E19A65B3; // 0x20
		::System::Int32 F5DFB554D6006D0B; // 0x28
		::System::Int32 E9FC4A9F6CE6B1CB; // 0x2C
		::Il2CppArray<::UnityEngine::A9D8B58477663DCE>* F708F21120D85BD2; // 0x30
		::Il2CppArray<::UnityEngine::A9D8B58477663DCE>* AFF235E247A36292; // 0x38

		::UnityEngine::Rigidbody2D* F8FC6F280E80196C()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A40E9D8A6791DA32_F8FC6F280E80196C_OFFSET))(this);
		}

		::UnityEngine::Collider2D* F5E813789A9B76DD()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A40E9D8A6791DA32_F5E813789A9B76DD_OFFSET))(this);
		}

		::UnityEngine::GameObject* A8BA3B36A7E8232A()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A40E9D8A6791DA32_A8BA3B36A7E8232A_OFFSET))(this);
		}

		::UnityEngine::Vector2 F8674FAC04179A5F()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A40E9D8A6791DA32_F8674FAC04179A5F_OFFSET))(this);
		}
	};
}
