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

#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xCD55820)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_ANFFLAJPOMN_OFFSET UNITYSDK_OFFSET(0xCD56130)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_BGOHMLNDAKH_OFFSET UNITYSDK_OFFSET(0xCD55C30)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD57F10)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xCD557B0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xCD57F00)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_DOPPCGIHJBF_OFFSET UNITYSDK_OFFSET(0xCD57AA0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCD55BB0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GFJGFOAJBKJ_OFFSET UNITYSDK_OFFSET(0xCD573A0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GNPCHJBBDPH_OFFSET UNITYSDK_OFFSET(0xCD575E0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xCD55960)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCD555B0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCD55A20)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LDPDLKILLEL_OFFSET UNITYSDK_OFFSET(0xCD576F0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xCD55750)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xCD57580)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xCD559C0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xCD556F0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OPOOJLBPINA_OFFSET UNITYSDK_OFFSET(0xCD578E0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xCD55610)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xCD57540)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex = 70536;

	class Effect_PolluxFlowerSeaBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Material* _MaterialInstance; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _WorldMatrixList; // 0x40
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x48
		::UnityEngine::Texture2D* _LifeTimeAnimation; // 0x50
		static ::System::String** StaticGet__KeywordInstancedFlowerSea()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0x33C60);
		}

		static ::System::Int32* StaticGet__PropWindNoiseFrequency()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA820);
		}

		static ::System::Int32* StaticGet__PropWindNoiseIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA824);
		}

		static ::System::Int32* StaticGet__PropLineGrowDebug()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA828);
		}

		static ::System::Int32* StaticGet__PropWindDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA82C);
		}

		static ::System::Int32* StaticGet__PropCustomLighting()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA830);
		}

		static ::System::Int32* StaticGet__PropLineGrowRandom()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA834);
		}

		static ::System::Int32* StaticGet__PropCustomBrightColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA838);
		}

		static ::System::Int32* StaticGet__PropLineDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA83C);
		}

		static ::System::Int32* StaticGet__PropLineStartPositon()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA840);
		}

		static ::System::Int32* StaticGet__PropLineSideFallOffDistance()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA844);
		}

		static ::System::Int32* StaticGet__PropCustomLightingOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA848);
		}

		static ::System::Int32* StaticGet__PropCustomLightingSmoothness()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA84C);
		}

		static ::System::Int32* StaticGet__PropWindNoiseTile()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA850);
		}

		static ::System::Int32* StaticGet__PropCustomDarkColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA854);
		}

		static ::System::Int32* StaticGet__PropLifeTimeAnimation()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA858);
		}

		static ::System::Int32* StaticGet__PropCustomLightingDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA85C);
		}

		static ::System::Int32* StaticGet__AnimationTexResolution()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA860);
		}

		static ::System::Int32* StaticGet__PropLineSideFallOffSmooth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA864);
		}

		static ::System::Int32* StaticGet__PropLineGrowSmooth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA868);
		}

		static ::System::Int32* StaticGet__PropLineGrowDistance()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA86C);
		}

		static ::System::Int32* StaticGet__PropDisappearFrame()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA870);
		}

		static ::System::Int32* StaticGet__PropLineSideLineSideFallOff()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xA874);
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
