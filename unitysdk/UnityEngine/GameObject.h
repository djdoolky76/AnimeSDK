#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/PrimitiveType.h"
#include "unitysdk/UnityEngine/SendMessageOptions.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F71AA40)
#define UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1F71AA60)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x1F71AA30)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_2_OFFSET UNITYSDK_OFFSET(0x1F71ABF0)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_3_OFFSET UNITYSDK_OFFSET(0x1F71AC00)
#define UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F71AA20)
#define UNITYENGINE_GAMEOBJECT_COMPARETAG_OFFSET UNITYSDK_OFFSET(0x1F706580)
#define UNITYENGINE_GAMEOBJECT_CREATEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1F71A7B0)
#define UNITYENGINE_GAMEOBJECT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F71AC30)
#define UNITYENGINE_GAMEOBJECT_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F71AC40)
#define UNITYENGINE_GAMEOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F71AC10)
#define UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTSWITHTAG_OFFSET UNITYSDK_OFFSET(0x1F71ABA0)
#define UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTWITHTAG_OFFSET UNITYSDK_OFFSET(0x1F71A9D0)
#define UNITYENGINE_GAMEOBJECT_FINDWITHTAG_OFFSET UNITYSDK_OFFSET(0x1F71A9C0)
#define UNITYENGINE_GAMEOBJECT_FIND_OFFSET UNITYSDK_OFFSET(0x1F71ACB0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTBYNAME_OFFSET UNITYSDK_OFFSET(0x1F71A7D0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x1F71A7C0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_1_OFFSET UNITYSDK_OFFSET(0x1F71A7F0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET UNITYSDK_OFFSET(0x1F706000)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET UNITYSDK_OFFSET(0x1F7061E0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F71A820)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_2_OFFSET UNITYSDK_OFFSET(0x1F71A8E0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_3_OFFSET UNITYSDK_OFFSET(0x1F7060D0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_1_OFFSET UNITYSDK_OFFSET(0x1F71A940)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_2_OFFSET UNITYSDK_OFFSET(0x1F706270)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F71A800)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTSWITHARRAYINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F71A810)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_2_OFFSET UNITYSDK_OFFSET(0x1F71A830)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_4_OFFSET UNITYSDK_OFFSET(0x1F71A860)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1F7063D0)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x1F705F10)
#define UNITYENGINE_GAMEOBJECT_GETCOMPONENT_2_OFFSET UNITYSDK_OFFSET(0x1F71A7E0)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1F71AAF0)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVESELF_OFFSET UNITYSDK_OFFSET(0x1F71AAE0)
#define UNITYENGINE_GAMEOBJECT_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1F71AAB0)
#define UNITYENGINE_GAMEOBJECT_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1F71AD00)
#define UNITYENGINE_GAMEOBJECT_GET_ISSTATICBATCHABLE_OFFSET UNITYSDK_OFFSET(0x1F71AB90)
#define UNITYENGINE_GAMEOBJECT_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1F71AB70)
#define UNITYENGINE_GAMEOBJECT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x1F71AA80)
#define UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILDINTREE_OFFSET UNITYSDK_OFFSET(0x1F71AB60)
#define UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1F71AB40)
#define UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATEINTREE_OFFSET UNITYSDK_OFFSET(0x1F71AB30)
#define UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F71AB10)
#define UNITYENGINE_GAMEOBJECT_GET_SCENECULLINGMASK_OFFSET UNITYSDK_OFFSET(0x1F71ACF0)
#define UNITYENGINE_GAMEOBJECT_GET_SCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F71ACE0)
#define UNITYENGINE_GAMEOBJECT_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x1F71ACC0)
#define UNITYENGINE_GAMEOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1F706500)
#define UNITYENGINE_GAMEOBJECT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F71AA70)
#define UNITYENGINE_GAMEOBJECT_INTERNAL_ADDCOMPONENTWITHTYPE_OFFSET UNITYSDK_OFFSET(0x1F71AA50)
#define UNITYENGINE_GAMEOBJECT_INTERNAL_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1F71AC20)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_1_OFFSET UNITYSDK_OFFSET(0x1F71A9F0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_2_OFFSET UNITYSDK_OFFSET(0x1F71ABB0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_3_OFFSET UNITYSDK_OFFSET(0x1F71ABC0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET UNITYSDK_OFFSET(0x1F71A9E0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE_1_OFFSET UNITYSDK_OFFSET(0x1F71AA10)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE_2_OFFSET UNITYSDK_OFFSET(0x1F71ABD0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE_3_OFFSET UNITYSDK_OFFSET(0x1F71ABE0)
#define UNITYENGINE_GAMEOBJECT_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F71AA00)
#define UNITYENGINE_GAMEOBJECT_SETACTIVERECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1F71AB00)
#define UNITYENGINE_GAMEOBJECT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1F71AAD0)
#define UNITYENGINE_GAMEOBJECT_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1F71AAA0)
#define UNITYENGINE_GAMEOBJECT_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1F71AAC0)
#define UNITYENGINE_GAMEOBJECT_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x1F71AB80)
#define UNITYENGINE_GAMEOBJECT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x1F71AA90)
#define UNITYENGINE_GAMEOBJECT_SET_LAZYLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1F71AB50)
#define UNITYENGINE_GAMEOBJECT_SET_LIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F71AB20)
#define UNITYENGINE_GAMEOBJECT_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1F706540)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTFASTPATH_OFFSET UNITYSDK_OFFSET(0x1F71A9B0)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F71A9A0)
#define UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x1F705F80)

namespace UnityEngine
{
	inline static constexpr unsigned int GameObject_TypeDefinitionIndex = 4328;

	class GameObject : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::GameObject* CreatePrimitive(::UnityEngine::PrimitiveType a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::PrimitiveType))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_CREATEPRIMITIVE_OFFSET))(a1);
		}

		::UnityEngine::Component* GetComponent_1(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENT_1_OFFSET))(this, a1);
		}

		::System::Void GetComponentFastPath(::System::Type* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTFASTPATH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* GetComponentByName(::System::String* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTBYNAME_OFFSET))(this, a1);
		}

		::UnityEngine::Component* GetComponent_2(::System::String* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENT_2_OFFSET))(this, a1);
		}

		::UnityEngine::Component* GetComponentInChildren(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* GetComponentInChildren_1(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINCHILDREN_1_OFFSET))(this, a1);
		}

		::UnityEngine::Component* GetComponentInParent(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTINPARENT_OFFSET))(this, a1);
		}

		::System::Array* GetComponentsInternal(::System::Type* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Object* a6)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 GetComponentsWithArrayInternal(::System::Type* a1, ::System::Array* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*, ::System::Array*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSWITHARRAYINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 GetComponentsCountInternal(::System::Type* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSCOUNTINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponents(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_OFFSET))(this, a1);
		}

		::System::Void GetComponents_2(::System::Type* a1, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetComponents_4(::System::Type* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTS_4_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInChildren_2(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_2_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInChildren_3(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINCHILDREN_3_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInParent_1(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetComponentsInParent_2(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GETCOMPONENTSINPARENT_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetComponent_1(::System::Type* a1, ::UnityEngine::Component* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENT_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* TryGetComponentInternal(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTINTERNAL_OFFSET))(this, a1);
		}

		::System::Void TryGetComponentFastPath(::System::Type* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_TRYGETCOMPONENTFASTPATH_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::GameObject* FindWithTag(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDWITHTAG_OFFSET))(a1);
		}

		::System::Void SendMessageUpwards(::System::String* a1, ::UnityEngine::SendMessageOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessage(::System::String* a1, ::UnityEngine::SendMessageOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void BroadcastMessage(::System::String* a1, ::UnityEngine::SendMessageOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* AddComponentInternal(::System::String* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_ADDCOMPONENTINTERNAL_OFFSET))(this, a1);
		}

		::UnityEngine::Component* Internal_AddComponentWithType(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_INTERNAL_ADDCOMPONENTWITHTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Component* AddComponent(::System::Type* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_ADDCOMPONENT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Int32 get_layer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_layer(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LAYER_OFFSET))(this, a1);
		}

		::System::Void SetLayerRecursively(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETLAYERRECURSIVELY_OFFSET))(this, a1);
		}

		::System::Boolean get_active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_active(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_ACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_activeSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVESELF_OFFSET))(this);
		}

		::System::Boolean get_activeInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ACTIVEINHIERARCHY_OFFSET))(this);
		}

		::System::Void SetActiveRecursively(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SETACTIVERECURSIVELY_OFFSET))(this, a1);
		}

		::System::Boolean get_lightWeightDeactivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void set_lightWeightDeactivate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LIGHTWEIGHTDEACTIVATE_OFFSET))(this, a1);
		}

		::System::Boolean get_lightWeightDeactivateInTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LIGHTWEIGHTDEACTIVATEINTREE_OFFSET))(this);
		}

		::System::Boolean get_lazyLayoutRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILD_OFFSET))(this);
		}

		::System::Void set_lazyLayoutRebuild(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_LAZYLAYOUTREBUILD_OFFSET))(this, a1);
		}

		::System::Boolean get_lazyLayoutRebuildInTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_LAZYLAYOUTREBUILDINTREE_OFFSET))(this);
		}

		::System::Boolean get_isStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Void set_isStatic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_ISSTATIC_OFFSET))(this, a1);
		}

		::System::Boolean get_isStaticBatchable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_ISSTATICBATCHABLE_OFFSET))(this);
		}

		::System::String* get_tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_TAG_OFFSET))(this);
		}

		::System::Void set_tag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SET_TAG_OFFSET))(this, a1);
		}

		::System::Boolean CompareTag(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_COMPARETAG_OFFSET))(this, a1);
		}

		static ::UnityEngine::GameObject* FindGameObjectWithTag(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTWITHTAG_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* FindGameObjectsWithTag(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FINDGAMEOBJECTSWITHTAG_OFFSET))(a1);
		}

		::System::Void SendMessageUpwards_1(::System::String* a1, ::System::Object* a2, ::UnityEngine::SendMessageOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendMessageUpwards_2(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_2_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessageUpwards_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGEUPWARDS_3_OFFSET))(this, a1);
		}

		::System::Void SendMessage_1(::System::String* a1, ::System::Object* a2, ::UnityEngine::SendMessageOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendMessage_2(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE_2_OFFSET))(this, a1, a2);
		}

		::System::Void SendMessage_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_SENDMESSAGE_3_OFFSET))(this, a1);
		}

		::System::Void BroadcastMessage_1(::System::String* a1, ::System::Object* a2, ::UnityEngine::SendMessageOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::UnityEngine::SendMessageOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BroadcastMessage_2(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_2_OFFSET))(this, a1, a2);
		}

		::System::Void BroadcastMessage_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_BROADCASTMESSAGE_3_OFFSET))(this, a1);
		}

		static ::System::Void Internal_CreateGameObject(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_INTERNAL_CREATEGAMEOBJECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* Find(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_FIND_OFFSET))(a1);
		}

		::UnityEngine::SceneManagement::Scene get_scene()
		{
			return ((::UnityEngine::SceneManagement::Scene(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_SCENE_OFFSET))(this);
		}

		::System::UInt64 get_sceneCullingMask()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_SCENECULLINGMASK_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void get_scene_Injected(::UnityEngine::SceneManagement::Scene a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + UNITYENGINE_GAMEOBJECT_GET_SCENE_INJECTED_OFFSET))(this, a1);
		}

	};
}
