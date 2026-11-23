#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_COMPOSITECOLLIDER2D_AE53DFC32532A527_OFFSET UNITYSDK_OFFSET(0x41AF010)
#define UNITYENGINE_COMPOSITECOLLIDER2D_AF6A1F111CC77251_OFFSET UNITYSDK_OFFSET(0x41AEFC0)
#define UNITYENGINE_COMPOSITECOLLIDER2D_B4E979F3F890475F_OFFSET UNITYSDK_OFFSET(0x41AF1A0)
#define UNITYENGINE_COMPOSITECOLLIDER2D_FB8BA32FD2AFAFC6_OFFSET UNITYSDK_OFFSET(0x41AF1E0)
#define UNITYENGINE_COMPOSITECOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x40E9D70)

namespace UnityEngine
{
	inline static constexpr unsigned int CompositeCollider2D_TypeDefinitionIndex = 21376;

	class CompositeCollider2D : public ::UnityEngine::Collider2D
	{
	public:
		::System::Int32 AF6A1F111CC77251(::System::Int32 B48C66E5FB2449C6, ::Il2CppArray<::UnityEngine::Vector2>* B8B0EF9ED37BA7F0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_AF6A1F111CC77251_OFFSET))(this, B48C66E5FB2449C6, B8B0EF9ED37BA7F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Int32 FB8BA32FD2AFAFC6()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_FB8BA32FD2AFAFC6_OFFSET))(this);
		}

		::System::Int32 AE53DFC32532A527(::System::Int32 B48C66E5FB2449C6, ::Il2CppArray<::UnityEngine::Vector2>* B8B0EF9ED37BA7F0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_AE53DFC32532A527_OFFSET))(this, B48C66E5FB2449C6, B8B0EF9ED37BA7F0);
		}

		::System::Int32 B4E979F3F890475F()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPOSITECOLLIDER2D_B4E979F3F890475F_OFFSET))(this);
		}
	};
}
