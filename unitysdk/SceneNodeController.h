#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define SCENENODECONTROLLER_ENABLELODGROUP_OFFSET UNITYSDK_OFFSET(0x1B9FDC90)
#define SCENENODECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B9FDD70)
#define SCENENODECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B9FDFC0)
#define SCENENODECONTROLLER_VISBLEPREFABCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9FDE80)
#define SCENENODECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9FE360)
#define SCENENODECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FE280)

inline static constexpr unsigned int SceneNodeController_TypeDefinitionIndex = 43243;

class SceneNodeController : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_Lod0MeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x4F080);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_Lod1MeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x4F088);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_VisbleMeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x4F090);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_InvisbleMeshList()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x4F098);
	}
	static ::System::Int32* StaticGet_VisbleMeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12B90);
	}
	static ::System::Int32* StaticGet_MeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12B94);
	}
	static ::System::Int32* StaticGet_InvisbleMeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12B98);
	}
	static ::System::Boolean* StaticGet_EndbaleRefreshMeshRender()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12B9C);
	}
	static ::System::Boolean* StaticGet_EnableLodGroup()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12B9D);
	}
	static ::System::Boolean* StaticGet_EnableLodTest()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12B9E);
	}
	static ::System::Int32* StaticGet_Lod1MeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12BA0);
	}
	static ::System::Int32* StaticGet_Lod0MeshRenderNumber()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12BA4);
	}
	static ::System::Single* StaticGet_Disblelight()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(SceneNodeController_TypeDefinitionIndex)->GetStaticField(0x12BA8);
	}
	::System::Collections::Generic::List_1<::UnityEngine::Light*>* lights; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENODECONTROLLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENENODECONTROLLER__CCTOR_OFFSET))();
	}

	::System::Void EnableLODGroup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENODECONTROLLER_ENABLELODGROUP_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENODECONTROLLER_ONENABLE_OFFSET))(this);
	}

	static ::System::Void VisblePrefabCount()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENENODECONTROLLER_VISBLEPREFABCOUNT_OFFSET))();
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENODECONTROLLER_UPDATE_OFFSET))(this);
	}
};
