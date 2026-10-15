#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEmoPlayableGraph_BlinkState.h"
#include "unitysdk/RPG/Client/MonoEmoPlayableGraph_EyeState.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoTrackType.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationPlayableOutput.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class BKLJMPGNFNB;
class DOJMJBBPFMP;
class OBBBNMEIFDO;
namespace RPG::Client { class EmoEyeCtrl; }
namespace RPG::Client { class TalkEmotionData; }
namespace RPG::Client { class TalkEmotionPoseData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_AENANLFEHJM_OFFSET UNITYSDK_OFFSET(0xD822DF0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_AUTOBLINKWITHEYESTATE_OFFSET UNITYSDK_OFFSET(0xD81E870)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_BFBGELDBPDI_OFFSET UNITYSDK_OFFSET(0xD820510)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_BIEFAGFIDGN_OFFSET UNITYSDK_OFFSET(0xD820640)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_BKLBJHFMJCH_OFFSET UNITYSDK_OFFSET(0xD820840)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_BMONBEPOPKC_1_OFFSET UNITYSDK_OFFSET(0xD822B00)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_BMONBEPOPKC_OFFSET UNITYSDK_OFFSET(0xD822900)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CANBLINK_OFFSET UNITYSDK_OFFSET(0xD81EBA0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CBBMCMCBGDO_OFFSET UNITYSDK_OFFSET(0xD8208C0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CCTOR_OFFSET UNITYSDK_OFFSET(0xD823690)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CHCJOCNOOCI_OFFSET UNITYSDK_OFFSET(0xD81EC00)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CLLOKOJDEIE_OFFSET UNITYSDK_OFFSET(0xD8230B0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0xD823650)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_DESTROY_OFFSET UNITYSDK_OFFSET(0xD81E230)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_DFMHLMGMPNH_OFFSET UNITYSDK_OFFSET(0xD820E80)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_DLJADDJPIIO_1_OFFSET UNITYSDK_OFFSET(0xD822BB0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_DLJADDJPIIO_OFFSET UNITYSDK_OFFSET(0xD822970)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ECKKGIIEPNM_OFFSET UNITYSDK_OFFSET(0xD8232E0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_EFCLPOLIAFA_OFFSET UNITYSDK_OFFSET(0xD821420)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_EFEEIAFLJGA_OFFSET UNITYSDK_OFFSET(0xD821700)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ELAKEDPGHLH_OFFSET UNITYSDK_OFFSET(0xD81FBC0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_FGNDOCBCFGH_OFFSET UNITYSDK_OFFSET(0xD822350)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_FKPDKDBNIHE_OFFSET UNITYSDK_OFFSET(0xD81E650)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_FLHHNACOFAM_OFFSET UNITYSDK_OFFSET(0xD821320)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETAVATARMASK_OFFSET UNITYSDK_OFFSET(0xD822870)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETCLIP_OFFSET UNITYSDK_OFFSET(0xD81E3B0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETDEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0xD823210)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0xD81E4C0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xD8223C0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_ALWAYSEVALUATE_OFFSET UNITYSDK_OFFSET(0xD81DE70)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_EMOTIONPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xD81DE20)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_FACERENDERER_OFFSET UNITYSDK_OFFSET(0xD81DE90)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_FADEOUTAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xD81DE50)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xD81DE30)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_PLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0xD81DE40)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GFOKMNFMICG_OFFSET UNITYSDK_OFFSET(0xD81E7B0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GGFLOBEAOEF_OFFSET UNITYSDK_OFFSET(0xD822160)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GJLHIJOAPON_OFFSET UNITYSDK_OFFSET(0xD8201C0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GLHAAKOIFAC_OFFSET UNITYSDK_OFFSET(0xD821AE0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_HNMENJACELE_OFFSET UNITYSDK_OFFSET(0xD822700)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_INKHENJANGA_OFFSET UNITYSDK_OFFSET(0xD81E000)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_JGKGPGCBOCP_OFFSET UNITYSDK_OFFSET(0xD821950)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_JKOIMJBKONE_OFFSET UNITYSDK_OFFSET(0xD820580)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_KAIOKHAMDJF_OFFSET UNITYSDK_OFFSET(0xD81EA80)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_KGECKLAKIHL_1_OFFSET UNITYSDK_OFFSET(0xD822C60)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_KGECKLAKIHL_OFFSET UNITYSDK_OFFSET(0xD8229E0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_LFOMKNLAJHB_OFFSET UNITYSDK_OFFSET(0xD822F50)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_MCBALAGNBJF_OFFSET UNITYSDK_OFFSET(0xD8218F0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_NJNIEPHBGLG_OFFSET UNITYSDK_OFFSET(0xD821660)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_OHGBFAIGMLM_OFFSET UNITYSDK_OFFSET(0xD81ED00)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONAUDIOLANGUAGECHANGED_OFFSET UNITYSDK_OFFSET(0xD81DEB0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD822520)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD821DC0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD821C10)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONOWNERRECYCLE_OFFSET UNITYSDK_OFFSET(0xD8226B0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_RESETPERMANENTCLIP_OFFSET UNITYSDK_OFFSET(0xD820310)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETAUTOBLINKWITHCURREYESTATE_OFFSET UNITYSDK_OFFSET(0xD81E810)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETENABLEAUTOBLICKWITHEYESTATE_OFFSET UNITYSDK_OFFSET(0xD81E940)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETENABLEAUTOBLINKSTATE_OFFSET UNITYSDK_OFFSET(0xD81E560)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETEYEPERMANENTEYESTATE_OFFSET UNITYSDK_OFFSET(0xD823280)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETMASKRENDERER_OFFSET UNITYSDK_OFFSET(0xD81E9E0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETMOUTHTALK_OFFSET UNITYSDK_OFFSET(0xD8233F0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETTALKPERMANENT_OFFSET UNITYSDK_OFFSET(0xD822A50)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_ALWAYSEVALUATE_OFFSET UNITYSDK_OFFSET(0xD81DE80)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_FACERENDERER_OFFSET UNITYSDK_OFFSET(0xD81DEA0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_FADEOUTAUTOBLINK_OFFSET UNITYSDK_OFFSET(0xD81DE60)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_START_OFFSET UNITYSDK_OFFSET(0xD821D20)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_STOPMOUTHTALK_OFFSET UNITYSDK_OFFSET(0xD8235F0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_STOPTALKPERMANENT_OFFSET UNITYSDK_OFFSET(0xD822D10)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TICKAFTEREVALUATE_OFFSET UNITYSDK_OFFSET(0xD822460)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TICKBEFOREEVALUATE_OFFSET UNITYSDK_OFFSET(0xD8220C0)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TRIGGERBLINKINGEYECLOSE_OFFSET UNITYSDK_OFFSET(0xD81EA30)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TRYINIT_OFFSET UNITYSDK_OFFSET(0xD81DF40)
#define RPG_CLIENT_MONOEMOPLAYABLEGRAPH_UPDATE_OFFSET UNITYSDK_OFFSET(0xD821F50)

namespace RPG::Client
{
	class MonoEmoPlayableGraph : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean EnableAutoBlink; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single MinBlinkGap; // 0x1C
		::System::Single MaxBlinkGap; // 0x20
		::System::Single BlinkingDuration; // 0x24
		::System::Single DoubleBlinkProbability; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::Animator* Animator; // 0x30
		::UnityEngine::AnimationClip* BrowDefaultClip; // 0x38
		::UnityEngine::AnimationClip* EyeDefaultClip; // 0x40
		::UnityEngine::AnimationClip* MouthDefaultClip; // 0x48
		::UnityEngine::AnimationClip* EyeCloseClip; // 0x50
		::UnityEngine::AnimationClip* BrowPermanentClip; // 0x58
		::UnityEngine::AnimationClip* EyePermanentClip; // 0x60
		::UnityEngine::AnimationClip* MouthPermanentClip; // 0x68
		::UnityEngine::AvatarMask* LeftEyeMask; // 0x70
		::UnityEngine::AvatarMask* RightEyeMask; // 0x78
		::UnityEngine::AvatarMask* EyeMask; // 0x80
		::UnityEngine::AvatarMask* LeftBrowMask; // 0x88
		::UnityEngine::AvatarMask* RightBrowMask; // 0x90
		::UnityEngine::AvatarMask* MouthMask; // 0x98
		::Il2CppArray<::UnityEngine::AnimationClip*>* EyeClips; // 0xA0
		::Il2CppArray<::UnityEngine::AnimationClip*>* BrowClips; // 0xA8
		::Il2CppArray<::UnityEngine::AnimationClip*>* MouthClips; // 0xB0
		::RPG::GameCore::GameEntity* HEEPMBBDEAO; // 0xB8
		::RPG::Client::MonoEmoPlayableGraph_EyeState HLBAPONNOIH; // 0xC0
		::RPG::Client::MonoEmoPlayableGraph_BlinkState PAMNALJBHDF; // 0xC4
		::System::Boolean CHAMOHGJPIO; // 0xC8
		::System::Byte _padding2[0x3];
		::System::Single MOLGPBFIGEI; // 0xCC
		::System::Single HFOBOHLPBLC; // 0xD0
		::System::Boolean JAMDCJJIBDP; // 0xD4
		::System::Boolean AJBNFOLOJLH; // 0xD5
		::System::Byte _padding3[0x2];
		::System::Action* OFCJEBILCPE; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* BFLKPEGCDBN; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* NDHAGLPCJFA; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationClip*>* APGHNCFKHHF; // 0xF0
		::UnityEngine::Playables::PlayableGraph KECJFLONLII; // 0xF8
		::UnityEngine::Animations::AnimationPlayableOutput IOMNFFDEHBI; // 0x108
		::UnityEngine::Animations::AnimationPlayableOutput CNPPPMPDOJI; // 0x118
		::UnityEngine::Animations::AnimationPlayableOutput NNHLEJJBODH; // 0x128
		::UnityEngine::Animations::AnimationPlayableOutput DHIMPBKKIOH; // 0x138
		::UnityEngine::Animations::AnimationLayerMixerPlayable MCINHNMKCCI; // 0x148
		::UnityEngine::Animations::AnimationLayerMixerPlayable LCLLONPLKGO; // 0x158
		::UnityEngine::Animations::AnimationLayerMixerPlayable JIINGBDGMIH; // 0x168
		::UnityEngine::Animations::AnimationClipPlayable LBMKAONIBDK; // 0x178
		::UnityEngine::Animations::AnimationClipPlayable IEDLOHDJOIM; // 0x188
		::UnityEngine::Animations::AnimationClipPlayable FKLEFHKNAJL; // 0x198
		::UnityEngine::Animations::AnimationMixerPlayable NBKMCLHCBIJ; // 0x1A8
		::UnityEngine::Animations::AnimationMixerPlayable DHHOEMELGHO; // 0x1B8
		::UnityEngine::Animations::AnimationMixerPlayable PPEEAPGNFCH; // 0x1C8
		::UnityEngine::Animations::AnimationMixerPlayable HPNGLGNCEOK; // 0x1D8
		::OBBBNMEIFDO* KEGDAOEFPCM; // 0x1E8
		::OBBBNMEIFDO* CMPMIANGNFH; // 0x1F0
		::OBBBNMEIFDO* DAHIMGAOALM; // 0x1F8
		::DOJMJBBPFMP* HMOPFDJCLOH; // 0x200
		::UnityEngine::SkinnedMeshRenderer* NCDOBKOHLOG; // 0x208
		::RPG::Client::EmoEyeCtrl* EILNMKFPEDB; // 0x210
		::System::Boolean _FadeOutAutoBlink_k__BackingField; // 0x218
		::System::Boolean _AlwaysEvaluate_k__BackingField; // 0x219
		::System::Byte _padding4[0x6];
		::UnityEngine::SkinnedMeshRenderer* _FaceRenderer_k__BackingField; // 0x220
		::BKLJMPGNFNB* KBHLJJEJKBF; // 0x228
		::System::String* IELEPPOEOFC; // 0x230
		::System::Boolean HKBLDPDBEFM; // 0x238
		static ::Il2CppArray<::System::Int32>** StaticGet_PAEAOEKEKJB()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("RPG.Client", "MonoEmoPlayableGraph")->GetStaticField(0x5BF10);
		}

		static ::System::String** StaticGet_JNLFFLGBEOM()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "MonoEmoPlayableGraph")->GetStaticField(0x5BF18);
		}

		static ::System::Boolean* StaticGet_USE_NEW_EMO()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "MonoEmoPlayableGraph")->GetStaticField(0x13F30);
		}

		// static const ::System::String* CLOSE_EYE_MARKER; // 0x0
		// static const ::System::Object CLOSE_EYE_WEIGHT; // 0x0
		// static const ::System::Object EMOTION_POSITION_LEFT; // 0x0
		// static const ::System::Object EMOTION_POSITION_RIGHT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CCTOR_OFFSET))();
		}

		::BKLJMPGNFNB* get_emotionPlayableGraph()
		{
			return ((::BKLJMPGNFNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_EMOTIONPLAYABLEGRAPH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_OWNERENTITY_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableGraph get_PlayableGraph()
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_PLAYABLEGRAPH_OFFSET))(this);
		}

		::System::Boolean get_FadeOutAutoBlink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_FADEOUTAUTOBLINK_OFFSET))(this);
		}

		::System::Void set_FadeOutAutoBlink(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_FADEOUTAUTOBLINK_OFFSET))(this, a1);
		}

		::System::Boolean get_AlwaysEvaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_ALWAYSEVALUATE_OFFSET))(this);
		}

		::System::Void set_AlwaysEvaluate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_ALWAYSEVALUATE_OFFSET))(this, a1);
		}

		::UnityEngine::SkinnedMeshRenderer* get_FaceRenderer()
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GET_FACERENDERER_OFFSET))(this);
		}

		::System::Void set_FaceRenderer(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SET_FACERENDERER_OFFSET))(this, a1);
		}

		::System::Void OnAudioLanguageChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONAUDIOLANGUAGECHANGED_OFFSET))(this);
		}

		::System::Void TryInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TRYINIT_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_DESTROY_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* GetClip(::RPGTools::Timeline::Emotion::EmoTrackType a1, ::System::String* a2)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETCLIP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Animations::AnimationPlayableOutput GetOutput(::RPGTools::Timeline::Emotion::EmoTrackType a1)
		{
			return ((::UnityEngine::Animations::AnimationPlayableOutput(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETOUTPUT_OFFSET))(this, a1);
		}

		::System::Void SetEnableAutoBlinkState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETENABLEAUTOBLINKSTATE_OFFSET))(this, a1);
		}

		::System::Void SetAutoBlinkWithCurrEyeState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETAUTOBLINKWITHCURREYESTATE_OFFSET))(this);
		}

		::System::Void AutoBlinkWithEyeState(::RPG::Client::MonoEmoPlayableGraph_EyeState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoPlayableGraph_EyeState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_AUTOBLINKWITHEYESTATE_OFFSET))(this, a1);
		}

		::System::Void SetEnableAutoBlickWithEyeState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETENABLEAUTOBLICKWITHEYESTATE_OFFSET))(this, a1);
		}

		::System::Void SetMaskRenderer(::UnityEngine::SkinnedMeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETMASKRENDERER_OFFSET))(this, a1);
		}

		::System::Void TriggerBlinkingEyeClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TRIGGERBLINKINGEYECLOSE_OFFSET))(this, a1);
		}

		::System::Boolean CanBlink()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CANBLINK_OFFSET))(this);
		}

		::System::Void CHCJOCNOOCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CHCJOCNOOCI_OFFSET))(this);
		}

		::System::Void INKHENJANGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_INKHENJANGA_OFFSET))(this);
		}

		::System::Void GFOKMNFMICG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GFOKMNFMICG_OFFSET))(this);
		}

		::System::Void BFBGELDBPDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_BFBGELDBPDI_OFFSET))(this);
		}

		::System::Void FKPDKDBNIHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_FKPDKDBNIHE_OFFSET))(this);
		}

		::System::Void JKOIMJBKONE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_JKOIMJBKONE_OFFSET))(this);
		}

		::System::Void BIEFAGFIDGN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_BIEFAGFIDGN_OFFSET))(this, a1);
		}

		::System::Void BKLBJHFMJCH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_BKLBJHFMJCH_OFFSET))(this, a1);
		}

		::System::Void CBBMCMCBGDO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CBBMCMCBGDO_OFFSET))(this, a1);
		}

		::System::Void KAIOKHAMDJF(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_KAIOKHAMDJF_OFFSET))(this, a1);
		}

		::System::Void ELAKEDPGHLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ELAKEDPGHLH_OFFSET))(this);
		}

		::System::Void DFMHLMGMPNH(::RPGTools::Timeline::Emotion::EmoTrackType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_DFMHLMGMPNH_OFFSET))(this, a1, a2);
		}

		::System::String* FLHHNACOFAM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_FLHHNACOFAM_OFFSET))(this);
		}

		::System::Void GJLHIJOAPON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GJLHIJOAPON_OFFSET))(this);
		}

		::System::Void EFCLPOLIAFA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_EFCLPOLIAFA_OFFSET))(this, a1);
		}

		::System::Void NJNIEPHBGLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_NJNIEPHBGLG_OFFSET))(this);
		}

		::System::Void EFEEIAFLJGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_EFEEIAFLJGA_OFFSET))(this);
		}

		::System::Void MCBALAGNBJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_MCBALAGNBJF_OFFSET))(this);
		}

		::System::Void JGKGPGCBOCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_JGKGPGCBOCP_OFFSET))(this);
		}

		::System::Void GLHAAKOIFAC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GLHAAKOIFAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_UPDATE_OFFSET))(this);
		}

		::System::Void TickBeforeEvaluate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TICKBEFOREEVALUATE_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::PlayableGraph GetPlayableGraph()
		{
			return ((::UnityEngine::Playables::PlayableGraph(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETPLAYABLEGRAPH_OFFSET))(this);
		}

		::System::Void TickAfterEvaluate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_TICKAFTEREVALUATE_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnOwnerRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ONOWNERRECYCLE_OFFSET))(this);
		}

		::System::Void OHGBFAIGMLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_OHGBFAIGMLM_OFFSET))(this);
		}

		::System::Void ResetPermanentClip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_RESETPERMANENTCLIP_OFFSET))(this);
		}

		::System::Void SetTalkPermanent(::RPG::Client::TalkEmotionData* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkEmotionData*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETTALKPERMANENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StopTalkPermanent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_STOPTALKPERMANENT_OFFSET))(this, a1);
		}

		::System::Void HNMENJACELE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_HNMENJACELE_OFFSET))(this);
		}

		::System::Void GGFLOBEAOEF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GGFLOBEAOEF_OFFSET))(this, a1);
		}

		::System::Void AENANLFEHJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_AENANLFEHJM_OFFSET))(this);
		}

		::System::Void BMONBEPOPKC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_BMONBEPOPKC_OFFSET))(this, a1);
		}

		::System::Void BMONBEPOPKC_1(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_BMONBEPOPKC_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LFOMKNLAJHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_LFOMKNLAJHB_OFFSET))(this);
		}

		::System::Void DLJADDJPIIO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_DLJADDJPIIO_OFFSET))(this, a1);
		}

		::System::Void DLJADDJPIIO_1(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_DLJADDJPIIO_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CLLOKOJDEIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_CLLOKOJDEIE_OFFSET))(this);
		}

		::System::Void KGECKLAKIHL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_KGECKLAKIHL_OFFSET))(this, a1);
		}

		::System::Void KGECKLAKIHL_1(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_KGECKLAKIHL_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationClip* GetDefaultClip(::RPGTools::Timeline::Emotion::EmoTrackType a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETDEFAULTCLIP_OFFSET))(this, a1);
		}

		::UnityEngine::AvatarMask* GetAvatarMask(::RPGTools::Timeline::Emotion::EmoTrackType a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoTrackType, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_GETAVATARMASK_OFFSET))(this, a1, a2);
		}

		::System::Void SetEyePermanentEyeState(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETEYEPERMANENTEYESTATE_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEmoPlayableGraph_EyeState ECKKGIIEPNM(::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>* a1)
		{
			return ((::RPG::Client::MonoEmoPlayableGraph_EyeState(*)(::PVOID, ::Il2CppArray<::RPG::Client::TalkEmotionPoseData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_ECKKGIIEPNM_OFFSET))(this, a1);
		}

		::System::Void SetMouthTalk(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_SETMOUTHTALK_OFFSET))(this, a1, a2);
		}

		::System::Void StopMouthTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_STOPMOUTHTALK_OFFSET))(this);
		}

		::System::Void FGNDOCBCFGH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOPLAYABLEGRAPH_FGNDOCBCFGH_OFFSET))(this, a1);
		}

	};
}
