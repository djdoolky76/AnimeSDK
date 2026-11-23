#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_POLYGONCOLLIDER2D_AE53DFC32532A527_OFFSET UNITYSDK_OFFSET(0x41B13F0)
#define UNITYENGINE_POLYGONCOLLIDER2D_B085C0E729E24F18_OFFSET UNITYSDK_OFFSET(0x41B15E0)
#define UNITYENGINE_POLYGONCOLLIDER2D_B4E979F3F890475F_OFFSET UNITYSDK_OFFSET(0x41B15A0)
#define UNITYENGINE_POLYGONCOLLIDER2D_B8932F84A1EA1196_OFFSET UNITYSDK_OFFSET(0x41B13B0)
#define UNITYENGINE_POLYGONCOLLIDER2D_F48F26B0231BEDE5_OFFSET UNITYSDK_OFFSET(0x41B1560)
#define UNITYENGINE_POLYGONCOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x40E9D70)

namespace UnityEngine
{
	inline static constexpr unsigned int PolygonCollider2D_TypeDefinitionIndex = 21371;

	class PolygonCollider2D : public ::UnityEngine::Collider2D
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* AE53DFC32532A527(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_AE53DFC32532A527_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Int32 B4E979F3F890475F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_B4E979F3F890475F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Void B085C0E729E24F18(::Il2CppArray<::UnityEngine::Vector2>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_B085C0E729E24F18_OFFSET))(this, E937D4885DAA1AE8);
		}

		::Il2CppArray<::UnityEngine::Vector2>* B8932F84A1EA1196(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_B8932F84A1EA1196_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Int32 F48F26B0231BEDE5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_F48F26B0231BEDE5_OFFSET))(this);
		}
	};
}
