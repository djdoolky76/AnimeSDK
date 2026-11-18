#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CollisionDetector_DetectorType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }

#define COLLISIONDETECTOR_ADD_ONCOLLISIONDETECTED_OFFSET UNITYSDK_OFFSET(0x15A26620)
#define COLLISIONDETECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15A26760)
#define COLLISIONDETECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15A267A0)
#define COLLISIONDETECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15A26720)
#define COLLISIONDETECTOR_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x15A26820)
#define COLLISIONDETECTOR_REMOVE_ONCOLLISIONDETECTED_OFFSET UNITYSDK_OFFSET(0x15A266A0)
#define COLLISIONDETECTOR_RESETCOLLISION_OFFSET UNITYSDK_OFFSET(0x15A267E0)
#define COLLISIONDETECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A26CA0)
#define COLLISIONDETECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15A26C40)

inline static constexpr unsigned int CollisionDetector_TypeDefinitionIndex = 52765;

class CollisionDetector : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::GameObject** StaticGet_testSceneRoot()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(CollisionDetector_TypeDefinitionIndex)->GetStaticField(0x53130);
	}
	static ::System::Nullable_1<::UnityEngine::SceneManagement::Scene>* StaticGet_testScene()
	{
		return (::System::Nullable_1<::UnityEngine::SceneManagement::Scene>*)Il2CppClass::FromTypeDefinitionIndex(CollisionDetector_TypeDefinitionIndex)->GetStaticField(0x143B0);
	}
	::System::Action_1<::CollisionDetector*>* OnCollisionDetected; // 0x18
	::System::Boolean hasCollided; // 0x20
	::System::Byte _padding0[0x3];
	::CollisionDetector_DetectorType type; // 0x24
	::System::Int32 targetOrder; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLISIONDETECTOR__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COLLISIONDETECTOR__CCTOR_OFFSET))();
	}

	::System::Void add_OnCollisionDetected(::System::Action_1<::CollisionDetector*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::CollisionDetector*>*))((::PBYTE)hIl2Cpp + COLLISIONDETECTOR_ADD_ONCOLLISIONDETECTED_OFFSET))(this, value);
	}

	::System::Void remove_OnCollisionDetected(::System::Action_1<::CollisionDetector*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::CollisionDetector*>*))((::PBYTE)hIl2Cpp + COLLISIONDETECTOR_REMOVE_ONCOLLISIONDETECTED_OFFSET))(this, value);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLISIONDETECTOR_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLISIONDETECTOR_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLISIONDETECTOR_ONDISABLE_OFFSET))(this);
	}

	::System::Void ResetCollision()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLISIONDETECTOR_RESETCOLLISION_OFFSET))(this);
	}

	::System::Void OnTriggerEnter2D(::UnityEngine::Collider2D* other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + COLLISIONDETECTOR_ONTRIGGERENTER2D_OFFSET))(this, other);
	}
};
