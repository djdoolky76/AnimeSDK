#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client { class Effect_PolluxFlowerSeaMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xCD5E650)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_ANFFLAJPOMN_OFFSET UNITYSDK_OFFSET(0xCD5EF60)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_BGOHMLNDAKH_OFFSET UNITYSDK_OFFSET(0xCD5EA60)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD60D40)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD5E5E0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD60D30)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_DOPPCGIHJBF_OFFSET UNITYSDK_OFFSET(0xCD608D0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCD5E9E0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GFJGFOAJBKJ_OFFSET UNITYSDK_OFFSET(0xCD601D0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GNPCHJBBDPH_OFFSET UNITYSDK_OFFSET(0xCD60410)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD5E790)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD5E3E0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCD5E850)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LDPDLKILLEL_OFFSET UNITYSDK_OFFSET(0xCD60520)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD5E580)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCD603B0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD5E7F0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xCD5E520)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OPOOJLBPINA_OFFSET UNITYSDK_OFFSET(0xCD60710)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD5E440)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCD60370)

namespace RPG::Client
{
	class Effect_PolluxFlowerSeaBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Material* _MaterialInstance; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _WorldMatrixList; // 0x40
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x48
		::UnityEngine::Texture2D* _LifeTimeAnimation; // 0x50
		static ::System::String** StaticGet__KeywordInstancedFlowerSea()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0x3BFF0);
		}

		static ::System::Int32* StaticGet__PropCustomLightingDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCB0);
		}

		static ::System::Int32* StaticGet__PropLineSideFallOffSmooth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCB4);
		}

		static ::System::Int32* StaticGet__PropCustomLightingOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCB8);
		}

		static ::System::Int32* StaticGet__PropLineGrowRandom()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCBC);
		}

		static ::System::Int32* StaticGet__PropLineStartPositon()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCC0);
		}

		static ::System::Int32* StaticGet__PropWindNoiseIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCC4);
		}

		static ::System::Int32* StaticGet__PropCustomLightingSmoothness()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCC8);
		}

		static ::System::Int32* StaticGet__PropLineDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCCC);
		}

		static ::System::Int32* StaticGet__PropWindNoiseFrequency()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCD0);
		}

		static ::System::Int32* StaticGet__PropCustomBrightColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCD4);
		}

		static ::System::Int32* StaticGet__PropCustomDarkColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCD8);
		}

		static ::System::Int32* StaticGet__PropLineGrowDebug()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCDC);
		}

		static ::System::Int32* StaticGet__PropWindDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCE0);
		}

		static ::System::Int32* StaticGet__PropWindNoiseTile()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCE4);
		}

		static ::System::Int32* StaticGet__PropCustomLighting()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCE8);
		}

		static ::System::Int32* StaticGet__PropLineGrowDistance()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCEC);
		}

		static ::System::Int32* StaticGet__PropLineSideFallOffDistance()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCF0);
		}

		static ::System::Int32* StaticGet__PropLineGrowSmooth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCF4);
		}

		static ::System::Int32* StaticGet__PropLifeTimeAnimation()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCF8);
		}

		static ::System::Int32* StaticGet__PropDisappearFrame()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCCFC);
		}

		static ::System::Int32* StaticGet__AnimationTexResolution()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCD00);
		}

		static ::System::Int32* StaticGet__PropLineSideLineSideFallOff()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xCD04);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void ANFFLAJPOMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_ANFFLAJPOMN_OFFSET))(this);
		}

		::System::Void GFJGFOAJBKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GFJGFOAJBKJ_OFFSET))(this);
		}

		::System::Void GNPCHJBBDPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GNPCHJBBDPH_OFFSET))(this);
		}

		::System::Void OPOOJLBPINA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OPOOJLBPINA_OFFSET))(this);
		}

		::System::Void BGOHMLNDAKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_BGOHMLNDAKH_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void LDPDLKILLEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LDPDLKILLEL_OFFSET))(this);
		}

		::System::Void DOPPCGIHJBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_DOPPCGIHJBF_OFFSET))(this);
		}

		::RPG::Client::Effect_PolluxFlowerSeaMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_PolluxFlowerSeaMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
