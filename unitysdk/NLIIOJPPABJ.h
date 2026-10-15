#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Rigidbody; }

#define NLIIOJPPABJ_CTOR_OFFSET UNITYSDK_OFFSET(0x21A50)
#define NLIIOJPPABJ_HHCBBGLHFAN_OFFSET UNITYSDK_OFFSET(0x21AC0)
#define NLIIOJPPABJ_HKELLKAAHNN_OFFSET UNITYSDK_OFFSET(0x21A60)

inline static constexpr unsigned int NLIIOJPPABJ_TypeDefinitionIndex = 54756;

	struct alignas(4) NLIIOJPPABJ
	{
		::System::Single COAELIHGAHH; // 0x10
		::System::Single PJHPCMBDACD; // 0x14
		::System::Void _ctor(::UnityEngine::Rigidbody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + NLIIOJPPABJ_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean HKELLKAAHNN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NLIIOJPPABJ_HKELLKAAHNN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single HHCBBGLHFAN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NLIIOJPPABJ_HHCBBGLHFAN_OFFSET))(this);
		}

	};
