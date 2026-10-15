#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Emotion/EmoPartType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/GJEKJAJDBFF.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
class CMIJJCMEOHI;
namespace RPG::Client { class MonoEmoPlayableGraph; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AvatarMask; }

#define OODAGDPHPJD_ACDGPABGIFE_OFFSET UNITYSDK_OFFSET(0xBF71140)
#define OODAGDPHPJD_APEMGFKKGLH_OFFSET UNITYSDK_OFFSET(0xBF71C10)
#define OODAGDPHPJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBF70650)
#define OODAGDPHPJD_IHEMOMLOIAO_OFFSET UNITYSDK_OFFSET(0xBF71410)
#define OODAGDPHPJD_IOJMFPEDAIP_OFFSET UNITYSDK_OFFSET(0xBF71500)
#define OODAGDPHPJD_KCDBAJEGGKB_OFFSET UNITYSDK_OFFSET(0xBF71AF0)
#define OODAGDPHPJD_KDCPINKDNFK_OFFSET UNITYSDK_OFFSET(0xBF71730)
#define OODAGDPHPJD_OFCFJCBHKNB_OFFSET UNITYSDK_OFFSET(0xBF719D0)

inline static constexpr unsigned int OODAGDPHPJD_TypeDefinitionIndex = 73565;

	class OODAGDPHPJD : public ::System::Object
	{
	public:
		::CMIJJCMEOHI* OMEBFEIFHDP; // 0x10
		::RPG::Client::MonoEmoPlayableGraph* IKJNGHGBJMF; // 0x18
		::CMIJJCMEOHI* NOJMBAFCOIM; // 0x20
		::CMIJJCMEOHI* KPOANKMDBBG; // 0x28
		::CMIJJCMEOHI* GCOKHMNKEDL; // 0x30
		::System::Boolean GPCEEDBJLIN; // 0x38
		::System::Boolean LCAIFIDLAGE; // 0x39
		::System::Byte _padding0[0x2];
		::RPG::Client::Emotion::EmoPartType OLANIKKEMHG; // 0x3C
		::UnityEngine::Animations::AnimationMixerPlayable DFFBFLPEKMC; // 0x40
		::UnityEngine::Animations::AnimationLayerMixerPlayable MDDFEPCEPKE; // 0x50
		::UnityEngine::Animations::AnimationClipPlayable GMAHPJNGHOK; // 0x60
		::UnityEngine::Animations::AnimationMixerPlayable PGBAENDHGDA; // 0x70
		::UnityEngine::Animations::AnimationClipPlayable BODFBDCLJCN; // 0x80
		::UnityEngine::Animations::AnimationMixerPlayable GIJGMGGJEHJ; // 0x90
		::UnityEngine::Animations::AnimationMixerPlayable OBNLCGIIDLI; // 0xA0
		static ::System::Int32* StaticGet_NBDNJGMLKIG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OODAGDPHPJD")->GetStaticField(0x141F0);
		}

		::System::Void _ctor(::UnityEngine::Playables::PlayableGraph a1, ::RPG::Client::Emotion::EmoPartType a2, ::RPG::Client::MonoEmoPlayableGraph* a3, ::UnityEngine::AvatarMask* a4, ::UnityEngine::AnimationClip* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::RPG::Client::Emotion::EmoPartType, ::RPG::Client::MonoEmoPlayableGraph*, ::UnityEngine::AvatarMask*, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + OODAGDPHPJD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ACDGPABGIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODAGDPHPJD_ACDGPABGIFE_OFFSET))(this);
		}

		::System::Void IHEMOMLOIAO(::UnityEngine::Playables::PlayableGraph a1, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a2, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*, ::System::Collections::Generic::List_1<::GJEKJAJDBFF>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OODAGDPHPJD_IHEMOMLOIAO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IOJMFPEDAIP(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::AnimationClip* a2, ::UnityEngine::AnimationClip* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OODAGDPHPJD_IOJMFPEDAIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KDCPINKDNFK(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OODAGDPHPJD_KDCPINKDNFK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OFCFJCBHKNB(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OODAGDPHPJD_OFCFJCBHKNB_OFFSET))(this, a1, a2);
		}

		::System::Void KCDBAJEGGKB(::UnityEngine::Playables::PlayableGraph a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OODAGDPHPJD_KCDBAJEGGKB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void APEMGFKKGLH(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + OODAGDPHPJD_APEMGFKKGLH_OFFSET))(this, a1, a2);
		}

	};
