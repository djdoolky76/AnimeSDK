#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeOwner.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_AttributeData_AttributeType.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ToolsInfo_PaintMergeMode.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartInfo.h"
namespace HoudiniEngineUnity { class HEU_AttributeData; }
namespace HoudiniEngineUnity { class HEU_AttributesStore; }
namespace HoudiniEngineUnity { class HEU_AttributesStore_SetAttributeValueFunc; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_ToolsInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ADDATTRIBUTEVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x1CA56960)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ADDATTRIBUTEVALUEINT_OFFSET UNITYSDK_OFFSET(0x1CA560F0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_AREATTRIBUTESDIRTY_OFFSET UNITYSDK_OFFSET(0x1CA571B0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_COPYATTRIBUTEVALUESTO_OFFSET UNITYSDK_OFFSET(0x1CA572B0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CA523C0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA57B00)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x1CA51620)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_DISABLEPAINTCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1CA55890)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ENABLEPAINTCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1CA556E0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_FILLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CA56EB0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTEDATA_1_OFFSET UNITYSDK_OFFSET(0x1CA554E0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTEDATA_OFFSET UNITYSDK_OFFSET(0x1CA52260)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTENAMES_OFFSET UNITYSDK_OFFSET(0x1CA55530)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTESETVALUEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1CA56F60)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTESLIST_OFFSET UNITYSDK_OFFSET(0x1CA54700)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETPAINTMESHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1CA55B20)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETPOSITIONATTRIBUTEVALUES_OFFSET UNITYSDK_OFFSET(0x1CA57290)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETVERTEXINDICES_OFFSET UNITYSDK_OFFSET(0x1CA572A0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x1CA515C0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_GEONAME_OFFSET UNITYSDK_OFFSET(0x1CA515E0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_OUTPUTMESH_OFFSET UNITYSDK_OFFSET(0x1CA51610)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_OUTPUTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CA51600)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_PARTID_OFFSET UNITYSDK_OFFSET(0x1CA515D0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASCOLORATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CA515F0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASDIRTYATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CA53A20)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASMESHFORPAINTING_OFFSET UNITYSDK_OFFSET(0x1CA55B00)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HIDEPAINTMESH_OFFSET UNITYSDK_OFFSET(0x1CA55A40)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1CA574D0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ISVALIDSTORE_OFFSET UNITYSDK_OFFSET(0x1CA57410)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_MULTIPLYATTRIBUTEVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x1CA56C70)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_MULTIPLYATTRIBUTEVALUEINT_OFFSET UNITYSDK_OFFSET(0x1CA56570)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_PAINTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CA55B60)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_POPULATEATTRIBUTEDATA_OFFSET UNITYSDK_OFFSET(0x1CA52470)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REFRESHUPSTREAMINPUTS_OFFSET UNITYSDK_OFFSET(0x1CA55390)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REPLACEATTRIBUTEVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x1CA567C0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REPLACEATTRIBUTEVALUEINT_OFFSET UNITYSDK_OFFSET(0x1CA55E90)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEDATADIRTY_OFFSET UNITYSDK_OFFSET(0x1CA554C0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEDATASYNCD_OFFSET UNITYSDK_OFFSET(0x1CA546E0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x1CA55D10)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUEINT_OFFSET UNITYSDK_OFFSET(0x1CA55C10)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUESTRING_OFFSET UNITYSDK_OFFSET(0x1CA55E10)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUESTRING_OFFSET UNITYSDK_OFFSET(0x1CA56E10)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETUPMESHANDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA533B0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SHOWPAINTMESH_OFFSET UNITYSDK_OFFSET(0x1CA55950)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SUBTRACTATTRIBUTEVALUEFLOAT_OFFSET UNITYSDK_OFFSET(0x1CA56AE0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SUBTRACTATTRIBUTEVALUEINT_OFFSET UNITYSDK_OFFSET(0x1CA56330)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SYNCALLATTRIBUTESFROM_OFFSET UNITYSDK_OFFSET(0x1CA51740)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SYNCDIRTYATTRIBUTESTOHOUDINI_OFFSET UNITYSDK_OFFSET(0x1CA53B20)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPDATEATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0x1CA55280)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPDATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CA54B30)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPLOADATTRIBUTEVIAMESHINPUT_OFFSET UNITYSDK_OFFSET(0x1CA53B80)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AttributesStore_TypeDefinitionIndex = 41400;

	class HEU_AttributesStore : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 _geoID; // 0x18
		::System::Int32 _partID; // 0x1C
		::System::String* _geoName; // 0x20
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* _attributeDatas; // 0x28
		::System::Boolean _hasColorAttribute; // 0x30
		::System::Byte _padding0[0x7];
		::UnityEngine::Material* _localMaterial; // 0x38
		::UnityEngine::Transform* _outputTransform; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* _positionAttributeValues; // 0x48
		::Il2CppArray<::System::Int32>* _vertexIndices; // 0x50
		::UnityEngine::GameObject* _outputGameObject; // 0x58
		::UnityEngine::Mesh* _outputMesh; // 0x60
		::Il2CppArray<::UnityEngine::Material*>* _outputMaterials; // 0x68
		::UnityEngine::MeshCollider* _outputCollider; // 0x70
		::UnityEngine::Mesh* _outputColliderMesh; // 0x78
		::UnityEngine::MeshCollider* _outputMeshCollider; // 0x80
		::UnityEngine::MeshCollider* _localMeshCollider; // 0x88
		::System::Boolean _outputMeshRendererInitiallyEnabled; // 0x90
		::System::Boolean _outputMeshColliderInitiallyEnabled; // 0x91
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_CTOR_OFFSET))(this);
		}

		::System::Int32 get_GeoID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_GEOID_OFFSET))(this);
		}

		::System::Int32 get_PartID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_PARTID_OFFSET))(this);
		}

		::System::String* get_GeoName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_GEONAME_OFFSET))(this);
		}

		::System::Boolean HasColorAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASCOLORATTRIBUTE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_OutputTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_OUTPUTTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_OutputMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GET_OUTPUTMESH_OFFSET))(this);
		}

		::System::Void DestroyAllData(::HoudiniEngineUnity::HEU_HoudiniAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_DESTROYALLDATA_OFFSET))(this, a1);
		}

		::System::Void SyncAllAttributesFrom(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HEU_HoudiniAsset* a2, ::System::Int32 a3, ::HoudiniEngineUnity::HAPI_PartInfo a4, ::UnityEngine::GameObject* a5)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::Int32, ::HoudiniEngineUnity::HAPI_PartInfo, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SYNCALLATTRIBUTESFROM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetupMeshAndMaterials(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::HoudiniEngineUnity::HAPI_PartType a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::HoudiniEngineUnity::HAPI_PartType, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETUPMESHANDMATERIALS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasDirtyAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASDIRTYATTRIBUTES_OFFSET))(this);
		}

		::System::Void SyncDirtyAttributesToHoudini(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SYNCDIRTYATTRIBUTESTOHOUDINI_OFFSET))(this, a1);
		}

		::System::Void PopulateAttributeData(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::HEU_AttributeData* a4, ::HoudiniEngineUnity::HAPI_AttributeInfo a5)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_AttributeData*, ::HoudiniEngineUnity::HAPI_AttributeInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_POPULATEATTRIBUTEDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GetAttributesList(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* a4, ::HoudiniEngineUnity::HAPI_AttributeOwner a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*, ::HoudiniEngineUnity::HAPI_AttributeOwner, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTESLIST_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void UpdateAttribute(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::HEU_AttributeData* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HEU_AttributeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPDATEATTRIBUTE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateAttributeList(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_AttributeData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPDATEATTRIBUTELIST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RefreshUpstreamInputs(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REFRESHUPSTREAMINPUTS_OFFSET))(this, a1);
		}

		::System::Boolean UploadAttributeViaMeshInput(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_UPLOADATTRIBUTEVIAMESHINPUT_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void SetAttributeDataSyncd(::HoudiniEngineUnity::HEU_AttributeData* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEDATASYNCD_OFFSET))(a1);
		}

		static ::System::Void SetAttributeDataDirty(::HoudiniEngineUnity::HEU_AttributeData* a1)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEDATADIRTY_OFFSET))(a1);
		}

		::HoudiniEngineUnity::HEU_AttributeData* CreateAttribute(::System::String* a1, ::HoudiniEngineUnity::HAPI_AttributeInfo a2)
		{
			return ((::HoudiniEngineUnity::HEU_AttributeData*(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::HAPI_AttributeInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_CREATEATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::HoudiniEngineUnity::HEU_AttributeData* GetAttributeData(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::HEU_AttributeData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTEDATA_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::HEU_AttributeData* GetAttributeData_1(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::HEU_AttributeData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTEDATA_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetAttributeNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTENAMES_OFFSET))(this);
		}

		::System::Void EnablePaintCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ENABLEPAINTCOLLIDER_OFFSET))(this);
		}

		::System::Void DisablePaintCollider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_DISABLEPAINTCOLLIDER_OFFSET))(this);
		}

		::System::Void ShowPaintMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SHOWPAINTMESH_OFFSET))(this);
		}

		::System::Void HidePaintMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HIDEPAINTMESH_OFFSET))(this);
		}

		::System::Boolean HasMeshForPainting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_HASMESHFORPAINTING_OFFSET))(this);
		}

		::UnityEngine::MeshCollider* GetPaintMeshCollider()
		{
			return ((::UnityEngine::MeshCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETPAINTMESHCOLLIDER_OFFSET))(this);
		}

		::System::Void PaintAttribute(::HoudiniEngineUnity::HEU_AttributeData* a1, ::HoudiniEngineUnity::HEU_ToolsInfo* a2, ::System::Int32 a3, ::System::Single a4, ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc* a5)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributeData*, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single, ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_PAINTATTRIBUTE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void SetAttributeEditValueInt(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUEINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAttributeEditValueFloat(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUEFLOAT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetAttributeEditValueString(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEEDITVALUESTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReplaceAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_ToolsInfo* a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REPLACEATTRIBUTEVALUEINT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AddAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_ToolsInfo* a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ADDATTRIBUTEVALUEINT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SubtractAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_ToolsInfo* a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SUBTRACTATTRIBUTEVALUEINT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void MultiplyAttributeValueInt(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_ToolsInfo* a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_MULTIPLYATTRIBUTEVALUEINT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReplaceAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_ToolsInfo* a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_REPLACEATTRIBUTEVALUEFLOAT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void AddAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_ToolsInfo* a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ADDATTRIBUTEVALUEFLOAT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SubtractAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_ToolsInfo* a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SUBTRACTATTRIBUTEVALUEFLOAT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void MultiplyAttributeValueFloat(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_ToolsInfo* a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_MULTIPLYATTRIBUTEVALUEFLOAT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetAttributeValueString(::HoudiniEngineUnity::HEU_AttributeData* a1, ::System::Int32 a2, ::HoudiniEngineUnity::HEU_ToolsInfo* a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUESTRING_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void FillAttribute(::HoudiniEngineUnity::HEU_AttributeData* a1, ::HoudiniEngineUnity::HEU_ToolsInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributeData*, ::HoudiniEngineUnity::HEU_ToolsInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_FILLATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Boolean AreAttributesDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_AREATTRIBUTESDIRTY_OFFSET))(this);
		}

		::System::Void GetPositionAttributeValues(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETPOSITIONATTRIBUTEVALUES_OFFSET))(this, a1);
		}

		::System::Void GetVertexIndices(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETVERTEXINDICES_OFFSET))(this, a1);
		}

		static ::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc* GetAttributeSetValueFunction(::HoudiniEngineUnity::HEU_AttributeData_AttributeType a1, ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode a2)
		{
			return ((::HoudiniEngineUnity::HEU_AttributesStore_SetAttributeValueFunc*(*)(::HoudiniEngineUnity::HEU_AttributeData_AttributeType, ::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_GETATTRIBUTESETVALUEFUNCTION_OFFSET))(a1, a2);
		}

		::System::Void CopyAttributeValuesTo(::HoudiniEngineUnity::HEU_AttributesStore* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributesStore*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_COPYATTRIBUTEVALUESTO_OFFSET))(this, a1);
		}

		::System::Boolean IsValidStore(::HoudiniEngineUnity::HEU_SessionBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ISVALIDSTORE_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_AttributesStore* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributesStore*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

	};
}
