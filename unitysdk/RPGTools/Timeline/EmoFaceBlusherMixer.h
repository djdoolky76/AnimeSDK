#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Color.h"
namespace RPGTools::Timeline { class BlusherData; }
namespace System { class Object; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_CCTOR_OFFSET UNITYSDK_OFFSET(0xF3BD510)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_CTOR_OFFSET UNITYSDK_OFFSET(0xF3BD500)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_EANCFJOBEED_OFFSET UNITYSDK_OFFSET(0xF3BCF70)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_GEENGCEGMAP_OFFSET UNITYSDK_OFFSET(0xF3BCE70)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_NMPBLGMCAFD_OFFSET UNITYSDK_OFFSET(0xF3BD480)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xF3BC660)
#define RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xF3BC6E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EmoFaceBlusherMixer_TypeDefinitionIndex = 49148;

	class EmoFaceBlusherMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* Renderer; // 0x10
		::RPGTools::Timeline::BlusherData* OriginData; // 0x18
		::System::Boolean FirstFrame; // 0x20
		static ::System::Int32* StaticGet_ShadowColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "EmoFaceBlusherMixer")->GetStaticField(0x164A0);
		}

		static ::System::Int32* StaticGet_ShyColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "EmoFaceBlusherMixer")->GetStaticField(0x164A4);
		}

		static ::System::Int32* StaticGet_ShyIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "EmoFaceBlusherMixer")->GetStaticField(0x164A8);
		}

		static ::System::Int32* StaticGet_CheekIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "EmoFaceBlusherMixer")->GetStaticField(0x164AC);
		}

		static ::System::Int32* StaticGet_ShadowIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "EmoFaceBlusherMixer")->GetStaticField(0x164B0);
		}

		static ::System::Int32* StaticGet_SpecularIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "EmoFaceBlusherMixer")->GetStaticField(0x164B4);
		}

		static ::System::Int32* StaticGet_MapThreshold()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "EmoFaceBlusherMixer")->GetStaticField(0x164B8);
		}

		static ::System::Int32* StaticGet_CheekColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "EmoFaceBlusherMixer")->GetStaticField(0x164BC);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_CCTOR_OFFSET))();
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Color NMPBLGMCAFD(::UnityEngine::Color a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_NMPBLGMCAFD_OFFSET))(a1, a2);
		}

		::System::Void EANCFJOBEED(::RPGTools::Timeline::BlusherData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BlusherData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_EANCFJOBEED_OFFSET))(this, a1);
		}

		::System::Int32 GEENGCEGMAP(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOFACEBLUSHERMIXER_GEENGCEGMAP_OFFSET))(this, a1);
		}

	};
}
