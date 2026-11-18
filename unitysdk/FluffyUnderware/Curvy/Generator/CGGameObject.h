#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGBounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace FluffyUnderware::Curvy::Generator { class CGGameObjectProperties; }
namespace UnityEngine { class GameObject; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1FBB0710)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1FBB0BE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBB0840)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FBB0A90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FBB08B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1FBB0AF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB0820)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGGameObject_TypeDefinitionIndex = 37487;

	class CGGameObject : public ::FluffyUnderware::Curvy::Generator::CGBounds
	{
	public:
		::UnityEngine::GameObject* Object; // 0x40
		::UnityEngine::Vector3 Scale; // 0x48
		::UnityEngine::Vector3 Rotate; // 0x54
		::UnityEngine::Vector3 Translate; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::Generator::CGGameObjectProperties* properties)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT__CTOR_1_OFFSET))(this, properties);
		}

		::System::Void _ctor_2(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT__CTOR_2_OFFSET))(this, obj);
		}

		::System::Void _ctor_3(::UnityEngine::GameObject* obj, ::UnityEngine::Vector3 translate, ::UnityEngine::Vector3 rotate, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT__CTOR_3_OFFSET))(this, obj, translate, rotate, scale);
		}

		::System::Void _ctor_4(::FluffyUnderware::Curvy::Generator::CGGameObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGGameObject*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT__CTOR_4_OFFSET))(this, source);
		}

		::UnityEngine::Matrix4x4 get_Matrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT_GET_MATRIX_OFFSET))(this);
		}

		::System::Void RecalculateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGGAMEOBJECT_RECALCULATEBOUNDS_OFFSET))(this);
		}
	};
}
