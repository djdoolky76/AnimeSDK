#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AABB.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/SceneManagedLightComponent1.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumeType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Plane.h"
class MEIGMBOLDOF;
class MLLBMBEIAAB_CNLBPFJAGJO;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define LOCALAMBIENTVOLUME_AJEEDOFEJAK_OFFSET UNITYSDK_OFFSET(0xB832530)
#define LOCALAMBIENTVOLUME_AOEIMGHCNDN_OFFSET UNITYSDK_OFFSET(0xB833030)
#define LOCALAMBIENTVOLUME_CCTOR_OFFSET UNITYSDK_OFFSET(0xB834350)
#define LOCALAMBIENTVOLUME_CONTAINS_OFFSET UNITYSDK_OFFSET(0xB833E30)
#define LOCALAMBIENTVOLUME_CPGINJMLPOO_OFFSET UNITYSDK_OFFSET(0xB832920)
#define LOCALAMBIENTVOLUME_CTOR_OFFSET UNITYSDK_OFFSET(0xB8342A0)
#define LOCALAMBIENTVOLUME_CULL_OFFSET UNITYSDK_OFFSET(0xB833AF0)
#define LOCALAMBIENTVOLUME_DDJCFELJAFB_OFFSET UNITYSDK_OFFSET(0xB8336D0)
#define LOCALAMBIENTVOLUME_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xB834040)
#define LOCALAMBIENTVOLUME_GETDATA_OFFSET UNITYSDK_OFFSET(0xB833CF0)
#define LOCALAMBIENTVOLUME_GETID_OFFSET UNITYSDK_OFFSET(0xB833C80)
#define LOCALAMBIENTVOLUME_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xB832070)
#define LOCALAMBIENTVOLUME_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xB8320F0)
#define LOCALAMBIENTVOLUME_GET_ISINVERSE_OFFSET UNITYSDK_OFFSET(0xB833AD0)
#define LOCALAMBIENTVOLUME_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xB833AB0)
#define LOCALAMBIENTVOLUME_GET_VOLUMN_OFFSET UNITYSDK_OFFSET(0xB833AE0)
#define LOCALAMBIENTVOLUME_GPLLONMEDAC_OFFSET UNITYSDK_OFFSET(0xB832CD0)
#define LOCALAMBIENTVOLUME_HMJGKAMEFCG_OFFSET UNITYSDK_OFFSET(0xB832AB0)
#define LOCALAMBIENTVOLUME_KDAPEOIECAD_OFFSET UNITYSDK_OFFSET(0xB832F10)
#define LOCALAMBIENTVOLUME_LJDAKNBEGOG_OFFSET UNITYSDK_OFFSET(0xB833230)
#define LOCALAMBIENTVOLUME_OHHBNFDAHJN_OFFSET UNITYSDK_OFFSET(0xB833100)
#define LOCALAMBIENTVOLUME_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xB832410)
#define LOCALAMBIENTVOLUME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB832EC0)
#define LOCALAMBIENTVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB832B60)
#define LOCALAMBIENTVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB832A50)
#define LOCALAMBIENTVOLUME_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xB832460)
#define LOCALAMBIENTVOLUME_ONGETFROMPOOLASYNC_OFFSET UNITYSDK_OFFSET(0xB831F50)
#define LOCALAMBIENTVOLUME_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xB834130)
#define LOCALAMBIENTVOLUME_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xB8341B0)
#define LOCALAMBIENTVOLUME_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0xB831E50)
#define LOCALAMBIENTVOLUME_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0xB832030)
#define LOCALAMBIENTVOLUME_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0xB8320B0)
#define LOCALAMBIENTVOLUME_ONPREUNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xB831FE0)
#define LOCALAMBIENTVOLUME_ONPUTTOPOOL_OFFSET UNITYSDK_OFFSET(0xB831F10)
#define LOCALAMBIENTVOLUME_ONRELEASE_OFFSET UNITYSDK_OFFSET(0xB831FA0)
#define LOCALAMBIENTVOLUME_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xB832140)
#define LOCALAMBIENTVOLUME_ONUNSERIALIZEFINISH_OFFSET UNITYSDK_OFFSET(0xB831E10)
#define LOCALAMBIENTVOLUME_PDPFJHBEKNI_OFFSET UNITYSDK_OFFSET(0xB832C30)
#define LOCALAMBIENTVOLUME_RPG_CUSTOMRP_IAMBIENTVOLUMNE_CONTAINS_OFFSET UNITYSDK_OFFSET(0xB8343E0)
#define LOCALAMBIENTVOLUME_SETFORCELERP_OFFSET UNITYSDK_OFFSET(0xB832340)
#define LOCALAMBIENTVOLUME_SETHOSTMANAGEDLIGHT_OFFSET UNITYSDK_OFFSET(0xB831EC0)
#define LOCALAMBIENTVOLUME_SETTSCENABLED_OFFSET UNITYSDK_OFFSET(0xB833EE0)
#define LOCALAMBIENTVOLUME_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xB833AC0)
#define LOCALAMBIENTVOLUME_SPAWNED_OFFSET UNITYSDK_OFFSET(0xB833FC0)
#define LOCALAMBIENTVOLUME_START_OFFSET UNITYSDK_OFFSET(0xB8324B0)
#define LOCALAMBIENTVOLUME_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xB831B50)

inline static constexpr unsigned int LocalAmbientVolume_TypeDefinitionIndex = 47465;

	class LocalAmbientVolume : public ::ScenenLightManager::SceneManagedLightComponent1
	{
	public:
		::UnityEngine::Shader* VolumeShader; // 0x28
		::System::Int32 Priority; // 0x30
		::UnityEngine::Rendering::AmbientVolumeType Scope; // 0x34
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x38
		::System::Int32 LightQualityVersion; // 0x3C
		::System::Boolean UseLerp; // 0x40
		::System::Boolean LerpWithCustomCol2; // 0x41
		::System::Boolean LerpWithAlpha; // 0x42
		::System::Boolean UseInvert; // 0x43
		::System::Byte _padding0[0x4];
		::UnityEngine::Gradient* col1; // 0x48
		::UnityEngine::Gradient* col2; // 0x50
		::System::Single ColTransBias; // 0x58
		::System::Single ColTransSmoothness; // 0x5C
		::System::Single ColTransBias2; // 0x60
		::System::Single ColTransSmoothness2; // 0x64
		::UnityEngine::Vector4 TransDir; // 0x68
		::UnityEngine::Vector3 EdgeExtend; // 0x78
		::System::Single EdgeSmooth; // 0x84
		::System::String* CharacterLightAsset; // 0x88
		::System::Boolean UseCustomCharParam; // 0x90
		::System::Byte _padding1[0x3];
		::UnityEngine::Color LevelSkinLightColor; // 0x94
		::UnityEngine::Color LevelSkinShadowColor; // 0xA4
		::UnityEngine::Color LevelHighLightColor; // 0xB4
		::UnityEngine::Color LevelShadowColor; // 0xC4
		::System::Single LevelShadow; // 0xD4
		::System::Single LevelMid; // 0xD8
		::System::Single LevelHighLight; // 0xDC
		::System::Boolean _IsVisible_k__BackingField; // 0xE0
		::System::Byte _padding2[0x3];
		::System::Single PLFNHPFBNGM; // 0xE4
		::UnityEngine::Renderer* NPKIHFDCBKO; // 0xE8
		::UnityEngine::Material* PPPHAPMOPLF; // 0xF0
		::UnityEngine::Texture2D* NGHOICFGEIG; // 0xF8
		::UnityEngine::Texture2D* EFBEOOBGLKE; // 0x100
		::RPG::CustomRP::AABB BMKHMEDKICK; // 0x108
		::System::Boolean MELOJDPIGPD; // 0x120
		::System::Boolean GDOKPNCCJPN; // 0x121
		static ::UnityEngine::Material** StaticGet__LAV_Material()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("", "LocalAmbientVolume")->GetStaticField(0x41170);
		}

		static ::System::Int32* StaticGet__ES_LevelMid()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LocalAmbientVolume")->GetStaticField(0xF830);
		}

		static ::System::Int32* StaticGet__ES_LevelHighLightColor()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LocalAmbientVolume")->GetStaticField(0xF834);
		}

		static ::System::Int32* StaticGet__ES_LevelSkinLightColor()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LocalAmbientVolume")->GetStaticField(0xF838);
		}

		static ::System::Int32* StaticGet__ES_LevelShadowColor()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LocalAmbientVolume")->GetStaticField(0xF83C);
		}

		static ::System::Int32* StaticGet__ES_LevelSkinShadowColor()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LocalAmbientVolume")->GetStaticField(0xF840);
		}

		static ::System::Int32* StaticGet__ES_LevelShadow()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LocalAmbientVolume")->GetStaticField(0xF844);
		}

		static ::System::Int32* StaticGet__ES_LevelHighLight()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LocalAmbientVolume")->GetStaticField(0xF848);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_CCTOR_OFFSET))();
		}

		::System::Void UnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1, ::ScenenLightManager::BaseComponentExportData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
		}

		::System::Void OnUnserializeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONUNSERIALIZEFINISH_OFFSET))(this);
		}

		::System::Void OnObjectCreatedAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
		}

		::System::Void SetHostManagedLight(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_SETHOSTMANAGEDLIGHT_OFFSET))(this, a1);
		}

		::System::Void OnPutToPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONPUTTOPOOL_OFFSET))(this);
		}

		::System::Void OnGetFromPoolAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONGETFROMPOOLASYNC_OFFSET))(this, a1);
		}

		::System::Void OnRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONRELEASE_OFFSET))(this);
		}

		::System::Void OnPreUnserializeAsync(::MLLBMBEIAAB_CNLBPFJAGJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLLBMBEIAAB_CNLBPFJAGJO*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONPREUNSERIALIZEASYNC_OFFSET))(this, a1);
		}

		::System::Void OnObjectDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONOBJECTDESTROY_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GETQUALITYFILTER_OFFSET))(this);
		}

		::System::Void OnObjectEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONOBJECTENABLE_OFFSET))(this);
		}

		::System::Int32 GetTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GETTYPEID_OFFSET))(this);
		}

		::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
		}

		::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONDESTROY_OFFSET))(this);
		}

		::System::Void AJEEDOFEJAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_AJEEDOFEJAK_OFFSET))(this);
		}

		::System::Boolean KDAPEOIECAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_KDAPEOIECAD_OFFSET))(this);
		}

		::System::Boolean AOEIMGHCNDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_AOEIMGHCNDN_OFFSET))(this);
		}

		::System::Void HMJGKAMEFCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_HMJGKAMEFCG_OFFSET))(this);
		}

		::System::Void PDPFJHBEKNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_PDPFJHBEKNI_OFFSET))(this);
		}

		::System::Void OHHBNFDAHJN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_OHHBNFDAHJN_OFFSET))(this, a1);
		}

		::System::Void CPGINJMLPOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_CPGINJMLPOO_OFFSET))(this, a1);
		}

		::System::Void GPLLONMEDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GPLLONMEDAC_OFFSET))(this);
		}

		::System::Void DDJCFELJAFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_DDJCFELJAFB_OFFSET))(this);
		}

		::System::Void LJDAKNBEGOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_LJDAKNBEGOG_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_SET_ISVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInverse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GET_ISINVERSE_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_Volumn()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GET_VOLUMN_OFFSET))(this);
		}

		::System::Boolean Cull(::Il2CppArray<::UnityEngine::Plane>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_CULL_OFFSET))(this, a1);
		}

		::System::Int32 GetID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GETID_OFFSET))(this);
		}

		::System::Void GetData(::UnityEngine::Rendering::AmbientVolumneData a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_GETDATA_OFFSET))(this, a1);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void SetForceLerp(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_SETFORCELERP_OFFSET))(this, a1);
		}

		::System::Void SetTSCEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_SETTSCENABLED_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Boolean RPG_CustomRP_IAmbientVolumne_Contains(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_RPG_CUSTOMRP_IAMBIENTVOLUMNE_CONTAINS_OFFSET))(this, a1);
		}

	};
