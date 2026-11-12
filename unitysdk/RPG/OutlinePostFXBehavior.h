#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG { class OutlinePostFXBehavior_GICJGOPKKEK; }
namespace RPG { class OutlinePostFXBehavior_KNEPAJDLOAF; }
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0xF343FA0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xF343D30)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xF343F80)
#define RPG_OUTLINEPOSTFXBEHAVIOR_EAHHOGMDPDK_OFFSET UNITYSDK_OFFSET(0xF343DA0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xF343170)
#define RPG_OUTLINEPOSTFXBEHAVIOR_HCNNPOEJPMM_OFFSET UNITYSDK_OFFSET(0xF343A90)
#define RPG_OUTLINEPOSTFXBEHAVIOR_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xF343E50)
#define RPG_OUTLINEPOSTFXBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF342D70)
#define RPG_OUTLINEPOSTFXBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xF343750)
#define RPG_OUTLINEPOSTFXBEHAVIOR_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xF343EB0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xF3431F0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xF343F10)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_TypeDefinitionIndex = 52801;

	class OutlinePostFXBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Int32 _RTWidth; // 0x38
		::System::Int32 _RTHeight; // 0x3C
		::UnityEngine::RenderTexture* _blurredRT; // 0x40
		::UnityEngine::RenderTexture* _glowBlurRT; // 0x48
		static ::RPG::OutlinePostFXBehavior_KNEPAJDLOAF** StaticGet__outlineCmdCb()
		{
			return (::RPG::OutlinePostFXBehavior_KNEPAJDLOAF**)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x73A40);
		}

		static ::RPG::OutlinePostFXBehavior_GICJGOPKKEK** StaticGet__outlineFinalCmdCb()
		{
			return (::RPG::OutlinePostFXBehavior_GICJGOPKKEK**)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x73A48);
		}

		static ::System::Int32* StaticGet__OutlineColorID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x16380);
		}

		static ::System::Int32* StaticGet__GlowSelfTexID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x16384);
		}

		static ::System::Int32* StaticGet__DepthTestBiasID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x16388);
		}

		static ::System::Int32* StaticGet__GlowColorID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x1638C);
		}

		static ::System::Int32* StaticGet__GlowRangeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x16390);
		}

		static ::System::Int32* StaticGet__GlowQuarterID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x16394);
		}

		static ::System::Int32* StaticGet__StitchModeID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x16398);
		}

		static ::System::Int32* StaticGet__GlowEighthID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x1639C);
		}

		static ::System::Int32* StaticGet__HideNPCPartsID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x163A0);
		}

		static ::System::Int32* StaticGet__BlurDirectionID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x163A4);
		}

		static ::System::Int32* StaticGet__OutlineOccludedAlphaID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x163A8);
		}

		static ::System::Int32* StaticGet__ObjectIdID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x163AC);
		}

		static ::System::Int32* StaticGet__OutlineMaskRTID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x163B0);
		}

		static ::System::Int32* StaticGet__ShowPartID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x163B4);
		}

		static ::System::Int32* StaticGet__GlowIntensityID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x163B8);
		}

		static ::System::Int32* StaticGet__DepthRTID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x163BC);
		}

		static ::System::Int32* StaticGet__EnableDepthTestID()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG", "OutlinePostFXBehavior")->GetStaticField(0x163C0);
		}

		// static const ::System::Object GlowSilhouettePass; // 0x0
		// static const ::System::Object GlowBlurPass; // 0x0
		// static const ::System::Object GlowCompositePass; // 0x0
		// static const ::System::Object OccluderCarvePass; // 0x0
		// static const ::System::Object OccluderMaskPass; // 0x0
		// static const ::System::Object UIMaskPass; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void HCNNPOEJPMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_HCNNPOEJPMM_OFFSET))(this);
		}

		static ::System::Void EAHHOGMDPDK(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_EAHHOGMDPDK_OFFSET))(a1);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::OutlinePostFXMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::OutlinePostFXMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
