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

#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0x1B811360)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_BJNPMGKHDEO_OFFSET UNITYSDK_OFFSET(0x1CB4E1D0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB4E840)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CDGPLNADJLD_OFFSET UNITYSDK_OFFSET(0x1CB4B250)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1B813720)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB4E830)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x1B813760)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_FNEOGHHJDJL_1_OFFSET UNITYSDK_OFFSET(0x1CB4D730)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_FNEOGHHJDJL_OFFSET UNITYSDK_OFFSET(0x1CB4A730)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x1CB4A6B0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_HMONCLEJKJK_OFFSET UNITYSDK_OFFSET(0x1CB4C180)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_IINKHPOJOGP_OFFSET UNITYSDK_OFFSET(0x1B8119A0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_JHNCMJJMGKK_OFFSET UNITYSDK_OFFSET(0x1B812DA0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x1B813640)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_KAGEIMIHJHP_OFFSET UNITYSDK_OFFSET(0x1CB4C3F0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B811290)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_LDFIOGPLGDM_OFFSET UNITYSDK_OFFSET(0x1CB4A360)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1B8135F0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MILJKPAJLNJ_OFFSET UNITYSDK_OFFSET(0x1CB4E2E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_MJIMJDMKNNA_OFFSET UNITYSDK_OFFSET(0x1CB4A880)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_NHPIHFLFANE_OFFSET UNITYSDK_OFFSET(0x1CB4DA80)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_NLFLJGONCHE_OFFSET UNITYSDK_OFFSET(0x1CB4ACD0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OCIHINMJMBE_1_OFFSET UNITYSDK_OFFSET(0x1CB4C750)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OCIHINMJMBE_OFFSET UNITYSDK_OFFSET(0x1CB4C6C0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x1B8136C0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1B811300)

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
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x279F0);
		}

		static ::System::Int32* StaticGet__DialogDepthOffsetShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x8290);
		}

		static ::System::Int32* StaticGet__DialogClipMaskThresholdShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x8294);
		}

		static ::System::Int32* StaticGet__DialogClipMaskShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x8298);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixInvVShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x829C);
		}

		static ::System::Int32* StaticGet__DialogDitherAlphaShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x82A0);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixVShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x82A4);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixVPShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x82A8);
		}

		static ::System::Int32* StaticGet__DialogDitherShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x82AC);
		}

		static ::System::Int32* StaticGet__DialogCullShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x82B0);
		}

		static ::System::Int32* StaticGet__DialogCameraMatrixPShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x82B4);
		}

		static ::System::Int32* StaticGet__DialogClipRectShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x82B8);
		}

		static ::System::Int32* StaticGet__DialogClipMaskTexShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x82BC);
		}

		static ::System::Int32* StaticGet__DialogCameraPositionWSShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x82C0);
		}

		static ::System::Int32* StaticGet__DialogMatrixMShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "DialogRendererBehavior")->GetStaticField(0x82C4);
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
