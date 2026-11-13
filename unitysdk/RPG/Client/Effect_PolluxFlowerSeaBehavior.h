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

#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1899AA90)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_ANFFLAJPOMN_OFFSET UNITYSDK_OFFSET(0x1899B3A0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_BGOHMLNDAKH_OFFSET UNITYSDK_OFFSET(0x1899AEA0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1899D120)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1899AA20)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1899D110)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_DOPPCGIHJBF_OFFSET UNITYSDK_OFFSET(0x1899CD10)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x1899AE20)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GFJGFOAJBKJ_OFFSET UNITYSDK_OFFSET(0x1899C610)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GNPCHJBBDPH_OFFSET UNITYSDK_OFFSET(0x1899C850)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x1899ABD0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1899A820)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x1899AC90)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LDPDLKILLEL_OFFSET UNITYSDK_OFFSET(0x1899C960)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x1899A9C0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x1899C7F0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x1899AC30)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1899A960)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_OPOOJLBPINA_OFFSET UNITYSDK_OFFSET(0x1899CB50)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1899A880)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0x1899C7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex = 72511;

	class Effect_PolluxFlowerSeaBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Material* _MaterialInstance; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _WorldMatrixList; // 0x40
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x48
		::UnityEngine::Texture2D* _LifeTimeAnimation; // 0x50
		static ::System::String** StaticGet__KeywordInstancedFlowerSea()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0x41F40);
		}

		static ::System::Int32* StaticGet__PropCustomLightingSmoothness()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD370);
		}

		static ::System::Int32* StaticGet__PropWindNoiseFrequency()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD374);
		}

		static ::System::Int32* StaticGet__PropCustomDarkColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD378);
		}

		static ::System::Int32* StaticGet__PropCustomLightingDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD37C);
		}

		static ::System::Int32* StaticGet__PropLifeTimeAnimation()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD380);
		}

		static ::System::Int32* StaticGet__PropCustomLighting()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD384);
		}

		static ::System::Int32* StaticGet__PropDisappearFrame()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD388);
		}

		static ::System::Int32* StaticGet__PropLineGrowDebug()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD38C);
		}

		static ::System::Int32* StaticGet__PropLineGrowDistance()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD390);
		}

		static ::System::Int32* StaticGet__PropLineDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD394);
		}

		static ::System::Int32* StaticGet__PropLineSideLineSideFallOff()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD398);
		}

		static ::System::Int32* StaticGet__PropLineSideFallOffSmooth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD39C);
		}

		static ::System::Int32* StaticGet__PropWindNoiseIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD3A0);
		}

		static ::System::Int32* StaticGet__PropCustomBrightColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD3A4);
		}

		static ::System::Int32* StaticGet__PropLineSideFallOffDistance()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD3A8);
		}

		static ::System::Int32* StaticGet__PropCustomLightingOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD3AC);
		}

		static ::System::Int32* StaticGet__PropLineStartPositon()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD3B0);
		}

		static ::System::Int32* StaticGet__PropWindNoiseTile()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD3B4);
		}

		static ::System::Int32* StaticGet__AnimationTexResolution()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD3B8);
		}

		static ::System::Int32* StaticGet__PropLineGrowRandom()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD3BC);
		}

		static ::System::Int32* StaticGet__PropLineGrowSmooth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD3C0);
		}

		static ::System::Int32* StaticGet__PropWindDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_PolluxFlowerSeaBehavior")->GetStaticField(0xD3C4);
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
