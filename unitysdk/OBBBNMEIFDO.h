#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAKPIIOFPG.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace RPG::Client { class TalkEmotionPoseData; }
namespace System { class String; }

#define OBBBNMEIFDO_BMFCFNPMAJO_OFFSET UNITYSDK_OFFSET(0xBD2E120)
#define OBBBNMEIFDO_BOHHJKJAEME_OFFSET UNITYSDK_OFFSET(0xBD2DB90)
#define OBBBNMEIFDO_CKFLPOMHENN_OFFSET UNITYSDK_OFFSET(0xBD2F150)
#define OBBBNMEIFDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBD2DB40)
#define OBBBNMEIFDO_EBCNELBPEBC_OFFSET UNITYSDK_OFFSET(0xBD2DBE0)
#define OBBBNMEIFDO_EGPCAPFFNFO_OFFSET UNITYSDK_OFFSET(0xBD2F1C0)
#define OBBBNMEIFDO_EPCJGDNGEIG_OFFSET UNITYSDK_OFFSET(0xBD2E930)
#define OBBBNMEIFDO_GEHLPBNOHCJ_OFFSET UNITYSDK_OFFSET(0xBD2DF70)
#define OBBBNMEIFDO_GJGFMBLMGPG_OFFSET UNITYSDK_OFFSET(0xBD2F220)
#define OBBBNMEIFDO_HIACLJDECPK_OFFSET UNITYSDK_OFFSET(0xBD2EB20)
#define OBBBNMEIFDO_HLNEGNEEDJL_OFFSET UNITYSDK_OFFSET(0xBD2DDC0)
#define OBBBNMEIFDO_IFDPLJGMBOG_OFFSET UNITYSDK_OFFSET(0xBD2E9D0)
#define OBBBNMEIFDO_IGHFCPMKJHF_OFFSET UNITYSDK_OFFSET(0xBD2EBA0)
#define OBBBNMEIFDO_IOCAPCKICMN_OFFSET UNITYSDK_OFFSET(0xBD2ED40)
#define OBBBNMEIFDO_IPPFMEDEHIK_OFFSET UNITYSDK_OFFSET(0xBD2E7D0)
#define OBBBNMEIFDO_JCPCANHPDPL_OFFSET UNITYSDK_OFFSET(0xBD2E5B0)
#define OBBBNMEIFDO_KPJBFCIBABB_OFFSET UNITYSDK_OFFSET(0xBD2F4C0)
#define OBBBNMEIFDO_MDLHDCJJMBK_OFFSET UNITYSDK_OFFSET(0xBD2EDC0)
#define OBBBNMEIFDO_PEONLJFIHNF_OFFSET UNITYSDK_OFFSET(0xBD2DC70)

inline static constexpr unsigned int OBBBNMEIFDO_TypeDefinitionIndex = 71132;

	class OBBBNMEIFDO : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* JCMMMINANHC; // 0x10
		::HOAKPIIOFPG DBJCCKOJHBG; // 0x18
		::RPG::Client::MonoEmoPlayableGraph* CFKHNPGEAJA; // 0x30
		::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* KLKCGPCHOPL; // 0x38
		::UnityEngine::Playables::PlayableGraph ABGDLKJGIFH; // 0x40
		::UnityEngine::Animations::AnimationMixerPlayable JFOADFEHHMJ; // 0x50
		::System::Int32 BKAANCMCAAA; // 0x60
		::System::Single ELJHGJIMMDJ; // 0x64
		::RPGTools::Timeline::Emotion::EmoTrackType MAJCIFGMKCH; // 0x68
		::System::Single HDKKECHDBCN; // 0x6C
		::System::Boolean JKBHMODGKME; // 0x70
		::System::Void _ctor(::RPG::Client::MonoEmoPlayableGraph* a1, ::RPGTools::Timeline::Emotion::EmoTrackType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph*, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BOHHJKJAEME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_BOHHJKJAEME_OFFSET))(this);
		}

		::System::Void PEONLJFIHNF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_PEONLJFIHNF_OFFSET))(this, a1);
		}

		::System::Void HLNEGNEEDJL(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_HLNEGNEEDJL_OFFSET))(this, a1);
		}

		::System::Void GEHLPBNOHCJ(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::System::Single))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_GEHLPBNOHCJ_OFFSET))(this, a1, a2);
		}

		::System::Void EBCNELBPEBC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_EBCNELBPEBC_OFFSET))(this, a1);
		}

		::System::Void IFDPLJGMBOG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_IFDPLJGMBOG_OFFSET))(this, a1);
		}

		::System::Void EPCJGDNGEIG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_EPCJGDNGEIG_OFFSET))(this, a1);
		}

		::System::Void IPPFMEDEHIK(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_IPPFMEDEHIK_OFFSET))(this, a1, a2);
		}

		::System::Void IOCAPCKICMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_IOCAPCKICMN_OFFSET))(this);
		}

		::System::Void IGHFCPMKJHF(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_IGHFCPMKJHF_OFFSET))(this, a1, a2);
		}

		::System::Void BMFCFNPMAJO(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_BMFCFNPMAJO_OFFSET))(this, a1);
		}

		::System::Void HIACLJDECPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_HIACLJDECPK_OFFSET))(this);
		}

		::System::Void CKFLPOMHENN(::UnityEngine::Animations::AnimationMixerPlayable a1, ::UnityEngine::Playables::PlayableGraph a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationMixerPlayable, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_CKFLPOMHENN_OFFSET))(this, a1, a2);
		}

		::System::Int32 EGPCAPFFNFO(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_EGPCAPFFNFO_OFFSET))(this, a1);
		}

		::System::Void JCPCANHPDPL(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_JCPCANHPDPL_OFFSET))(this, a1);
		}

		::System::Void MDLHDCJJMBK(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_MDLHDCJJMBK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable GJGFMBLMGPG(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::RPGTools::Timeline::Emotion::EmoTrackType a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_GJGFMBLMGPG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable KPJBFCIBABB(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::RPGTools::Timeline::Emotion::EmoTrackType a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::RPGTools::Timeline::Emotion::EmoTrackType, ::System::Int32))((::PBYTE)hIl2Cpp + OBBBNMEIFDO_KPJBFCIBABB_OFFSET))(this, a1, a2, a3);
		}

	};
