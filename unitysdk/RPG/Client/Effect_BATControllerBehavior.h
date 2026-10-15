#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class Effect_BATControllerMonoPlugin; }

#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD1F250)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD1EB60)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD1F240)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCD1EF70)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD1EBC0)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD1EA10)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCD1EC80)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD1EB00)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCD1F1E0)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD1EC20)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD1EAA0)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCD1F1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_BATControllerBehavior_TypeDefinitionIndex = 70431;

	class Effect_BATControllerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Single _TickTime; // 0x38
		static ::System::Int32* StaticGet__NumberOfBones()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_BATControllerBehavior")->GetStaticField(0xBBD0);
		}

		static ::System::Int32* StaticGet__BoneIndicesWeightsTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_BATControllerBehavior")->GetStaticField(0xBBD4);
		}

		static ::System::Int32* StaticGet__AnimationTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_BATControllerBehavior")->GetStaticField(0xBBD8);
		}

		static ::System::Int32* StaticGet__FrameIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_BATControllerBehavior")->GetStaticField(0xBBDC);
		}

		static ::System::Int32* StaticGet__VertexCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_BATControllerBehavior")->GetStaticField(0xBBE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::RPG::Client::Effect_BATControllerMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_BATControllerMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
