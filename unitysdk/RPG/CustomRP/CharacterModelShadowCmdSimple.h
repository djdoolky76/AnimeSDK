#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
class ICmdExecuteCb;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1E1450)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E1380)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A1E0190)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A1E0180)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_INITLOWQUALITYSHADOW_OFFSET UNITYSDK_OFFSET(0x1A1DFE10)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_INIT_OFFSET UNITYSDK_OFFSET(0x1A1DF9B0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A1E0110)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A1DFCB0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A1DFBF0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A1DFB60)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_SETMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A1DF9C0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_START_OFFSET UNITYSDK_OFFSET(0x1A1DF990)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__DRAWSINGLECHARACTERRENDERERS_OFFSET UNITYSDK_OFFSET(0x1A1E01A0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__GETMATERIALSYNCEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A1E0980)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CharacterModelShadowCmdSimple_TypeDefinitionIndex = 38534;

	class CharacterModelShadowCmdSimple : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Shader* ModelShadowShader; // 0x18
		::UnityEngine::Color ModelShadowColorSingle; // 0x20
		::System::Single SingleCharacterShadowOpacity; // 0x30
		::System::Single ShadowGround; // 0x34
		::Il2CppArray<::UnityEngine::Vector4>* SingelCharacterShadowDirLowQuality; // 0x38
		::UnityEngine::GameObject* RendererRoot; // 0x40
		::Il2CppArray<::UnityEngine::Renderer*>* SingleCharacterRenderers; // 0x48
		::UnityEngine::GameObject* LastRendererRoot; // 0x50
		::System::Boolean _IsInited; // 0x58
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::Material*>* ShadowMats; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* _materialInstances; // 0x68
		static ::ICmdExecuteCb** StaticGet_current()
		{
			return (::ICmdExecuteCb**)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x229B0);
		}

		static ::System::Int32* StaticGet__DissolveMapShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DA0);
		}

		static ::System::Int32* StaticGet__ShadowDirAttenShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DA4);
		}

		static ::System::Int32* StaticGet__OpacityShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DA8);
		}

		static ::System::Int32* StaticGet__DissolveMapAddShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DAC);
		}

		static ::System::Int32* StaticGet__ShadowAttenScaleShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DB0);
		}

		static ::System::Int32* StaticGet__ShadowGroundShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DB4);
		}

		static ::System::Int32* StaticGet__DitherAlpha()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DB8);
		}

		static ::System::Int32* StaticGet__DissolveDistortionIntensityShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DBC);
		}

		static ::System::Int32* StaticGet__DissolveUVSpeedShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DC0);
		}

		static ::System::Int32* StaticGet__DissolveRateShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DC4);
		}

		static ::System::Int32* StaticGet__DissolveOnShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DC8);
		}

		static ::System::Int32* StaticGet__ModelShadowColorShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DCC);
		}

		static ::System::Int32* StaticGet__DissolveSTShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DD0);
		}

		static ::System::Int32* StaticGet__DistortionSTShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DD4);
		}

		static ::System::Int32* StaticGet__ShadowAttenStartPosShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DD8);
		}

		static ::System::Int32* StaticGet__DissolveUVShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DDC);
		}

		static ::System::Int32* StaticGet__UseDitherAlpha()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "CharacterModelShadowCmdSimple")->GetStaticField(0x7DE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_INIT_OFFSET))(this);
		}

		::System::Void InitLowQualityShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_INITLOWQUALITYSHADOW_OFFSET))(this);
		}

		::System::Void SetMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_SETMATERIALPROPERTIES_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_LATEUPDATE_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void _DrawSingleCharacterRenderers(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__DRAWSINGLECHARACTERRENDERERS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* _GetMaterialSyncedProperties(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__GETMATERIALSYNCEDPROPERTIES_OFFSET))(this, a1, a2, a3);
		}

	};
}
