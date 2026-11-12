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

#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0xD5743F0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_BJNPMGKHDEO_OFFSET UNITYSDK_OFFSET(0xD5742E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xD57AA40)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CDGPLNADJLD_OFFSET UNITYSDK_OFFSET(0xD577FB0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD5768C0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD57AA30)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD576900)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_FNEOGHHJDJL_1_OFFSET UNITYSDK_OFFSET(0xD57A190)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_FNEOGHHJDJL_OFFSET UNITYSDK_OFFSET(0xD577A10)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xD576960)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_HMONCLEJKJK_OFFSET UNITYSDK_OFFSET(0xD5771C0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_IINKHPOJOGP_OFFSET UNITYSDK_OFFSET(0xD574970)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_JHNCMJJMGKK_OFFSET UNITYSDK_OFFSET(0xD575C30)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xD5767E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_KAGEIMIHJHP_OFFSET UNITYSDK_OFFSET(0xD578EE0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD574210)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_LDFIOGPLGDM_OFFSET UNITYSDK_OFFSET(0xD576490)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD576440)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MILJKPAJLNJ_OFFSET UNITYSDK_OFFSET(0xD57A4E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MJIMJDMKNNA_OFFSET UNITYSDK_OFFSET(0xD577B60)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_NHPIHFLFANE_OFFSET UNITYSDK_OFFSET(0xD5769E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_NLFLJGONCHE_OFFSET UNITYSDK_OFFSET(0xD577490)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OCIHINMJMBE_1_OFFSET UNITYSDK_OFFSET(0xD5791B0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OCIHINMJMBE_OFFSET UNITYSDK_OFFSET(0xD577130)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xD576860)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xD574280)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogRendererBehavior_TypeDefinitionIndex = 72248;

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
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x24E40);
		}

		static ::System::Int32* StaticGet__DialogDitherAlphaShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7070);
		}

		static ::System::Int32* StaticGet__DialogCameraPositionWSShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7074);
		}

		static ::System::Int32* StaticGet__DialogClipRectShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7078);
		}

		static ::System::Int32* StaticGet__DialogCullShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x707C);
		}

		static ::System::Int32* StaticGet__DialogDitherShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7080);
		}

		static ::System::Int32* StaticGet__DialogDepthOffsetShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7084);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixPShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7088);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixVShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x708C);
		}

		static ::System::Int32* StaticGet__DialogClipMaskShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7090);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixVPShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7094);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixInvVShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x7098);
		}

		static ::System::Int32* StaticGet__DialogClipMaskThresholdShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x709C);
		}

		static ::System::Int32* StaticGet__DialogMatrixMShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x70A0);
		}

		static ::System::Int32* StaticGet__DialogClipMaskTexShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x70A4);
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
