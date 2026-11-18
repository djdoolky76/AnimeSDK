#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class MaterialInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_CHECKANDUPDATEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1FB02890)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_CHECKISSCREENMATERIAL_OFFSET UNITYSDK_OFFSET(0x1FAFE800)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_CHECKMATERIALINDEXVALID_OFFSET UNITYSDK_OFFSET(0x1FB011F0)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_CLEARFRAMEALTERS_OFFSET UNITYSDK_OFFSET(0x1FAFFDD0)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_FINDPROPERTYALTERS_OFFSET UNITYSDK_OFFSET(0x1FAFF1C0)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GETATTRALTERS_OFFSET UNITYSDK_OFFSET(0x1FB01A10)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GETFRAMETIMES_OFFSET UNITYSDK_OFFSET(0x1FB00920)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GETKEYFRAMES_OFFSET UNITYSDK_OFFSET(0x1FAFF5E0)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GETMULTIMATERIALPATTERN_OFFSET UNITYSDK_OFFSET(0x1FB012B0)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1FB02450)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GET_INSTANCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1FAFDDE0)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1FB00360)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RECORDERFRAMES_OFFSET UNITYSDK_OFFSET(0x1FB00690)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RECORDERMATERIALLEN_OFFSET UNITYSDK_OFFSET(0x1FB02540)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RECORDMESHRENDERS_OFFSET UNITYSDK_OFFSET(0x1FAFE180)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RECOVERFRAME_OFFSET UNITYSDK_OFFSET(0x1FB00010)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RECOVERMESHRENDERS_OFFSET UNITYSDK_OFFSET(0x1FAFE810)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RELOADMESHRENDERERCHANGE_OFFSET UNITYSDK_OFFSET(0x1FAFEFB0)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RELOADMESHRENDERERUNCHANGE_OFFSET UNITYSDK_OFFSET(0x1FAFEE80)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RELOADMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1FAFEBB0)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_REVERTATTRALTERS_OFFSET UNITYSDK_OFFSET(0x1FB02440)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_REVERTATTR_OFFSET UNITYSDK_OFFSET(0x1FAFFE70)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_REVERTSOURCEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1FAFE440)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_UPDATEADDEDMATERIALINFO_OFFSET UNITYSDK_OFFSET(0x1FB02680)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_UPDATEALTERS_OFFSET UNITYSDK_OFFSET(0x1FB01080)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_UPDATEMATERIALONINSPECTORGUI_OFFSET UNITYSDK_OFFSET(0x1FB00450)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB02B70)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAFE010)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialCompRecorderInfo_TypeDefinitionIndex = 32254;

	class MaterialCompRecorderInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_MultiMaterialKeyList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialCompRecorderInfo_TypeDefinitionIndex)->GetStaticField(0x28ED0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SkipShaderTypes()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialCompRecorderInfo_TypeDefinitionIndex)->GetStaticField(0x28ED8);
		}
		static ::System::Int32* StaticGet_layerIdColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaterialCompRecorderInfo_TypeDefinitionIndex)->GetStaticField(0x8280);
		}
		// static const ::System::Double deltaTime; // 0x0
		// static const ::System::String* MultiMaterialKey; // 0x0
		// static const ::System::String* MultiMaterialPattern; // 0x0
		::UnityEngine::Renderer* MeshRenderer; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* sourceMaterials; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Timeline::MaterialInfo*>* UpdateMeshRenderers; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* frameAttrs; // 0x28
		::System::Collections::Generic::List_1<::System::Double>* frameTimes; // 0x30

		::System::Void _ctor(::UnityEngine::Renderer* meshRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO__CTOR_OFFSET))(this, meshRenderer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_instanceMaterials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GET_INSTANCEMATERIALS_OFFSET))(this);
		}

		::System::Void RevertSourceMaterial(::System::Boolean clearMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_REVERTSOURCEMATERIAL_OFFSET))(this, clearMpb);
		}

		::System::Void ReloadMeshRenderer(::UnityEngine::Renderer* meshRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RELOADMESHRENDERER_OFFSET))(this, meshRenderer);
		}

		::System::Void ReloadMeshRendererUnChange(::UnityEngine::Renderer* meshRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RELOADMESHRENDERERUNCHANGE_OFFSET))(this, meshRenderer);
		}

		::System::Void ReloadMeshRendererChange(::UnityEngine::Renderer* meshRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RELOADMESHRENDERERCHANGE_OFFSET))(this, meshRenderer);
		}

		::System::Void RecordMeshRenders(::System::Boolean isInit, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RECORDMESHRENDERS_OFFSET))(this, isInit, material);
		}

		::System::Void RecoverMeshRenders(::System::Boolean isInit, ::System::Boolean clearMpb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RECOVERMESHRENDERS_OFFSET))(this, isInit, clearMpb);
		}

		::System::ValueTuple_3<::UnityEngine::Renderer*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*> FindPropertyAlters(::System::Double curTime, ::System::Int32 inspectorMaterialIndex, ::UnityEngine::Material* inspectorMaterial)
		{
			return ((::System::ValueTuple_3<::UnityEngine::Renderer*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>(*)(::PVOID, ::System::Double, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_FINDPROPERTYALTERS_OFFSET))(this, curTime, inspectorMaterialIndex, inspectorMaterial);
		}

		::System::Void ClearFrameAlters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_CLEARFRAMEALTERS_OFFSET))(this);
		}

		::System::Void RevertAttr(::System::Int32 materialIndex, ::System::String* attrName, ::UnityEngine::Timeline::KFrameFieldType fieldType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_REVERTATTR_OFFSET))(this, materialIndex, attrName, fieldType);
		}

		::System::Void RecoverFrame(::System::Double curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RECOVERFRAME_OFFSET))(this, curTime);
		}

		::System::Void UpdateMaterialOnInspectorGui(::System::Double curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_UPDATEMATERIALONINSPECTORGUI_OFFSET))(this, curTime);
		}

		::System::Void RecorderFrames(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* rendererFrames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RECORDERFRAMES_OFFSET))(this, rendererFrames);
		}

		static ::System::Boolean CheckMaterialIndexValid(::System::String* frameKey, ::System::Int32 materialIndex)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_CHECKMATERIALINDEXVALID_OFFSET))(frameKey, materialIndex);
		}

		static ::System::String* GetMultiMaterialPattern(::System::Int32 materialIndex)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GETMULTIMATERIALPATTERN_OFFSET))(materialIndex);
		}

		static ::System::Boolean CheckIsScreenMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_CHECKISSCREENMATERIAL_OFFSET))(material);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* GetKeyFrames(::System::Int32 materialIndex, ::System::Double curTime)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GETKEYFRAMES_OFFSET))(this, materialIndex, curTime);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* GetAttrAlters(::System::Double curTime, ::System::Int32 materialIndex)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GETATTRALTERS_OFFSET))(this, curTime, materialIndex);
		}

		::System::Void RevertAttrAlters(::System::Collections::Generic::List_1<::System::String*>* attrs, ::System::Double curTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_REVERTATTRALTERS_OFFSET))(this, attrs, curTime);
		}

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_endTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GET_ENDTIME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Double>* GetFrameTimes()
		{
			return ((::System::Collections::Generic::List_1<::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_GETFRAMETIMES_OFFSET))(this);
		}

		::System::Int32 RecorderMaterialLen()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_RECORDERMATERIALLEN_OFFSET))(this);
		}

		::System::Void UpdateAddedMaterialInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_UPDATEADDEDMATERIALINFO_OFFSET))(this);
		}

		::System::Void CheckAndUpdateMaterials(::UnityEngine::Renderer* meshRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_CHECKANDUPDATEMATERIALS_OFFSET))(this, meshRenderer);
		}

		::System::Void UpdateAlters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO_UPDATEALTERS_OFFSET))(this);
		}
	};
}
