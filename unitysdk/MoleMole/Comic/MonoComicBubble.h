#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Comic/ComicBubbleImgType.h"
#include "unitysdk/MoleMole/Comic/MonoComicKeyEventBase.h"
#include "unitysdk/UnityEngine/Timeline/ArrowDir.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkCallbackInfo;
class MonoUITableScrollV2;
class PopText;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole::Comic { class ComicBubbleImgTypePicConfig; }
namespace MoleMole::Comic { class MonoComicBubble_IJJNFPKDLDL; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine::Timeline { class BubbleEvent; }
namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ADD_ONINITFINISH_OFFSET UNITYSDK_OFFSET(0x163E9070)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ADD_ONSHRINKFINISH_OFFSET UNITYSDK_OFFSET(0x163E9170)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_AHNJLANOGFM_OFFSET UNITYSDK_OFFSET(0x163EE710)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_AJDCMNDHDIJ_OFFSET UNITYSDK_OFFSET(0x163EF740)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_AJFBFGKLLFL_OFFSET UNITYSDK_OFFSET(0x163F0600)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ALJNKBIPAEM_OFFSET UNITYSDK_OFFSET(0x163F20E0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ANAHLMBJMOL_OFFSET UNITYSDK_OFFSET(0x163F08A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x163E9270)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_BBDEDJOJKEN_OFFSET UNITYSDK_OFFSET(0x163EF030)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_BCNCNEAEKKM_OFFSET UNITYSDK_OFFSET(0x163EBC90)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_BJOOCBMEPBD_OFFSET UNITYSDK_OFFSET(0x163EFEA0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_BPEBNBPBODL_OFFSET UNITYSDK_OFFSET(0x163F0620)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_BPMAKBNIMLG_OFFSET UNITYSDK_OFFSET(0x163F0610)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_CCKBODNFOBL_OFFSET UNITYSDK_OFFSET(0x163EAEF0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLEARBUBBLERANGELIST_OFFSET UNITYSDK_OFFSET(0x163EA9C0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_CMGFGOFMIEM_OFFSET UNITYSDK_OFFSET(0x163EE0A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_DEIMMBOKPBE_OFFSET UNITYSDK_OFFSET(0x163EE5D0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_DILHADGGIKN_OFFSET UNITYSDK_OFFSET(0x163E9F70)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_EBIPCLHFACI_OFFSET UNITYSDK_OFFSET(0x163EEC50)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_EBNLAFCOGDA_OFFSET UNITYSDK_OFFSET(0x163EEC40)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ECAJNCHILHG_OFFSET UNITYSDK_OFFSET(0x163F1C20)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ENDPLAY_OFFSET UNITYSDK_OFFSET(0x163ECA30)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_EOKGEIOGBMF_OFFSET UNITYSDK_OFFSET(0x163F22B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_EPELLLOGICD_OFFSET UNITYSDK_OFFSET(0x163EEC60)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_FINISHTEXTPLAY_OFFSET UNITYSDK_OFFSET(0x163ED4B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_FMGNLGMCOJJ_OFFSET UNITYSDK_OFFSET(0x163EEC20)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_FPBKPKDEGLM_OFFSET UNITYSDK_OFFSET(0x163EE050)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETFADEINANIMTIME_OFFSET UNITYSDK_OFFSET(0x163EC890)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETFADEOUTANIMTIME_OFFSET UNITYSDK_OFFSET(0x163ECE10)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETHIDEINDEX_OFFSET UNITYSDK_OFFSET(0x163EB010)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_GO_OFFSET UNITYSDK_OFFSET(0x163EABB0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_HIDEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x163EE0B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_MOVEWHENSPLITSCREEN_OFFSET UNITYSDK_OFFSET(0x163EE0C0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_RECTTRAN_OFFSET UNITYSDK_OFFSET(0x163EAA80)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_SCROLLVIEWACTIVE_OFFSET UNITYSDK_OFFSET(0x163EE0D0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GHNAFFPJKJP_OFFSET UNITYSDK_OFFSET(0x163EA6B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_HJEJDMIFNEH_OFFSET UNITYSDK_OFFSET(0x163EE2D0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_IKJCCBDEGCN_OFFSET UNITYSDK_OFFSET(0x163EC5E0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITIMGCONFIG_OFFSET UNITYSDK_OFFSET(0x163EAC40)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITRANGEINFO_OFFSET UNITYSDK_OFFSET(0x163EABC0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITWITHBASE_OFFSET UNITYSDK_OFFSET(0x163E9D90)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ISAUTOFINISH_OFFSET UNITYSDK_OFFSET(0x163EA960)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ISPLAYTEXT_OFFSET UNITYSDK_OFFSET(0x163ED340)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_JIHIJKHBCMP_OFFSET UNITYSDK_OFFSET(0x163EE540)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_JKGOKDJJCKP_OFFSET UNITYSDK_OFFSET(0x163F0330)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_JPMODEPNIBM_OFFSET UNITYSDK_OFFSET(0x163EB9E0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_JUMPTOFINALSTATE_OFFSET UNITYSDK_OFFSET(0x163EDEB0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_KHLGMKHLHHI_OFFSET UNITYSDK_OFFSET(0x163F2060)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_KJFBCEMAMJD_OFFSET UNITYSDK_OFFSET(0x163EF240)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_KPBAEFHAHKF_OFFSET UNITYSDK_OFFSET(0x163EAE60)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_LAAJOGHHPMH_OFFSET UNITYSDK_OFFSET(0x163F2220)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_LBEHMAPCENP_OFFSET UNITYSDK_OFFSET(0x163EAC90)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_MDHDIOPLDDL_OFFSET UNITYSDK_OFFSET(0x163F01B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_NOGMAFCEPIK_OFFSET UNITYSDK_OFFSET(0x163F0670)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_OLDLKHFOBEM_OFFSET UNITYSDK_OFFSET(0x163F02A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x163ECFB0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_OPNEALBHIFB_OFFSET UNITYSDK_OFFSET(0x163F0CA0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PCKGOECGJFP_OFFSET UNITYSDK_OFFSET(0x163EDF00)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PIOEJLBGJJH_OFFSET UNITYSDK_OFFSET(0x163EE230)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0x163EC440)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x163ECA80)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFOCUSANIM_OFFSET UNITYSDK_OFFSET(0x163EDBC0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYLOSEFOCUSANIM_OFFSET UNITYSDK_OFFSET(0x163EDD40)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_PMBKLCBOPED_OFFSET UNITYSDK_OFFSET(0x163F2190)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_REMOVE_ONINITFINISH_OFFSET UNITYSDK_OFFSET(0x163E90F0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_REMOVE_ONSHRINKFINISH_OFFSET UNITYSDK_OFFSET(0x163E91F0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x163EDF10)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETHIDEINDEX_OFFSET UNITYSDK_OFFSET(0x163EAFC0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETMOVEPARAMS_OFFSET UNITYSDK_OFFSET(0x163EDA70)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x163EAA90)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETVOICEPARAM_OFFSET UNITYSDK_OFFSET(0x163EAF70)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SHOWARROW_OFFSET UNITYSDK_OFFSET(0x163EC330)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SHOWBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x163EA340)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_SIMULATEMOVEPROCESS_OFFSET UNITYSDK_OFFSET(0x163EB7E0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_STARTPLAY_OFFSET UNITYSDK_OFFSET(0x163EC3F0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_UPDATETIME_OFFSET UNITYSDK_OFFSET(0x163EB060)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x163EA710)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x163EE1A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x163EE0E0)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubble_TypeDefinitionIndex = 70225;

	class MonoComicBubble : public ::MoleMole::Comic::MonoComicKeyEventBase
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_HHEABJOKNGG()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MonoComicBubble_TypeDefinitionIndex)->GetStaticField(0x3BD80);
		}
		// static const ::System::Single textSpeed; // 0x0
		// static const ::System::Single distanceBetweenBubble; // 0x0
		// static const ::System::Single shrinkAnimDuration; // 0x0
		::UnityEngine::Animation* bubbleAnim; // 0x50
		::UnityEngine::UI::Text* text; // 0x58
		::UnityEngine::RectTransform* arrowRoot; // 0x60
		::UnityEngine::RectTransform* content; // 0x68
		::UnityEngine::RectTransform* root; // 0x70
		::Il2CppArray<::UnityEngine::GameObject*>* arrows; // 0x78
		::UnityEngine::GameObject* Arrow; // 0x80
		::UnityEngine::RectTransform* scrollerContent; // 0x88
		::UnityEngine::Transform* scrollViewGO; // 0x90
		::UnityEngine::AnimationCurve* shrinkAnimCurve; // 0x98
		::System::Action* ECICNJPOMOK; // 0xA0
		::System::Action* OLJJMIEKCAH; // 0xA8
		::Foundation::AssetRequestHandle APHNAKFCOND; // 0xB0
		::UnityEngine::Timeline::BubbleEvent* JMFDEBNELJA; // 0xD0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* CKCBHEJGBAK; // 0xD8
		::System::Boolean PJFOHOCBOBC; // 0xE0
		::System::Boolean DIGJDPENJOJ; // 0xE1
		::System::Byte _padding0[0x2];
		::System::Single GNAPGNKGPEO; // 0xE4
		::System::Single NAIFGDANJEJ; // 0xE8
		::System::Single EEANJEHICAP; // 0xEC
		::System::Single DJJCJANNLJF; // 0xF0
		::System::Byte _padding1[0x4];
		::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL* DFHEFKEJABB; // 0xF8
		::System::Single IOMDLCJHGFJ; // 0x100
		::System::Int32 FLEFNLKOGGH; // 0x104
		::System::Single GPAPMKNDFKL; // 0x108
		::System::Byte _padding2[0x4];
		::UnityEngine::UI::HorizontalLayoutGroup* PLLKDFGOAGM; // 0x110
		::UnityEngine::UI::HorizontalLayoutGroup* FACPHBCKEHJ; // 0x118
		::UnityEngine::UI::HorizontalLayoutGroup* FOCHOCMHOFP; // 0x120
		::Foundation::Coroutine::CoroutineHandle KNJEFMNJJBL; // 0x128
		::System::Byte _padding3[0x4];
		::UnityEngine::WaitForEndOfFrame* CCLDNPFLNFC; // 0x130
		::Foundation::Coroutine::CoroutineHandle NIOHBOEOPGH; // 0x138
		::System::Boolean NPHNEELFLBN; // 0x13C
		::System::Byte _padding4[0x3];
		::System::Single GNBENELIAMB; // 0x140
		::UnityEngine::Vector3 FGAKEBJJJMO; // 0x144
		::UnityEngine::Vector2 ICEPIDFLMNK; // 0x150
		::UnityEngine::RectTransform* MCCNMLNMCJF; // 0x158
		::Il2CppArray<::UnityEngine::CanvasGroup*>* HGAMLILGKPC; // 0x160
		::MoleMole::MonoGamepadSelectable* AOJGACJEJNC; // 0x168
		::UnityEngine::Material* IJJEDKHIOFL; // 0x170
		::UnityEngine::UI::Image* GCGBMJKANLO; // 0x178
		::PopText* IGAJMPCDAJI; // 0x180
		::MonoUITableScrollV2* HABEMCPBDDI; // 0x188
		::System::String* NHKKNBDMDJD; // 0x190
		::UnityEngine::Color IAHEADKFDIK; // 0x198
		::System::Boolean NBCMHONMPNK; // 0x1A8
		::System::Boolean POLJHONHJJO; // 0x1A9
		::System::Byte _padding5[0x2];
		::System::Single OHFHINFGHAB; // 0x1AC
		::UnityEngine::RectTransform* LHJEGPDDKAE; // 0x1B0
		::System::Single EFPEKBIPIOH; // 0x1B8
		::System::Single JECLCOGANON; // 0x1BC
		::System::String* BCPPCELDALM; // 0x1C0
		::System::Action_1<::System::UInt32>* playExternalCB; // 0x1C8
		::System::Boolean _PICBLNHAGGL_k__BackingField; // 0x1D0
		::System::Byte _padding6[0x3];
		::System::Int32 GIHBJFCPFEA; // 0x1D4
		::System::Boolean _IHJGGPGJKJI_k__BackingField; // 0x1D8
		::System::Boolean CLHNFKEHKCO; // 0x1D9
		::System::Byte _padding7[0x2];
		::UnityEngine::Vector2 LEDKNIGLNGC; // 0x1DC
		::UnityEngine::Vector2 ANLGNNIMGHB; // 0x1E4
		::UnityEngine::Vector2 ACELNPJJMKP; // 0x1EC
		::System::Byte _padding8[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ENOFIECAHLA; // 0x1F8
		::System::Int32 FPKAIDFKNBC; // 0x200
		::System::Single FOGGDKGEMGF; // 0x204
		::System::Single AOEKMOKIAME; // 0x208
		::System::Byte _padding9[0x4];
		::UnityEngine::AnimationCurve* DKFKCCOCNPH; // 0x210
		::System::Boolean MHFEFGNAMHD; // 0x218
		::System::Byte _padding10[0x3];
		::System::Single KCIIAMAAKDF; // 0x21C
		::Il2CppArray<::System::Single>* GMDKABJACBJ; // 0x220
		::Il2CppArray<::System::Single>* HCPIEOHOICB; // 0x228
		::UnityEngine::Vector2 DEDCAEEIDBG; // 0x230
		::UnityEngine::Vector2 JJNOCFIBKAJ; // 0x238
		::UnityEngine::Vector2 IIGNBAILLNK; // 0x240
		::System::Boolean EPCHGGBLMDH; // 0x248
		::System::Boolean KBAENBJGKEA; // 0x249

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE__CCTOR_OFFSET))();
		}

		::System::Void add_OnInitFinish(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ADD_ONINITFINISH_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void remove_OnInitFinish(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_REMOVE_ONINITFINISH_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void add_OnShrinkFinish(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ADD_ONSHRINKFINISH_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void remove_OnShrinkFinish(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_REMOVE_ONSHRINKFINISH_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_AWAKE_OFFSET))(this);
		}

		::System::Void InitWithBase(::UnityEngine::Timeline::ComicEventBase* IGLBHBHINFH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITWITHBASE_OFFSET))(this, IGLBHBHINFH);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_UPDATE_OFFSET))(this);
		}

		::System::Boolean IsAutoFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ISAUTOFINISH_OFFSET))(this);
		}

		static ::System::Void ClearBubbleRangeList()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_CLEARBUBBLERANGELIST_OFFSET))();
		}

		::UnityEngine::RectTransform* get_RectTran()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_RECTTRAN_OFFSET))(this);
		}

		::System::Void SetParent(::UnityEngine::RectTransform* PACDBPMLAJL, ::UnityEngine::Vector2 GEJHBMCCPFG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETPARENT_OFFSET))(this, PACDBPMLAJL, GEJHBMCCPFG);
		}

		::UnityEngine::GameObject* get_go()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_GO_OFFSET))(this);
		}

		::System::Void InitRangeInfo(::System::Single BAFOKCMHFBE, ::System::Single EOIPAOKAHBD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITRANGEINFO_OFFSET))(this, BAFOKCMHFBE, EOIPAOKAHBD);
		}

		::System::Void InitImgConfig(::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* CKCBHEJGBAK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_INITIMGCONFIG_OFFSET))(this, CKCBHEJGBAK);
		}

		::System::Void ShowBubbleWidget(::UnityEngine::Timeline::BubbleEvent* JMFDEBNELJA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SHOWBUBBLEWIDGET_OFFSET))(this, JMFDEBNELJA);
		}

		::System::Void SetVoiceParam(::System::String* BCPPCELDALM)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETVOICEPARAM_OFFSET))(this, BCPPCELDALM);
		}

		::System::Void SetHideIndex(::System::Int32 JGKPMIGAACP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETHIDEINDEX_OFFSET))(this, JGKPMIGAACP);
		}

		::System::Int32 GetHideIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETHIDEINDEX_OFFSET))(this);
		}

		::System::Void UpdateTime(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_UPDATETIME_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void ShowArrow(::UnityEngine::Timeline::ArrowDir DAAEHEHLLLD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ArrowDir))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SHOWARROW_OFFSET))(this, DAAEHEHLLLD);
		}

		::System::Void StartPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_STARTPLAY_OFFSET))(this);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Single GetFadeInAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETFADEINANIMTIME_OFFSET))(this);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ENDPLAY_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFADEOUTANIM_OFFSET))(this);
		}

		::System::Single GetFadeOutAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GETFADEOUTANIMTIME_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean IsPlayText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ISPLAYTEXT_OFFSET))(this);
		}

		::System::Void FinishTextPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_FINISHTEXTPLAY_OFFSET))(this);
		}

		::System::Void SetMoveParams(::UnityEngine::Vector2 MGBNCKDPBFM, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single AOEKMOKIAME)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SETMOVEPARAMS_OFFSET))(this, MGBNCKDPBFM, FAJHPKBELMF, AOEKMOKIAME);
		}

		::System::Void SimulateMoveProcess(::System::Single PMGFIHJAJHL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_SIMULATEMOVEPROCESS_OFFSET))(this, PMGFIHJAJHL);
		}

		::System::Void PlayFocusAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYFOCUSANIM_OFFSET))(this);
		}

		::System::Void PlayLoseFocusAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PLAYLOSEFOCUSANIM_OFFSET))(this);
		}

		::System::Void JumpToFinalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_JUMPTOFINALSTATE_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Boolean CMGFGOFMIEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_CMGFGOFMIEM_OFFSET))(this);
		}

		::System::Void PCKGOECGJFP(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PCKGOECGJFP_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_hideWhenSplitScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_HIDEWHENSPLITSCREEN_OFFSET))(this);
		}

		::System::Boolean get_moveWhenSplitScreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_MOVEWHENSPLITSCREEN_OFFSET))(this);
		}

		::System::Boolean get_scrollViewActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GET_SCROLLVIEWACTIVE_OFFSET))(this);
		}

		::System::Void PIOEJLBGJJH(::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PIOEJLBGJJH_OFFSET))(this, FIPHFGHNNBE);
		}

		::System::Void HJEJDMIFNEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_HJEJDMIFNEH_OFFSET))(this);
		}

		::System::Void JIHIJKHBCMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_JIHIJKHBCMP_OFFSET))(this);
		}

		::UnityEngine::Vector2 DEIMMBOKPBE()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_DEIMMBOKPBE_OFFSET))(this);
		}

		::UnityEngine::Vector2 AHNJLANOGFM(::System::Int32& PHPMFDBEIPM)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_AHNJLANOGFM_OFFSET))(this, PHPMFDBEIPM);
		}

		::System::Void FMGNLGMCOJJ(::System::Object* IIGGFGOJHDH, ::AkCallbackType OBNIAHNMHPF, ::AkCallbackInfo* HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_FMGNLGMCOJJ_OFFSET))(this, IIGGFGOJHDH, OBNIAHNMHPF, HMMMOCJAEOA);
		}

		::System::Void EBNLAFCOGDA(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_EBNLAFCOGDA_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean EBIPCLHFACI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_EBIPCLHFACI_OFFSET))(this);
		}

		::System::Void LBEHMAPCENP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_LBEHMAPCENP_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* KPBAEFHAHKF(::UnityEngine::Timeline::BubbleEvent* JMFDEBNELJA)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_KPBAEFHAHKF_OFFSET))(this, JMFDEBNELJA);
		}

		::System::Void EPELLLOGICD(::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL* HODAIDNDKHD, ::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL* LDDJOFHAOHG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL*, ::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_EPELLLOGICD_OFFSET))(this, HODAIDNDKHD, LDDJOFHAOHG);
		}

		::System::Void JPMODEPNIBM(::UnityEngine::Timeline::BubbleEvent* JMFDEBNELJA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_JPMODEPNIBM_OFFSET))(this, JMFDEBNELJA);
		}

		::System::Void BJOOCBMEPBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_BJOOCBMEPBD_OFFSET))(this);
		}

		::System::Void BCNCNEAEKKM(::System::Single PMGFIHJAJHL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_BCNCNEAEKKM_OFFSET))(this, PMGFIHJAJHL);
		}

		::System::Void MDHDIOPLDDL(::UnityEngine::Vector2 HANBGGNBEKP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_MDHDIOPLDDL_OFFSET))(this, HANBGGNBEKP);
		}

		::System::Void OLDLKHFOBEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_OLDLKHFOBEM_OFFSET))(this);
		}

		::System::Void AJDCMNDHDIJ(::UnityEngine::Timeline::BubbleEvent* JMFDEBNELJA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_AJDCMNDHDIJ_OFFSET))(this, JMFDEBNELJA);
		}

		::System::Void AJFBFGKLLFL(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_AJFBFGKLLFL_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void BPMAKBNIMLG(::UnityEngine::Timeline::ComicEventBase* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_BPMAKBNIMLG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean BPEBNBPBODL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_BPEBNBPBODL_OFFSET))(this);
		}

		::System::Void NOGMAFCEPIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_NOGMAFCEPIK_OFFSET))(this);
		}

		::System::Void IKJCCBDEGCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_IKJCCBDEGCN_OFFSET))(this);
		}

		::System::Void BBDEDJOJKEN(::System::Boolean HFNILFLBHND)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_BBDEDJOJKEN_OFFSET))(this, HFNILFLBHND);
		}

		::System::Void ANAHLMBJMOL(::UnityEngine::Timeline::BubbleEvent* JMFDEBNELJA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ANAHLMBJMOL_OFFSET))(this, JMFDEBNELJA);
		}

		::System::Int32 OPNEALBHIFB(::UnityEngine::Timeline::BubbleEvent* JMFDEBNELJA)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_OPNEALBHIFB_OFFSET))(this, JMFDEBNELJA);
		}

		::System::Void ALJNKBIPAEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ALJNKBIPAEM_OFFSET))(this);
		}

		::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL* ECAJNCHILHG(::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL* FACFGAHODAA)
		{
			return ((::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL*(*)(::PVOID, ::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_ECAJNCHILHG_OFFSET))(this, FACFGAHODAA);
		}

		::System::Single PMBKLCBOPED()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_PMBKLCBOPED_OFFSET))(this);
		}

		::System::Int32 KHLGMKHLHHI(::UnityEngine::Timeline::BubbleEvent* JMFDEBNELJA)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_KHLGMKHLHHI_OFFSET))(this, JMFDEBNELJA);
		}

		::System::Void LAAJOGHHPMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_LAAJOGHHPMH_OFFSET))(this);
		}

		::System::Void FPBKPKDEGLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_FPBKPKDEGLM_OFFSET))(this);
		}

		::System::Void KJFBCEMAMJD(::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL* DFHEFKEJABB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Comic::MonoComicBubble_IJJNFPKDLDL*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_KJFBCEMAMJD_OFFSET))(this, DFHEFKEJABB);
		}

		::System::Void GHNAFFPJKJP(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* DOBENILJCFK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GHNAFFPJKJP_OFFSET))(this, DOBENILJCFK);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* CCKBODNFOBL()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_CCKBODNFOBL_OFFSET))(this);
		}

		::System::Void DILHADGGIKN(::System::String* FPBNKAPBJEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_DILHADGGIKN_OFFSET))(this, FPBNKAPBJEH);
		}

		::System::Void EOKGEIOGBMF(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_EOKGEIOGBMF_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void JKGOKDJJCKP(::UnityEngine::Timeline::BubbleEvent* JMFDEBNELJA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::BubbleEvent*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_JKGOKDJJCKP_OFFSET))(this, JMFDEBNELJA);
		}
	};
}
