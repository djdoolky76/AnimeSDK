#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CachedSubMeshCount.h"
#include "unitysdk/NapRendererFlags.h"
#include "unitysdk/NapRenderer_LegacyCastingPolicy.h"
#include "unitysdk/NapRenderer_PropertyMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class IPerObjectShadowMaterial;
class NapMaterial;
class NapRenderEntity;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Profiling { class CustomSampler; }

#define NAPRENDERER_BEGINOPERATEMATERIALPROPERTYIMPL_OFFSET UNITYSDK_OFFSET(0x1D439D30)
#define NAPRENDERER_BEGINOPERATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D4395B0)
#define NAPRENDERER_BEGINSETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D439F70)
#define NAPRENDERER_BEGINSETRENDERERPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D439F00)
#define NAPRENDERER_FINDNAPRENDERER_OFFSET UNITYSDK_OFFSET(0x1D4402F0)
#define NAPRENDERER_GETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1D43F0E0)
#define NAPRENDERER_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D43F060)
#define NAPRENDERER_GETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1D43E920)
#define NAPRENDERER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1D43E8D0)
#define NAPRENDERER_GETMATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1D43A050)
#define NAPRENDERER_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D4367A0)
#define NAPRENDERER_GETSHAREDMATERIALSCACHEDPERFRAME_OFFSET UNITYSDK_OFFSET(0x1D436530)
#define NAPRENDERER_GETTEXTUREOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1D43FC10)
#define NAPRENDERER_GETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1D43FBC0)
#define NAPRENDERER_GETTEXTURESCALE_1_OFFSET UNITYSDK_OFFSET(0x1D43F9C0)
#define NAPRENDERER_GETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1D43F970)
#define NAPRENDERER_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1D43F4B0)
#define NAPRENDERER_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D43F460)
#define NAPRENDERER_GETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1D43ECE0)
#define NAPRENDERER_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1D43EC60)
#define NAPRENDERER_GET_DISABLECASCADESHADOW_OFFSET UNITYSDK_OFFSET(0x1D436830)
#define NAPRENDERER_GET_DRAWPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1D436710)
#define NAPRENDERER_GET_ENCAPSULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D436730)
#define NAPRENDERER_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D4363C0)
#define NAPRENDERER_GET_ISLOD3_OFFSET UNITYSDK_OFFSET(0x1D436500)
#define NAPRENDERER_GET_ISSETTINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D436420)
#define NAPRENDERER_GET_ISSHADOWRENDERER_OFFSET UNITYSDK_OFFSET(0x1D4364C0)
#define NAPRENDERER_GET_ISSOURCERENDERER_OFFSET UNITYSDK_OFFSET(0x1D4364E0)
#define NAPRENDERER_GET_LEGACYPOSCASTINGENABLED_OFFSET UNITYSDK_OFFSET(0x1D4368C0)
#define NAPRENDERER_GET_LEGACYPOSDRAWFLAG_OFFSET UNITYSDK_OFFSET(0x1D4368A0)
#define NAPRENDERER_GET_LODGROUP_OFFSET UNITYSDK_OFFSET(0x1D436440)
#define NAPRENDERER_GET_LODINDEX_OFFSET UNITYSDK_OFFSET(0x1D436460)
#define NAPRENDERER_GET_LODPARTIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1D4364A0)
#define NAPRENDERER_GET_LODPARTINDEX_OFFSET UNITYSDK_OFFSET(0x1D436480)
#define NAPRENDERER_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1D436880)
#define NAPRENDERER_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1D436400)
#define NAPRENDERER_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1D4363E0)
#define NAPRENDERER_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1D436520)
#define NAPRENDERER_GET_SUPPORTPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1D436750)
#define NAPRENDERER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1D43FE70)
#define NAPRENDERER_INIT_OFFSET UNITYSDK_OFFSET(0x1D436A50)
#define NAPRENDERER_NOTIFYNATIVESETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D43A5E0)
#define NAPRENDERER_NOTIFYNATIVESETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1D43A770)
#define NAPRENDERER_NOTIFYNATIVESETFLOAT_OFFSET UNITYSDK_OFFSET(0x1D43A450)
#define NAPRENDERER_NOTIFYNATIVESETMATRIX_OFFSET UNITYSDK_OFFSET(0x1D43A560)
#define NAPRENDERER_NOTIFYNATIVESETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1D43A880)
#define NAPRENDERER_NOTIFYNATIVESETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1D43A800)
#define NAPRENDERER_NOTIFYNATIVESETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D43A660)
#define NAPRENDERER_NOTIFYNATIVESETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1D43A6E0)
#define NAPRENDERER_NOTIFYNATIVESETVECTOR_OFFSET UNITYSDK_OFFSET(0x1D43A4E0)
#define NAPRENDERER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D43FEC0)
#define NAPRENDERER_REPLACEINSTANCEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D440440)
#define NAPRENDERER_SAFESETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D43CC70)
#define NAPRENDERER_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1D43C510)
#define NAPRENDERER_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1D43C0C0)
#define NAPRENDERER_SETFLAG_OFFSET UNITYSDK_OFFSET(0x1D43FE10)
#define NAPRENDERER_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1D43B420)
#define NAPRENDERER_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1D43B0C0)
#define NAPRENDERER_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1D43AC30)
#define NAPRENDERER_SETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1D43BD20)
#define NAPRENDERER_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1D43B8B0)
#define NAPRENDERER_SETSHADOWPROXYPARTSID_OFFSET UNITYSDK_OFFSET(0x1D438C40)
#define NAPRENDERER_SETTEXTUREOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1D43DA60)
#define NAPRENDERER_SETTEXTUREOFFSET_OFFSET UNITYSDK_OFFSET(0x1D43D820)
#define NAPRENDERER_SETTEXTURESCALE_1_OFFSET UNITYSDK_OFFSET(0x1D43D5E0)
#define NAPRENDERER_SETTEXTURESCALE_OFFSET UNITYSDK_OFFSET(0x1D43D320)
#define NAPRENDERER_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1D43CE80)
#define NAPRENDERER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D43C840)
#define NAPRENDERER_SETVECTORARRAYRAW_OFFSET UNITYSDK_OFFSET(0x1D43E480)
#define NAPRENDERER_SETVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x1D43E030)
#define NAPRENDERER_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1D43DD20)
#define NAPRENDERER_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1D43A900)
#define NAPRENDERER_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1D438D00)
#define NAPRENDERER_SET_DRAWPEROBJECTSHADOW_OFFSET UNITYSDK_OFFSET(0x1D436720)
#define NAPRENDERER_SET_ENCAPSULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D436740)
#define NAPRENDERER_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D4363D0)
#define NAPRENDERER_SET_ISLOD3_OFFSET UNITYSDK_OFFSET(0x1D436510)
#define NAPRENDERER_SET_ISSETTINGPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D436430)
#define NAPRENDERER_SET_ISSHADOWRENDERER_OFFSET UNITYSDK_OFFSET(0x1D4364D0)
#define NAPRENDERER_SET_ISSOURCERENDERER_OFFSET UNITYSDK_OFFSET(0x1D4364F0)
#define NAPRENDERER_SET_LEGACYPOSDRAWFLAG_OFFSET UNITYSDK_OFFSET(0x1D4368B0)
#define NAPRENDERER_SET_LODGROUP_OFFSET UNITYSDK_OFFSET(0x1D436450)
#define NAPRENDERER_SET_LODINDEX_OFFSET UNITYSDK_OFFSET(0x1D436470)
#define NAPRENDERER_SET_LODPARTIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1D4364B0)
#define NAPRENDERER_SET_LODPARTINDEX_OFFSET UNITYSDK_OFFSET(0x1D436490)
#define NAPRENDERER_SET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1D436410)
#define NAPRENDERER_SET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1D4363F0)
#define NAPRENDERER_SHOULDUSENATIVERENDERER_OFFSET UNITYSDK_OFFSET(0x1D43A0D0)
#define NAPRENDERER_STOPOPERATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D439920)
#define NAPRENDERER_TRYGETNAPMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D439150)
#define NAPRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D440670)
#define NAPRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4405E0)

inline static constexpr unsigned int NapRenderer_TypeDefinitionIndex = 26707;

class NapRenderer : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::NapRenderer*>** StaticGet_napRendererMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::NapRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x24A20);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitMaterialArrayProperties()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x24A28);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_UpdateFlags()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x24A30);
	}
	static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_InitLodPartIndex()
	{
		return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(NapRenderer_TypeDefinitionIndex)->GetStaticField(0x24A38);
	}
	::NapRenderEntity* entity; // 0x10
	::UnityEngine::LODGroup* _LodGroup_k__BackingField; // 0x18
	::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x20
	::CachedSubMeshCount subMeshCountCache; // 0x28
	::System::Collections::Generic::List_1<::NapMaterial*>* napMaterials; // 0x50
	::UnityEngine::Renderer* _Renderer_k__BackingField; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* mpbs; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* sharedMaterialsPerFrame; // 0x68
	::NapRendererFlags flags; // 0x70
	::NapRenderer_PropertyMode propertyMode; // 0x74
	::System::Int32 indexOfBatchVisibilityQuery; // 0x78
	::System::Boolean _IsSourceRenderer_k__BackingField; // 0x7C
	::System::Boolean _LegacyPOSDrawFlag_k__BackingField; // 0x7D
	::System::Boolean _IsSettingProperties_k__BackingField; // 0x7E
	::System::Boolean _IsShadowRenderer_k__BackingField; // 0x7F
	::NapRenderer_LegacyCastingPolicy legacyPOSCastingPolicy; // 0x80
	::System::Int32 _LODPartIdOffset_k__BackingField; // 0x84
	::System::Int32 indexOfBatchAliveQuery; // 0x88
	::System::Int32 sharedMaterialsCachedFrameIndex; // 0x8C
	::System::Boolean _DrawPerObjectShadow_k__BackingField; // 0x90
	::System::Boolean _IsLod3_k__BackingField; // 0x91
	::System::Boolean drawPerObjectShadowOriginal; // 0x92
	::System::Boolean _EncapsulateBounds_k__BackingField; // 0x93
	::System::Int32 _LODPartIndex_k__BackingField; // 0x94
	::System::Int32 _LodIndex_k__BackingField; // 0x98
	::System::Byte _padding0[0x4];
	::System::IntPtr _NativeHandle_k__BackingField; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPRENDERER__CCTOR_OFFSET))();
	}

	::UnityEngine::GameObject* get_GameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_GAMEOBJECT_OFFSET))(this);
	}

	::System::Void set_GameObject(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_GAMEOBJECT_OFFSET))(this, value);
	}

	::UnityEngine::Renderer* get_Renderer()
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_RENDERER_OFFSET))(this);
	}

	::System::Void set_Renderer(::UnityEngine::Renderer* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_RENDERER_OFFSET))(this, value);
	}

	::System::IntPtr get_NativeHandle()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_NATIVEHANDLE_OFFSET))(this);
	}

	::System::Void set_NativeHandle(::System::IntPtr value)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_NATIVEHANDLE_OFFSET))(this, value);
	}

	::System::Boolean get_IsSettingProperties()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_ISSETTINGPROPERTIES_OFFSET))(this);
	}

	::System::Void set_IsSettingProperties(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_ISSETTINGPROPERTIES_OFFSET))(this, value);
	}

	::UnityEngine::LODGroup* get_LodGroup()
	{
		return ((::UnityEngine::LODGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_LODGROUP_OFFSET))(this);
	}

	::System::Void set_LodGroup(::UnityEngine::LODGroup* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LODGroup*))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_LODGROUP_OFFSET))(this, value);
	}

	::System::Int32 get_LodIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_LODINDEX_OFFSET))(this);
	}

	::System::Void set_LodIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_LODINDEX_OFFSET))(this, value);
	}

	::System::Int32 get_LODPartIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_LODPARTINDEX_OFFSET))(this);
	}

	::System::Void set_LODPartIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_LODPARTINDEX_OFFSET))(this, value);
	}

	::System::Int32 get_LODPartIdOffset()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_LODPARTIDOFFSET_OFFSET))(this);
	}

	::System::Void set_LODPartIdOffset(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_LODPARTIDOFFSET_OFFSET))(this, value);
	}

	::System::Boolean get_IsShadowRenderer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_ISSHADOWRENDERER_OFFSET))(this);
	}

	::System::Void set_IsShadowRenderer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_ISSHADOWRENDERER_OFFSET))(this, value);
	}

	::System::Boolean get_IsSourceRenderer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_ISSOURCERENDERER_OFFSET))(this);
	}

	::System::Void set_IsSourceRenderer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_ISSOURCERENDERER_OFFSET))(this, value);
	}

	::System::Boolean get_IsLod3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_ISLOD3_OFFSET))(this);
	}

	::System::Void set_IsLod3(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_ISLOD3_OFFSET))(this, value);
	}

	::System::Int32 get_SubMeshCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_SUBMESHCOUNT_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Material*>* GetSharedMaterialsCachedPerFrame()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GETSHAREDMATERIALSCACHEDPERFRAME_OFFSET))(this);
	}

	::System::Boolean get_DrawPerObjectShadow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_DRAWPEROBJECTSHADOW_OFFSET))(this);
	}

	::System::Void set_DrawPerObjectShadow(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_DRAWPEROBJECTSHADOW_OFFSET))(this, value);
	}

	::System::Boolean get_EncapsulateBounds()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_ENCAPSULATEBOUNDS_OFFSET))(this);
	}

	::System::Void set_EncapsulateBounds(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_ENCAPSULATEBOUNDS_OFFSET))(this, value);
	}

	::System::Boolean get_SupportPerObjectShadow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_SUPPORTPEROBJECTSHADOW_OFFSET))(this);
	}

	::IPerObjectShadowMaterial* GetMaterial(::System::Int32 index)
	{
		return ((::IPerObjectShadowMaterial*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETMATERIAL_OFFSET))(this, index);
	}

	::System::Boolean get_DisableCascadeShadow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_DISABLECASCADESHADOW_OFFSET))(this);
	}

	::System::Int32 get_MaterialCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_MATERIALCOUNT_OFFSET))(this);
	}

	::System::Boolean get_LegacyPOSDrawFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_LEGACYPOSDRAWFLAG_OFFSET))(this);
	}

	::System::Void set_LegacyPOSDrawFlag(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SET_LEGACYPOSDRAWFLAG_OFFSET))(this, value);
	}

	::System::Boolean get_LegacyPOSCastingEnabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GET_LEGACYPOSCASTINGENABLED_OFFSET))(this);
	}

	::System::Void Init(::NapRenderEntity* entity, ::UnityEngine::Renderer* renderer, ::System::Int32 materialIndexCount, ::System::Boolean forcePropertyMode, ::NapRenderer_PropertyMode propertyMode, ::UnityEngine::LODGroup* lodGroup, ::System::Int32 lodIndex, ::System::Boolean hasShadowProxy, ::System::Boolean isAccessory, ::System::Boolean hasSceneShadowProxy)
	{
		return ((::System::Void(*)(::PVOID, ::NapRenderEntity*, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean, ::NapRenderer_PropertyMode, ::UnityEngine::LODGroup*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_INIT_OFFSET))(this, entity, renderer, materialIndexCount, forcePropertyMode, propertyMode, lodGroup, lodIndex, hasShadowProxy, isAccessory, hasSceneShadowProxy);
	}

	::System::Void SetShadowProxyPartsID(::NapRenderer* napRenderer, ::UnityEngine::Vector4 shadowPartsID)
	{
		return ((::System::Void(*)(::PVOID, ::NapRenderer*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + NAPRENDERER_SETSHADOWPROXYPARTSID_OFFSET))(this, napRenderer, shadowPartsID);
	}

	::System::Boolean TryGetNapMaterial(::System::Int32 index, ::NapMaterial*& napMaterial)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NapMaterial*&))((::PBYTE)hIl2Cpp + NAPRENDERER_TRYGETNAPMATERIAL_OFFSET))(this, index, napMaterial);
	}

	::System::Boolean BeginOperateProperty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_BEGINOPERATEPROPERTY_OFFSET))(this);
	}

	::System::Void StopOperateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_STOPOPERATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean BeginOperateMaterialPropertyImpl(::System::Boolean& scopeCreated)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + NAPRENDERER_BEGINOPERATEMATERIALPROPERTYIMPL_OFFSET))(this, scopeCreated);
	}

	::System::Boolean BeginSetRendererProperty(::System::Boolean& scopeCreated)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + NAPRENDERER_BEGINSETRENDERERPROPERTY_OFFSET))(this, scopeCreated);
	}

	::System::Boolean BeginSetMaterialProperty(::System::Boolean& scopeCreated, ::System::Int32 index)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_BEGINSETMATERIALPROPERTY_OFFSET))(this, scopeCreated, index);
	}

	::System::Int32 GetMaterialCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_GETMATERIALCOUNT_OFFSET))(this);
	}

	::System::Boolean ShouldUseNativeRenderer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_SHOULDUSENATIVERENDERER_OFFSET))(this);
	}

	::System::Void NotifyNativeSetFloat(::System::Int32 propertyID, ::System::Single value, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETFLOAT_OFFSET))(this, propertyID, value, materialIndex);
	}

	::System::Void NotifyNativeSetVector(::System::Int32 propertyID, ::UnityEngine::Vector4& value, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETVECTOR_OFFSET))(this, propertyID, value, materialIndex);
	}

	::System::Void NotifyNativeSetMatrix(::System::Int32 propertyID, ::UnityEngine::Matrix4x4& value, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETMATRIX_OFFSET))(this, propertyID, value, materialIndex);
	}

	::System::Void NotifyNativeSetColor(::System::Int32 propertyID, ::UnityEngine::Color& value, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETCOLOR_OFFSET))(this, propertyID, value, materialIndex);
	}

	::System::Void NotifyNativeSetTexture(::System::Int32 propertyID, ::UnityEngine::Texture* texture, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETTEXTURE_OFFSET))(this, propertyID, texture, materialIndex);
	}

	::System::Void NotifyNativeSetVectorArray(::System::Int32 propertyID, ::Il2CppArray<::UnityEngine::Vector4>* values, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETVECTORARRAY_OFFSET))(this, propertyID, values, materialIndex);
	}

	::System::Void NotifyNativeSetFloatArray(::System::Int32 propertyID, ::Il2CppArray<::System::Single>* values, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETFLOATARRAY_OFFSET))(this, propertyID, values, materialIndex);
	}

	::System::Void NotifyNativeSetTextureScale(::System::Int32 propertyID, ::UnityEngine::Vector2& scale, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETTEXTURESCALE_OFFSET))(this, propertyID, scale, materialIndex);
	}

	::System::Void NotifyNativeSetTextureOffset(::System::Int32 propertyID, ::UnityEngine::Vector2& offset, ::System::Int32 materialIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_NOTIFYNATIVESETTEXTUREOFFSET_OFFSET))(this, propertyID, offset, materialIndex);
	}

	::System::Void SetVector(::System::Int32 propertyID, ::UnityEngine::Vector4 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + NAPRENDERER_SETVECTOR_OFFSET))(this, propertyID, value);
	}

	::System::Void SetVector_1(::System::Int32 propertyID, ::UnityEngine::Vector4 value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETVECTOR_1_OFFSET))(this, propertyID, value, index);
	}

	::System::Void SetFloat(::System::Int32 propertyID, ::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NAPRENDERER_SETFLOAT_OFFSET))(this, propertyID, value);
	}

	::System::Void SetFloat_1(::System::Int32 propertyID, ::System::Single value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETFLOAT_1_OFFSET))(this, propertyID, value, index);
	}

	::System::Void SetFloatArray(::System::Int32 propertyID, ::Il2CppArray<::System::Single>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + NAPRENDERER_SETFLOATARRAY_OFFSET))(this, propertyID, value);
	}

	::System::Void SetMatrix(::System::Int32 propertyID, ::UnityEngine::Matrix4x4 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + NAPRENDERER_SETMATRIX_OFFSET))(this, propertyID, value);
	}

	::System::Void SetMatrix_1(::System::Int32 propertyID, ::UnityEngine::Matrix4x4 value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETMATRIX_1_OFFSET))(this, propertyID, value, index);
	}

	::System::Void SetColor(::System::Int32 propertyID, ::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + NAPRENDERER_SETCOLOR_OFFSET))(this, propertyID, value);
	}

	::System::Void SetColor_1(::System::Int32 propertyID, ::UnityEngine::Color value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETCOLOR_1_OFFSET))(this, propertyID, value, index);
	}

	::System::Void SetTexture(::System::Int32 propertyID, ::UnityEngine::Texture* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTURE_OFFSET))(this, propertyID, value);
	}

	::System::Void SetTexture_1(::System::Int32 propertyID, ::UnityEngine::Texture* value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTURE_1_OFFSET))(this, propertyID, value, index);
	}

	::System::Void SafeSetTexture(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 propertyID, ::UnityEngine::Texture* texture)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + NAPRENDERER_SAFESETTEXTURE_OFFSET))(this, mpb, propertyID, texture);
	}

	::System::Void SetTextureScale(::System::Int32 propertyID, ::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTURESCALE_OFFSET))(this, propertyID, value);
	}

	::System::Void SetTextureScale_1(::System::Int32 propertyID, ::UnityEngine::Vector2 value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTURESCALE_1_OFFSET))(this, propertyID, value, index);
	}

	::System::Void SetTextureOffset(::System::Int32 propertyID, ::UnityEngine::Vector2 value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTUREOFFSET_OFFSET))(this, propertyID, value, index);
	}

	::System::Void SetTextureOffset_1(::System::Int32 propertyID, ::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NAPRENDERER_SETTEXTUREOFFSET_1_OFFSET))(this, propertyID, value);
	}

	::System::Void SetVectorArray(::System::Int32 propertyID, ::Il2CppArray<::UnityEngine::Vector4>* value, ::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_SETVECTORARRAY_OFFSET))(this, propertyID, value, index);
	}

	::System::Void SetVectorArray_1(::System::Int32 propertyID, ::Il2CppArray<::UnityEngine::Vector4>* value, ::System::Boolean forceSetMaterialProperty)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SETVECTORARRAY_1_OFFSET))(this, propertyID, value, forceSetMaterialProperty);
	}

	::System::Void SetVectorArrayRaw(::System::Int32 propertyID, ::Il2CppArray<::UnityEngine::Vector4>* value, ::System::Boolean forceSetMaterialProperty)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SETVECTORARRAYRAW_OFFSET))(this, propertyID, value, forceSetMaterialProperty);
	}

	::System::Single GetFloat(::System::Int32 propertyID)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETFLOAT_OFFSET))(this, propertyID);
	}

	::System::Single GetFloat_1(::System::Int32 propertyID, ::System::Int32 index)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETFLOAT_1_OFFSET))(this, propertyID, index);
	}

	::UnityEngine::Vector4 GetVector(::System::Int32 propertyID)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETVECTOR_OFFSET))(this, propertyID);
	}

	::UnityEngine::Vector4 GetVector_1(::System::Int32 propertyID, ::System::Int32 index)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETVECTOR_1_OFFSET))(this, propertyID, index);
	}

	::UnityEngine::Color GetColor(::System::Int32 propertyID)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETCOLOR_OFFSET))(this, propertyID);
	}

	::UnityEngine::Color GetColor_1(::System::Int32 propertyID, ::System::Int32 index)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETCOLOR_1_OFFSET))(this, propertyID, index);
	}

	::UnityEngine::Texture* GetTexture(::System::Int32 propertyID)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTURE_OFFSET))(this, propertyID);
	}

	::UnityEngine::Texture* GetTexture_1(::System::Int32 propertyID, ::System::Int32 index)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTURE_1_OFFSET))(this, propertyID, index);
	}

	::UnityEngine::Vector2 GetTextureScale(::System::Int32 propertyID)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTURESCALE_OFFSET))(this, propertyID);
	}

	::UnityEngine::Vector2 GetTextureScale_1(::System::Int32 propertyID, ::System::Int32 index)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTURESCALE_1_OFFSET))(this, propertyID, index);
	}

	::UnityEngine::Vector2 GetTextureOffset(::System::Int32 propertyID)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTUREOFFSET_OFFSET))(this, propertyID);
	}

	::UnityEngine::Vector2 GetTextureOffset_1(::System::Int32 propertyID, ::System::Int32 index)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPRENDERER_GETTEXTUREOFFSET_1_OFFSET))(this, propertyID, index);
	}

	::System::Void SetFlag(::NapRendererFlags flag, ::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::NapRendererFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPRENDERER_SETFLAG_OFFSET))(this, flag, value);
	}

	::System::Boolean HasFlag(::NapRendererFlags value)
	{
		return ((::System::Boolean(*)(::PVOID, ::NapRendererFlags))((::PBYTE)hIl2Cpp + NAPRENDERER_HASFLAG_OFFSET))(this, value);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPRENDERER_RELEASE_OFFSET))(this);
	}

	static ::System::Boolean FindNapRenderer(::UnityEngine::Renderer* renderer, ::NapRenderer*& napRenderer)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::NapRenderer*&))((::PBYTE)hIl2Cpp + NAPRENDERER_FINDNAPRENDERER_OFFSET))(renderer, napRenderer);
	}

	::System::Void ReplaceInstancedMaterial(::Il2CppArray<::UnityEngine::Material*>* insMats)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + NAPRENDERER_REPLACEINSTANCEDMATERIAL_OFFSET))(this, insMats);
	}
};
