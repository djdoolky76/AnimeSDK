#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
class CNMEOLEHOOF;
namespace RPG::Client { class DialogRenderer; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0xCBFC970)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_BJNPMGKHDEO_OFFSET UNITYSDK_OFFSET(0xCBFC860)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC02FC0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CDGPLNADJLD_OFFSET UNITYSDK_OFFSET(0xCC00530)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCBFEE40)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCC02FB0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xCBFEE80)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_FNEOGHHJDJL_1_OFFSET UNITYSDK_OFFSET(0xCC02710)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_FNEOGHHJDJL_OFFSET UNITYSDK_OFFSET(0xCBFFF90)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCBFEEE0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_HMONCLEJKJK_OFFSET UNITYSDK_OFFSET(0xCBFF740)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_IINKHPOJOGP_OFFSET UNITYSDK_OFFSET(0xCBFCEF0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_JHNCMJJMGKK_OFFSET UNITYSDK_OFFSET(0xCBFE1B0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCBFED60)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_KAGEIMIHJHP_OFFSET UNITYSDK_OFFSET(0xCC01460)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCBFC790)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_LDFIOGPLGDM_OFFSET UNITYSDK_OFFSET(0xCBFEA10)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCBFE9C0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MILJKPAJLNJ_OFFSET UNITYSDK_OFFSET(0xCC02A60)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MJIMJDMKNNA_OFFSET UNITYSDK_OFFSET(0xCC000E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_NHPIHFLFANE_OFFSET UNITYSDK_OFFSET(0xCBFEF60)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_NLFLJGONCHE_OFFSET UNITYSDK_OFFSET(0xCBFFA10)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OCIHINMJMBE_1_OFFSET UNITYSDK_OFFSET(0xCC01730)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OCIHINMJMBE_OFFSET UNITYSDK_OFFSET(0xCBFF6B0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCBFEDE0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCBFC800)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogRendererBehavior_TypeDefinitionIndex = 70282;

	class DialogRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Transform* _OwnerTransform; // 0x38
		::UnityEngine::Transform* _DialogCameraTransform; // 0x40
		::UnityEngine::Camera* _MainCamera; // 0x48
		::UnityEngine::Transform* _MainCameraTransform; // 0x50
		::Il2CppArray<::UnityEngine::Renderer*>* _DialogTargetRenderers; // 0x58
		::Il2CppArray<::CNMEOLEHOOF*>* _DialogTargetRenderables; // 0x60
		::UnityEngine::Bounds _DialogTargetBounds; // 0x68
		::System::Boolean _NeedUpdateRenderer; // 0x80
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__DialogShaders()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x21600);
		}

		static ::System::Int32* StaticGet__DialogClipRectShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7900);
		}

		static ::System::Int32* StaticGet__DialogDepthOffsetShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7904);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixVPShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7908);
		}

		static ::System::Int32* StaticGet__DialogClipMaskShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x790C);
		}

		static ::System::Int32* StaticGet__DialogMatrixMShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7910);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixVShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7914);
		}

		static ::System::Int32* StaticGet__DialogDitherAlphaShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7918);
		}

		static ::System::Int32* StaticGet__DialogClipMaskThresholdShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x791C);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixInvVShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7920);
		}

		static ::System::Int32* StaticGet__DialogCameraPositionWSShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7924);
		}

		static ::System::Int32* StaticGet__DialogCullShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7928);
		}

		static ::System::Int32* StaticGet__DialogDitherShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x792C);
		}

		static ::System::Int32* StaticGet__DialogClipMaskTexShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7930);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixPShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7934);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void APIDHHKLGEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_APIDHHKLGEJ_OFFSET))(this);
		}

		::System::Void IINKHPOJOGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_IINKHPOJOGP_OFFSET))(this);
		}

		::System::Void JHNCMJJMGKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_JHNCMJJMGKK_OFFSET))(this);
		}

		::System::Void LDFIOGPLGDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_LDFIOGPLGDM_OFFSET))(this);
		}

		::System::Void NLFLJGONCHE(::CNMEOLEHOOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNMEOLEHOOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_NLFLJGONCHE_OFFSET))(this, a1);
		}

		::System::Void MJIMJDMKNNA(::CNMEOLEHOOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNMEOLEHOOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MJIMJDMKNNA_OFFSET))(this, a1);
		}

		::System::Void OCIHINMJMBE(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OCIHINMJMBE_OFFSET))(this, a1);
		}

		::System::Void OCIHINMJMBE_1(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OCIHINMJMBE_1_OFFSET))(this, a1, a2);
		}

		::System::Void CDGPLNADJLD(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CDGPLNADJLD_OFFSET))(this, a1);
		}

		::System::Void FNEOGHHJDJL(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_FNEOGHHJDJL_OFFSET))(this, a1);
		}

		::System::Void FNEOGHHJDJL_1(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_FNEOGHHJDJL_1_OFFSET))(this, a1, a2);
		}

		::System::Void KAGEIMIHJHP(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_KAGEIMIHJHP_OFFSET))(this, a1);
		}

		::System::Void HMONCLEJKJK(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_HMONCLEJKJK_OFFSET))(this, a1);
		}

		::System::Void NHPIHFLFANE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_NHPIHFLFANE_OFFSET))(this);
		}

		::System::Void BJNPMGKHDEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_BJNPMGKHDEO_OFFSET))(this);
		}

		::RPG::Client::DialogRenderer* get__Owner()
		{
			return ((::RPG::Client::DialogRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		static ::System::Void MILJKPAJLNJ(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MILJKPAJLNJ_OFFSET))(a1, a2);
		}

	};
}
