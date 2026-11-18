#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshData; }

#define NAVMESHPREFABINSTANCE_ADDINSTANCE_OFFSET UNITYSDK_OFFSET(0x106C9E60)
#define NAVMESHPREFABINSTANCE_ADDTRACKING_OFFSET UNITYSDK_OFFSET(0x106CA100)
#define NAVMESHPREFABINSTANCE_GET_FOLLOWTRANSFORM_OFFSET UNITYSDK_OFFSET(0x106C9CA0)
#define NAVMESHPREFABINSTANCE_GET_NAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x106C9C80)
#define NAVMESHPREFABINSTANCE_GET_TRACKEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x106C9D90)
#define NAVMESHPREFABINSTANCE_HASMOVED_OFFSET UNITYSDK_OFFSET(0x106CA4B0)
#define NAVMESHPREFABINSTANCE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x106CA2A0)
#define NAVMESHPREFABINSTANCE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x106C9DF0)
#define NAVMESHPREFABINSTANCE_REMOVETRACKING_OFFSET UNITYSDK_OFFSET(0x106CA2F0)
#define NAVMESHPREFABINSTANCE_SETFOLLOWTRANSFORM_OFFSET UNITYSDK_OFFSET(0x106C9D20)
#define NAVMESHPREFABINSTANCE_SET_FOLLOWTRANSFORM_OFFSET UNITYSDK_OFFSET(0x106C9CB0)
#define NAVMESHPREFABINSTANCE_SET_NAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x106C9C90)
#define NAVMESHPREFABINSTANCE_UPDATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x106CA460)
#define NAVMESHPREFABINSTANCE_UPDATETRACKEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x106CA610)
#define NAVMESHPREFABINSTANCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x106CA830)
#define NAVMESHPREFABINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x106CA7E0)

inline static constexpr unsigned int NavMeshPrefabInstance_TypeDefinitionIndex = 42936;

class NavMeshPrefabInstance : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::NavMeshPrefabInstance*>** StaticGet_s_TrackedInstances()
	{
		return (::System::Collections::Generic::List_1<::NavMeshPrefabInstance*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshPrefabInstance_TypeDefinitionIndex)->GetStaticField(0x39C80);
	}
	::UnityEngine::AI::NavMeshData* m_NavMesh; // 0x18
	::System::Boolean m_FollowTransform; // 0x20
	::System::Byte _padding0[0x3];
	::UnityEngine::AI::NavMeshDataInstance m_Instance; // 0x24
	::UnityEngine::Vector3 m_Position; // 0x28
	::UnityEngine::Quaternion m_Rotation; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE__CCTOR_OFFSET))();
	}

	::UnityEngine::AI::NavMeshData* get_navMeshData()
	{
		return ((::UnityEngine::AI::NavMeshData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_GET_NAVMESHDATA_OFFSET))(this);
	}

	::System::Void set_navMeshData(::UnityEngine::AI::NavMeshData* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshData*))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_SET_NAVMESHDATA_OFFSET))(this, value);
	}

	::System::Boolean get_followTransform()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_GET_FOLLOWTRANSFORM_OFFSET))(this);
	}

	::System::Void set_followTransform(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_SET_FOLLOWTRANSFORM_OFFSET))(this, value);
	}

	static ::System::Collections::Generic::List_1<::NavMeshPrefabInstance*>* get_trackedInstances()
	{
		return ((::System::Collections::Generic::List_1<::NavMeshPrefabInstance*>*(*)())((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_GET_TRACKEDINSTANCES_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_ONDISABLE_OFFSET))(this);
	}

	::System::Void UpdateInstance()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_UPDATEINSTANCE_OFFSET))(this);
	}

	::System::Void AddInstance()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_ADDINSTANCE_OFFSET))(this);
	}

	::System::Void AddTracking()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_ADDTRACKING_OFFSET))(this);
	}

	::System::Void RemoveTracking()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_REMOVETRACKING_OFFSET))(this);
	}

	::System::Void SetFollowTransform(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_SETFOLLOWTRANSFORM_OFFSET))(this, value);
	}

	::System::Boolean HasMoved()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_HASMOVED_OFFSET))(this);
	}

	static ::System::Void UpdateTrackedInstances()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAVMESHPREFABINSTANCE_UPDATETRACKEDINSTANCES_OFFSET))();
	}
};
