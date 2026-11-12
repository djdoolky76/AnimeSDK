#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPLightType.h"
#include "unitysdk/RPG/CustomRP/ClipPlaneType.h"
#include "unitysdk/RPG/CustomRP/CustomAdditionalLightData_AreaLightDelegateShapeType.h"
#include "unitysdk/RPG/CustomRP/CustomAdditionalLightData_CustomLightFlag.h"
#include "unitysdk/RPG/CustomRP/CustomAdditionalLightData_LocalLightParam.h"
#include "unitysdk/RPG/CustomRP/CustomAdditionalLightData_LocalLightParamExt.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/CustomRP/FlagMask.h"
#include "unitysdk/RPG/CustomRP/LightDataFlag.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoArea.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoCommon.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoLocal.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightInfoSpot.h"
#include "unitysdk/UnityEngine/Rendering/CRPLightMeshStencil.h"
#include "unitysdk/UnityEngine/CRPRectShadowSerialize.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Light_EParticleLightEvent.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::CustomRP { class CRPLightClipPlane; }
namespace RPG::CustomRP { class CRPLocalLightVolume; }
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace RPG::CustomRP { class StencilDelegate; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCA1A0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC9FD0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_FLUSHDATA_OFFSET UNITYSDK_OFFSET(0x1DDC8CE0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GETLIGHTDELEGATEMESH_OFFSET UNITYSDK_OFFSET(0x1DDC93E0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GETPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x1DDC9400)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GET_LIGHTCOMP_OFFSET UNITYSDK_OFFSET(0x1DDC8B10)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GET_NEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1DDC8AF0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GET_TRAN_OFFSET UNITYSDK_OFFSET(0x1DDC8B40)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GET_USEPIPELINESETTINGS_OFFSET UNITYSDK_OFFSET(0x1DDC8B20)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1DDC8B00)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_MANUALCREATE_OFFSET UNITYSDK_OFFSET(0x1DDC8C00)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DDC9510)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DDC9470)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DDC9410)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_ONRETURN2POOL_OFFSET UNITYSDK_OFFSET(0x1DDC9260)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DDC8B50)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_PARTICLELIGHTONLOAD_OFFSET UNITYSDK_OFFSET(0x1DDC9270)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_RESETLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1DDC9150)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_SETFLAG_OFFSET UNITYSDK_OFFSET(0x1DDC8CC0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_SET_USEPIPELINESETTINGS_OFFSET UNITYSDK_OFFSET(0x1DDC8B30)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_START_OFFSET UNITYSDK_OFFSET(0x1DDC8C60)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_SUPPORTSCLUSTERLIGHTING_OFFSET UNITYSDK_OFFSET(0x1DDC93F0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__FLUSHDATA_OFFSET UNITYSDK_OFFSET(0x1DDC8CF0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__ISPOINTSPOT_OFFSET UNITYSDK_OFFSET(0x1DDC95B0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__PREPARE_OFFSET UNITYSDK_OFFSET(0x1DDC9190)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1DDC8BB0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATELIGHTDATAAREA_OFFSET UNITYSDK_OFFSET(0x1DDC9F60)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATELIGHTDATALOCAL_OFFSET UNITYSDK_OFFSET(0x1DDC9C80)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATELIGHTDATASPOT_OFFSET UNITYSDK_OFFSET(0x1DDC9BE0)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATELIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1DDC9600)
#define RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATELIGHTMESHSTENCIL_OFFSET UNITYSDK_OFFSET(0x1DDC99F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomAdditionalLightData_TypeDefinitionIndex = 38637;

	class CustomAdditionalLightData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single CharIntensity; // 0x18
		::UnityEngine::Color CharColor; // 0x1C
		::System::Byte _padding0[0x4];
		::RPG::CustomRP::CRPLocalLightVolume* LocalLightVolume; // 0x30
		::RPG::CustomRP::CRPLightType InternalLightType; // 0x38
		::System::Boolean isV2Light; // 0x3C
		::System::Boolean createFromPool; // 0x3D
		::System::Boolean legecyFalloff; // 0x3E
		::System::Byte _padding1[0x1];
		::System::Single falloffExp; // 0x40
		::System::Boolean useDirectionalAttenuation; // 0x44
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector2 DirectionalBS; // 0x48
		::UnityEngine::Vector2 CharacterLightFix; // 0x50
		::UnityEngine::Vector2 SceneLightFix; // 0x58
		::System::Single RoughnessAdjMin; // 0x60
		::System::Single RoughnessAdjMax; // 0x64
		::System::Single CharacterAffectRatio; // 0x68
		::System::Boolean CastVolumetricShadow; // 0x6C
		::System::Boolean EnableVolumetricScattering; // 0x6D
		::System::Byte _padding3[0x2];
		::System::Single FogScatteringIntensity; // 0x70
		::System::Single LimitRotRange; // 0x74
		::RPG::CustomRP::CustomAdditionalLightData_LocalLightParam OverlayColor; // 0x78
		::RPG::CustomRP::CustomAdditionalLightData_LocalLightParam AddColor; // 0x98
		::RPG::CustomRP::CustomAdditionalLightData_LocalLightParamExt DarkColor; // 0xB8
		::System::Single BlendRange; // 0xE8
		::System::Byte _padding4[0x4];
		::UnityEngine::AnimationCurve* distanceFadeCurve; // 0xF0
		::RPG::CustomRP::ClipPlaneType clipPlaneType; // 0xF8
		::System::Byte _padding5[0x4];
		::RPG::CustomRP::CRPLightClipPlane* ClipPlanes; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::CRPRectShadowSerialize>* geometryShadows; // 0x108
		::System::Single sourceRadius; // 0x110
		::System::Single softSourceRadius; // 0x114
		::RPG::CustomRP::CustomAdditionalLightData_CustomLightFlag customLightFlag; // 0x118
		::RPG::CustomRP::CustomLightQualityFilter customLightQualityFilter; // 0x11C
		::System::Boolean useQulityV2; // 0x120
		::System::Byte _padding6[0x3];
		::System::Single RangeCut; // 0x124
		::System::Boolean ColorCookie; // 0x128
		::System::Byte _padding7[0x3];
		::System::Single SpotLightScale; // 0x12C
		::System::Single CookieAtten; // 0x130
		::System::Single CookieHeight; // 0x134
		::System::Collections::Generic::List_1<::RPG::CustomRP::StencilDelegate*>* StencilDelegates; // 0x138
		::RPG::CustomRP::CustomAdditionalLightData_AreaLightDelegateShapeType AreaLightDelegateShape; // 0x140
		::UnityEngine::Vector3 BoxDelegateSize; // 0x144
		::UnityEngine::Vector3 BoxDelegateOffset; // 0x150
		::System::Single shadowLightingFactor; // 0x15C
		::System::Boolean irradianceCacheForceFineLevel; // 0x160
		::System::Byte _padding8[0x3];
		::RPG::CustomRP::FlagMask flag; // 0x164
		::System::Boolean _UsePipelineSettings; // 0x168
		::System::Byte _padding9[0x7];
		::UnityEngine::Light* _Light; // 0x170
		::UnityEngine::Transform* _Trans; // 0x178
		::System::Boolean _IsPSLight; // 0x180
		static ::UnityEngine::Rendering::CRPLightInfoArea* StaticGet__LightInfoArea()
		{
			return (::UnityEngine::Rendering::CRPLightInfoArea*)UnitySDK::FromName("RPG.CustomRP", "CustomAdditionalLightData")->GetStaticField(0x7E50);
		}

		static ::UnityEngine::Rendering::CRPLightInfoSpot* StaticGet__LightInfoSpot()
		{
			return (::UnityEngine::Rendering::CRPLightInfoSpot*)UnitySDK::FromName("RPG.CustomRP", "CustomAdditionalLightData")->GetStaticField(0x7E6C);
		}

		static ::System::Single* StaticGet_maxSpotDelegateAngle()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.CustomRP", "CustomAdditionalLightData")->GetStaticField(0x7E74);
		}

		static ::UnityEngine::Rendering::CRPLightInfoCommon* StaticGet__LightInfo()
		{
			return (::UnityEngine::Rendering::CRPLightInfoCommon*)UnitySDK::FromName("RPG.CustomRP", "CustomAdditionalLightData")->GetStaticField(0x7E78);
		}

		static ::UnityEngine::Rendering::CRPLightInfoLocal* StaticGet__LightInfoLocal()
		{
			return (::UnityEngine::Rendering::CRPLightInfoLocal*)UnitySDK::FromName("RPG.CustomRP", "CustomAdditionalLightData")->GetStaticField(0x7EEC);
		}

		static ::UnityEngine::Rendering::CRPLightMeshStencil* StaticGet__MeshStencil()
		{
			return (::UnityEngine::Rendering::CRPLightMeshStencil*)UnitySDK::FromName("RPG.CustomRP", "CustomAdditionalLightData")->GetStaticField(0x8094);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_CCTOR_OFFSET))();
		}

		::System::Boolean get_NeedUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GET_NEEDUPDATE_OFFSET))(this);
		}

		::UnityEngine::Light* get_LightComp()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GET_LIGHTCOMP_OFFSET))(this);
		}

		::System::Boolean get_UsePipelineSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GET_USEPIPELINESETTINGS_OFFSET))(this);
		}

		::System::Void set_UsePipelineSettings(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_SET_USEPIPELINESETTINGS_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Tran()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GET_TRAN_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void ManualCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_MANUALCREATE_OFFSET))(this);
		}

		::System::Boolean HasFlag(::RPG::CustomRP::LightDataFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::LightDataFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_HASFLAG_OFFSET))(this, a1);
		}

		::System::Void SetFlag(::RPG::CustomRP::LightDataFlag a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::LightDataFlag, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_SETFLAG_OFFSET))(this, a1, a2);
		}

		::System::Void FlushData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_FLUSHDATA_OFFSET))(this);
		}

		::System::Void ResetLightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_RESETLIGHTDATA_OFFSET))(this);
		}

		::System::Void OnReturn2Pool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_ONRETURN2POOL_OFFSET))(this);
		}

		static ::System::Void ParticleLightOnLoad(::UnityEngine::Light* a1, ::UnityEngine::Light_EParticleLightEvent a2)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Light_EParticleLightEvent))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_PARTICLELIGHTONLOAD_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Mesh* GetLightDelegateMesh(::UnityEngine::Light* a1, ::RPG::CustomRP::CustomAdditionalLightData* a2)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Light*, ::RPG::CustomRP::CustomAdditionalLightData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GETLIGHTDELEGATEMESH_OFFSET))(a1, a2);
		}

		::System::Boolean SupportsClusterLighting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_SUPPORTSCLUSTERLIGHTING_OFFSET))(this);
		}

		::System::Int32 GetProfileType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_GETPROFILETYPE_OFFSET))(this);
		}

		::System::Void _Prepare(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__PREPARE_OFFSET))(this, a1);
		}

		::System::Void _UpdateIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATEIFNEEDED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean _IsPointSpot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__ISPOINTSPOT_OFFSET))(this);
		}

		::System::Void _UpdateLightData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATELIGHTDATA_OFFSET))(this);
		}

		::System::Void _UpdateLightMeshStencil()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATELIGHTMESHSTENCIL_OFFSET))(this);
		}

		::System::Void _UpdateLightDataSpot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATELIGHTDATASPOT_OFFSET))(this);
		}

		::System::Void _UpdateLightDataLocal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATELIGHTDATALOCAL_OFFSET))(this);
		}

		::System::Void _UpdateLightDataArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__UPDATELIGHTDATAAREA_OFFSET))(this);
		}

		::System::Void _FlushData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CUSTOMADDITIONALLIGHTDATA__FLUSHDATA_OFFSET))(this);
		}

	};
}
