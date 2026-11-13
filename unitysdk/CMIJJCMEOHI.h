#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMIJJCMEOHI_MixerType.h"
#include "unitysdk/GJEKJAJDBFF.h"
#include "unitysdk/RPG/Client/Emotion/EmoPartType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define CMIJJCMEOHI_AJLNNMCKOPL_OFFSET UNITYSDK_OFFSET(0x1B19CCC0)
#define CMIJJCMEOHI_BFEMCFKCHMD_OFFSET UNITYSDK_OFFSET(0x1B19B140)
#define CMIJJCMEOHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B19CD50)
#define CMIJJCMEOHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B19AA60)
#define CMIJJCMEOHI_DMAHGFKGNGD_OFFSET UNITYSDK_OFFSET(0x1B19B4A0)
#define CMIJJCMEOHI_GBNIOLJIKBG_OFFSET UNITYSDK_OFFSET(0x1B19B890)
#define CMIJJCMEOHI_GCFAGIFJLAA_OFFSET UNITYSDK_OFFSET(0x1B19B920)
#define CMIJJCMEOHI_HFDMIMALJBH_OFFSET UNITYSDK_OFFSET(0x1B19B300)
#define CMIJJCMEOHI_IHEMOMLOIAO_OFFSET UNITYSDK_OFFSET(0x1B19B640)
#define CMIJJCMEOHI_ILCBDGFEMEE_OFFSET UNITYSDK_OFFSET(0x1B19C040)
#define CMIJJCMEOHI_INCMBJCKNGG_OFFSET UNITYSDK_OFFSET(0x1B19CBA0)
#define CMIJJCMEOHI_JFFHBMHEKNI_OFFSET UNITYSDK_OFFSET(0x1B19BA90)
#define CMIJJCMEOHI_JJCIHLOLMKP_OFFSET UNITYSDK_OFFSET(0x1B19BD70)
#define CMIJJCMEOHI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B19AAF0)
#define CMIJJCMEOHI_MCFMILKJLGD_OFFSET UNITYSDK_OFFSET(0x1B19AC30)
#define CMIJJCMEOHI_MGBDGKMIPDN_OFFSET UNITYSDK_OFFSET(0x1B19BCF0)
#define CMIJJCMEOHI_MPNNIEOKOHH_OFFSET UNITYSDK_OFFSET(0x1B19C310)
#define CMIJJCMEOHI_NNLPFFAPDJN_OFFSET UNITYSDK_OFFSET(0x1B19C6D0)
#define CMIJJCMEOHI_OAEFNAJLDAM_OFFSET UNITYSDK_OFFSET(0x1B19C9C0)
#define CMIJJCMEOHI_OGOJLDNJDMO_OFFSET UNITYSDK_OFFSET(0x1B19AEB0)
#define CMIJJCMEOHI_PDJIIBGANDO_OFFSET UNITYSDK_OFFSET(0x1B19BC50)

inline static constexpr unsigned int CMIJJCMEOHI_TypeDefinitionIndex = 75688;

	class CMIJJCMEOHI : public ::System::Object
	{
	public:
		::RPG::Client::MonoEmoPlayableGraph* KDMNKFICNOH; // 0x10
		::UnityEngine::AnimationClip* CHBIDCFBJOC; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Animations::AnimationClipPlayable>* NLKCHEGFHHF; // 0x20
		::System::Collections::Generic::List_1<::GJEKJAJDBFF>* GKPJMHACCKK; // 0x28
		::CMIJJCMEOHI_MixerType DGIJOJOBDDM; // 0x30
		::System::Int32 FFNBLDFFMCN; // 0x34
		::UnityEngine::Animations::AnimationLayerMixerPlayable MFMDJPBAPND; // 0x38
		::UnityEngine::Animations::AnimationClipPlayable DEKKMFEMHKM; // 0x48
		::UnityEngine::Animations::AnimationMixerPlayable AHMMFGBELPA; // 0x58
		::System::Boolean CPABHJIMMHC; // 0x68
		::System::Byte _padding0[0x3];
		::RPG::Client::Emotion::EmoPartType NODMDJIPJJG; // 0x6C
		static ::System::Int32* StaticGet_NBDNJGMLKIG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CMIJJCMEOHI")->GetStaticField(0xB320);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animations::AnimationMixerPlayable a2, ::RPG::Client::Emotion::EmoPartType a3, ::RPG::Client::MonoEmoPlayableGraph* a4, ::System::Boolean a5, ::UnityEngine::AnimationClip* a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::AnimationMixerPlayable, ::RPG::Client::Emotion::EmoPartType, ::RPG::Client::MonoEmoPlayableGraph*, ::System::Boolean, ::UnityEngine::AnimationClip*, ::System::Int32))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void BFEMCFKCHMD(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animations::AnimationMixerPlayable a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::AnimationMixerPlayable, ::System::Boolean))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_BFEMCFKCHMD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IHEMOMLOIAO(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animations::AnimationMixerPlayable a2, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::AnimationMixerPlayable, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_IHEMOMLOIAO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JFFHBMHEKNI(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animations::AnimationMixerPlayable a2, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a3, ::CMIJJCMEOHI_MixerType a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::AnimationMixerPlayable, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*, ::CMIJJCMEOHI_MixerType))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_JFFHBMHEKNI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PDJIIBGANDO(::UnityEngine::Playables::PlayableGraph a1, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_PDJIIBGANDO_OFFSET))(this, a1, a2);
		}

		::System::Void MGBDGKMIPDN(::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_MGBDGKMIPDN_OFFSET))(this, a1);
		}

		::System::Void HFDMIMALJBH(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_HFDMIMALJBH_OFFSET))(this, a1);
		}

		::System::Void MCFMILKJLGD(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animations::AnimationMixerPlayable a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::AnimationMixerPlayable))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_MCFMILKJLGD_OFFSET))(this, a1, a2);
		}

		::System::Void JJCIHLOLMKP(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animations::AnimationMixerPlayable a2, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::AnimationMixerPlayable, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*, ::System::Single))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_JJCIHLOLMKP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MPNNIEOKOHH(::UnityEngine::Playables::PlayableGraph a1, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_MPNNIEOKOHH_OFFSET))(this, a1, a2);
		}

		::System::Void OAEFNAJLDAM(::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_OAEFNAJLDAM_OFFSET))(this, a1);
		}

		::System::Void DMAHGFKGNGD(::UnityEngine::Playables::PlayableGraph a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_DMAHGFKGNGD_OFFSET))(this, a1);
		}

		::System::Void OGOJLDNJDMO(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animations::AnimationMixerPlayable a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::AnimationMixerPlayable))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_OGOJLDNJDMO_OFFSET))(this, a1, a2);
		}

		::System::Void ILCBDGFEMEE(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Animations::AnimationMixerPlayable a2, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::AnimationMixerPlayable, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*, ::System::Single))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_ILCBDGFEMEE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NNLPFFAPDJN(::UnityEngine::Playables::PlayableGraph a1, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_NNLPFFAPDJN_OFFSET))(this, a1, a2);
		}

		::System::Void INCMBJCKNGG(::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_INCMBJCKNGG_OFFSET))(this, a1);
		}

		::CMIJJCMEOHI_MixerType GBNIOLJIKBG(::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a1)
		{
			return ((::CMIJJCMEOHI_MixerType(*)(::PVOID, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_GBNIOLJIKBG_OFFSET))(this, a1);
		}

		::System::Void GCFAGIFJLAA(::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a1, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_GCFAGIFJLAA_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::AnimationClip* AJLNNMCKOPL(::System::String* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CMIJJCMEOHI_AJLNNMCKOPL_OFFSET))(this, a1);
		}

	};
