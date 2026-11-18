#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGHFICOEKBH.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/DBOMIGCHIIK.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UICinemaSinglePlayWidgetController_ComboShowState.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/CinemaSingleBeatMapConfig_BeatMap_BeatItem.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class AIPAFAGLLGH;
class BHJBJDALADJ;
class BHJBJDALADJ_DBIAMJPELBD;
class BHJBJDALADJ_DJMEPLCJPBO;
class BHJBJDALADJ_FOFHOPCMLJK;
class BHJBJDALADJ_ONHBKJHMBOF;
class BJKJAPBBLBB;
class FKLKNBBLJDF;
class FNIPCMOBODO;
class JMFJFDOMCBC;
class LMOLGOKJEBI;
class MJCPKGJHMMN;
class NJJKOJFKACE;
class ONPJILHALGP;
namespace MoleMole { class UICinemaBubbleBaseContext; }
namespace MoleMole { class UICinemaFeverTipsWidgetController; }
namespace MoleMole { class UICinemaPlayBubble01RightWidgetController; }
namespace MoleMole { class UICinemaPlayBubble01WidgetController; }
namespace MoleMole { class UICinemaSingleBadBubbleWidgetController; }
namespace MoleMole { class UICinemaSingleClearAllBubbleWidgetController; }
namespace MoleMole { class UICinemaSingleMultiClickBubbleRightWidgetController; }
namespace MoleMole { class UICinemaSingleMultiClickBubbleWidgetController; }
namespace MoleMole { class UICinemaSingleSuperBubbleWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ABBPAFECBGJ_OFFSET UNITYSDK_OFFSET(0x1598AD20)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ADPPCHDBFPD_OFFSET UNITYSDK_OFFSET(0x15986D80)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_AEENDFBMJFN_OFFSET UNITYSDK_OFFSET(0x15983FA0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_AFDCPDHNGFJ_OFFSET UNITYSDK_OFFSET(0x15985270)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_AHNMMNCODBH_OFFSET UNITYSDK_OFFSET(0x15981D90)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_AMFDEFEPGBN_OFFSET UNITYSDK_OFFSET(0x1598BA80)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_CEMGFAPFGKK_OFFSET UNITYSDK_OFFSET(0x159892C0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_CJACHNHJKJN_OFFSET UNITYSDK_OFFSET(0x15989420)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_COCDDGIDPPI_OFFSET UNITYSDK_OFFSET(0x15984800)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DAEDLGBHKMP_OFFSET UNITYSDK_OFFSET(0x1598B2D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DESTORYEFFECTENTITY_OFFSET UNITYSDK_OFFSET(0x159821D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DFEJCLKKIHJ_OFFSET UNITYSDK_OFFSET(0x15988360)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DKBOIOMEEHK_OFFSET UNITYSDK_OFFSET(0x15989390)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DMCJJKKHGIH_OFFSET UNITYSDK_OFFSET(0x159899E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DOAGDPEJKML_OFFSET UNITYSDK_OFFSET(0x15985220)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DOHJHJFFDIA_OFFSET UNITYSDK_OFFSET(0x1598B980)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EDMGANHIEFO_OFFSET UNITYSDK_OFFSET(0x1598B9F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EFGANALGNFM_OFFSET UNITYSDK_OFFSET(0x159859C0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EHONJINCMKJ_OFFSET UNITYSDK_OFFSET(0x15985B70)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EMOLHAPCICH_OFFSET UNITYSDK_OFFSET(0x15984CA0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ENDFEVEREFFECT_OFFSET UNITYSDK_OFFSET(0x15981CA0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ENDSUPERBUBBLEEFFECT_OFFSET UNITYSDK_OFFSET(0x159820E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EPDCPFANBKL_OFFSET UNITYSDK_OFFSET(0x15983900)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EPJCDKJBNGI_OFFSET UNITYSDK_OFFSET(0x15984F00)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_FAAAIBFBDGD_OFFSET UNITYSDK_OFFSET(0x15984D30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_FGFNEBIIEPC_OFFSET UNITYSDK_OFFSET(0x159843C0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_FNCJGHHIOOH_OFFSET UNITYSDK_OFFSET(0x1598B260)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_FPBMCJNCPLB_OFFSET UNITYSDK_OFFSET(0x1598B3B0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GAPNKAHAHDM_OFFSET UNITYSDK_OFFSET(0x15984960)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GCJAIFHHDKC_OFFSET UNITYSDK_OFFSET(0x1598AE30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GDAHHNEDIAK_OFFSET UNITYSDK_OFFSET(0x15983540)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x15984A40)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GET_ISTICKING_OFFSET UNITYSDK_OFFSET(0x15982350)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_HDFFECOKLLP_OFFSET UNITYSDK_OFFSET(0x15982CA0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_HEBMNCBCMAA_OFFSET UNITYSDK_OFFSET(0x159857C0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IAHEEMOAHNG_OFFSET UNITYSDK_OFFSET(0x15987E30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IBEDFPDGIMG_OFFSET UNITYSDK_OFFSET(0x15987BB0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IHFJNEPGKLI_OFFSET UNITYSDK_OFFSET(0x1598B820)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IJNLOJCGHOM_OFFSET UNITYSDK_OFFSET(0x15983DB0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IKIAPJEHNNI_OFFSET UNITYSDK_OFFSET(0x1598AD30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IMKKPGPEEMK_OFFSET UNITYSDK_OFFSET(0x1598AAF0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_INITSCREENEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x15981990)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_JAEOKIDADKF_OFFSET UNITYSDK_OFFSET(0x15981FA0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_JAMNOLCIMFL_OFFSET UNITYSDK_OFFSET(0x15989890)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_JJMLDLMHOCA_OFFSET UNITYSDK_OFFSET(0x1598B0A0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_JKKONNLMPFI_OFFSET UNITYSDK_OFFSET(0x159894E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_JOMMCPAANKP_OFFSET UNITYSDK_OFFSET(0x15988A10)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_KFAODJLEHNL_OFFSET UNITYSDK_OFFSET(0x1598AA90)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_KFIKAOEBHHK_OFFSET UNITYSDK_OFFSET(0x15985F30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_KMINHGHEBHF_OFFSET UNITYSDK_OFFSET(0x15983670)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_KPBGGIILEEH_OFFSET UNITYSDK_OFFSET(0x15989380)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_LJDJEDFLKJP_OFFSET UNITYSDK_OFFSET(0x1598A420)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_MBEEBLKJPDG_OFFSET UNITYSDK_OFFSET(0x1598B030)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_MECPLBHGFBO_OFFSET UNITYSDK_OFFSET(0x15984C20)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_MJBJPOLKLJF_OFFSET UNITYSDK_OFFSET(0x1598B1F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_MKOKDLGAMGL_OFFSET UNITYSDK_OFFSET(0x1598AAE0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NGMFKAPKBLB_OFFSET UNITYSDK_OFFSET(0x15984460)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NIBCPIAGEPH_OFFSET UNITYSDK_OFFSET(0x15984630)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NJHLCPJIMCM_OFFSET UNITYSDK_OFFSET(0x159864D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NLPGEFAAJGN_OFFSET UNITYSDK_OFFSET(0x15989CB0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NMLFGOFFLJG_OFFSET UNITYSDK_OFFSET(0x15989AA0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NOLBGNDAHFI_OFFSET UNITYSDK_OFFSET(0x159848F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_OMMAGKBFJMF_OFFSET UNITYSDK_OFFSET(0x159897F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x159837D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15983BD0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15983860)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x159829F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15982B90)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_OPBNLMONMCE_OFFSET UNITYSDK_OFFSET(0x15984880)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PJIAEAHIHHM_OFFSET UNITYSDK_OFFSET(0x15988B60)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYFEVERSTARTEFFECT_OFFSET UNITYSDK_OFFSET(0x15981C00)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYSUPERBUBBLESTARTEFFECT_OFFSET UNITYSDK_OFFSET(0x15981ED0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_REFRESHCOMBO_OFFSET UNITYSDK_OFFSET(0x15988240)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETDATAWHENRESTART_OFFSET UNITYSDK_OFFSET(0x15984A90)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETSOSETTING_OFFSET UNITYSDK_OFFSET(0x15984DB0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWBADBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x15986890)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWBADBUBBLE_OFFSET UNITYSDK_OFFSET(0x159867F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCLEARALLBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x15987680)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCLEARALLBUBBLE_OFFSET UNITYSDK_OFFSET(0x159875E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWENTEREFFECT_OFFSET UNITYSDK_OFFSET(0x159823E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWFEVERTIPSDIALOG_OFFSET UNITYSDK_OFFSET(0x15981B20)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWMULTICLICKBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x159861F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWMULTICLICKBUBBLE_OFFSET UNITYSDK_OFFSET(0x15986140)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWNORMALBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x15985500)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWNORMALBUBBLE_OFFSET UNITYSDK_OFFSET(0x15985460)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWPLAYEREFFECT_OFFSET UNITYSDK_OFFSET(0x15982360)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSUPERBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x15986FC0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSUPERBUBBLE_OFFSET UNITYSDK_OFFSET(0x15986F20)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_STARTFEVERAPPEAR_OFFSET UNITYSDK_OFFSET(0x159888D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_STARTFEVERUPDATE_OFFSET UNITYSDK_OFFSET(0x15987B10)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SWITCHUISHOW_OFFSET UNITYSDK_OFFSET(0x15985090)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRYTRIGGERAVATARANIMCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15988C90)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATECOMBOCOUNT_OFFSET UNITYSDK_OFFSET(0x159882F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATECOMBOMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x15988440)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATESCORE_OFFSET UNITYSDK_OFFSET(0x15987C70)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15984150)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_WAITUNTILTIMECURSOR_OFFSET UNITYSDK_OFFSET(0x15982280)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15988D20)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15989170)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x159891C0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x159891F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15989230)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15989270)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController_TypeDefinitionIndex = 46760;

	class UICinemaSinglePlayWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Threading::CancellationTokenSource* BIMDLDPJPFB; // 0x2C8
		::UnityEngine::Material* OFBNPMEEHGE; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* LCJKNEJMAKC; // 0x2D8
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::Material*>* MGPLNDKKPDO; // 0x2E0
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* GHPBLBHHBIH; // 0x2E8
		::MoleMole::UICinemaFeverTipsWidgetController* LFACPEGPDBG; // 0x2F0
		::System::Single LBNJEKMCCAO; // 0x2F8
		::System::Boolean ONMLHFMBHHC; // 0x2FC
		::System::Byte _padding0[0x3];
		::MoleMole::Battle::Entity* PCJDDDAJOIF; // 0x300
		::MoleMole::Battle::Entity* EOALDHFLEJG; // 0x308
		::BHJBJDALADJ* _view; // 0x310
		::AIPAFAGLLGH* OOKOBNHNHHO; // 0x318
		::BHJBJDALADJ_DBIAMJPELBD* CODJJPANBDE; // 0x320
		::BHJBJDALADJ_ONHBKJHMBOF* BNCDMAIGKLK; // 0x328
		::BHJBJDALADJ_FOFHOPCMLJK* GFAHCIGNNCG; // 0x330
		::MoleMole::UICinemaSingleSuperBubbleWidgetController* HGDONJKICEO; // 0x338
		::MoleMole::UICinemaSinglePlayWidgetController_ComboShowState NBCBCCEEBCG; // 0x340
		::System::Byte _padding1[0x4];
		::System::String* BLJBAABMFEE; // 0x348
		::System::String* KNBPKNGFCHO; // 0x350
		::System::String* PGMALFDHKAL; // 0x358
		::System::String* MCDAFEHCHMF; // 0x360
		::System::String* CBIBBPOMNCP; // 0x368
		::System::Int32 IPBGHDPOIMP; // 0x370
		::BGHFICOEKBH GPKIEIGDLOG; // 0x374
		::System::Int32 NIMAEKHCJOM; // 0x378
		::System::Single ICPOKCBFONJ; // 0x37C
		::UnityEngine::Material* ENMMNMKLCHM; // 0x380
		::System::Boolean JEHGMJPBOAJ; // 0x388
		::System::Byte _padding2[0x7];
		::UnityEngine::RectTransform* AIBIPKLKOPH; // 0x390
		::System::Single OFFEDIHFKOL; // 0x398
		::System::Single KNMOCENJJAD; // 0x39C
		::System::Single BHPMFKJFDHC; // 0x3A0
		::System::Boolean NADMMBKGACH; // 0x3A4
		::System::Byte _padding3[0x3];
		::System::Single EOCCICEJLNA; // 0x3A8
		::System::Single IPCHKDCMECP; // 0x3AC
		::System::Single GEKNFBOCCBG; // 0x3B0
		::System::Byte _padding4[0x4];
		::System::Action* EIKCHLDLKMF; // 0x3B8
		::System::Action* FFJGBNBLICI; // 0x3C0
		::System::Single NENLHDBOPOJ; // 0x3C8
		::System::Single PKMKLMMKPBE; // 0x3CC
		::System::String* FAJIFALPBAI; // 0x3D0
		::System::String* JOIJJALDNNM; // 0x3D8
		::System::Action* IPCHNHCOMEF; // 0x3E0
		::System::Boolean EHDCCDCFHFD; // 0x3E8
		::System::Byte _padding5[0x3];
		::System::Single MOKILNNBPOC; // 0x3EC
		::System::Single PEONBEFFNLC; // 0x3F0
		::System::Byte _padding6[0x4];
		::System::Action* EJICKLGHMJJ; // 0x3F8
		::System::Collections::Generic::List_1<::MoleMole::UICinemaPlayBubble01WidgetController*>* BBPHHODOAAK; // 0x400
		::System::Collections::Generic::List_1<::MoleMole::UICinemaPlayBubble01RightWidgetController*>* CNHKPPIKPLD; // 0x408
		::System::Collections::Generic::List_1<::MoleMole::UICinemaSingleMultiClickBubbleWidgetController*>* PMPODMFMIOE; // 0x410
		::System::Collections::Generic::List_1<::MoleMole::UICinemaSingleMultiClickBubbleRightWidgetController*>* BJCPBLAJJPJ; // 0x418
		::System::Collections::Generic::List_1<::MoleMole::UICinemaSingleBadBubbleWidgetController*>* GKJONMLHNMC; // 0x420
		::System::Collections::Generic::List_1<::MoleMole::UICinemaSingleClearAllBubbleWidgetController*>* IMDCKOMJCGE; // 0x428
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNIPCMOBODO*>* ANELOMKMDDN; // 0x430
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KKLPDFEIALP; // 0x438
		::System::Collections::Generic::List_1<::FNIPCMOBODO*>* ANNDPBFHLNA; // 0x440
		::System::Single EFBJFHOFNAA; // 0x448
		::System::Single BBEMAOJIAJD; // 0x44C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitScreenEffectParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_INITSCREENEFFECTPARAMS_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayFeverStartEffect()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYFEVERSTARTEFFECT_OFFSET))(this);
		}

		::System::Void EndFeverEffect(::System::Boolean isDestroyImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ENDFEVEREFFECT_OFFSET))(this, isDestroyImmediate);
		}

		::System::Void PlaySuperBubbleStartEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYSUPERBUBBLESTARTEFFECT_OFFSET))(this);
		}

		::System::Void EndSuperBubbleEffect(::System::Boolean isDestroyImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ENDSUPERBUBBLEEFFECT_OFFSET))(this, isDestroyImmediate);
		}

		::System::Void DestoryEffectEntity(::MoleMole::Battle::Entity* effectEntity, ::System::Boolean isDestroyImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DESTORYEFFECTENTITY_OFFSET))(this, effectEntity, isDestroyImmediate);
		}

		::Cysharp::Threading::Tasks::UniTask ShowFeverTipsDialog(::System::Boolean show, ::System::Single delayTime)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWFEVERTIPSDIALOG_OFFSET))(this, show, delayTime);
		}

		::Cysharp::Threading::Tasks::UniTask WaitUntilTimeCursor(::System::Single resumeTime, ::System::Threading::CancellationToken token, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_WAITUNTILTIMECURSOR_OFFSET))(this, resumeTime, token, timing);
		}

		::System::Boolean get_IsTicking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GET_ISTICKING_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid ShowPlayerEffect(::DBOMIGCHIIK effectTypeEnum, ::System::Boolean isShow)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::DBOMIGCHIIK, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWPLAYEREFFECT_OFFSET))(this, effectTypeEnum, isShow);
		}

		::System::Void ShowEnterEffect(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWENTEREFFECT_OFFSET))(this, isShow);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::BHJBJDALADJ* GetView()
		{
			return ((::BHJBJDALADJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void ResetDataWhenRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETDATAWHENRESTART_OFFSET))(this);
		}

		::System::Void ResetSOSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETSOSETTING_OFFSET))(this);
		}

		::System::Void SwitchUIShow(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SWITCHUISHOW_OFFSET))(this, isShow);
		}

		::System::Void ShowNormalBubble(::JMFJFDOMCBC* bubbleEvent, ::System::String* textmapText, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::JMFJFDOMCBC*, ::System::String*, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWNORMALBUBBLE_OFFSET))(this, bubbleEvent, textmapText, onClick);
		}

		::System::Void ShowNormalBubble_1(::JMFJFDOMCBC* bubbleEvent, ::System::String* textmapText, ::System::Int32 bubbleLocation, ::System::Single timeDuration, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::JMFJFDOMCBC*, ::System::String*, ::System::Int32, ::System::Single, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWNORMALBUBBLE_1_OFFSET))(this, bubbleEvent, textmapText, bubbleLocation, timeDuration, item, onClick);
		}

		::System::Void ShowMultiClickBubble(::ONPJILHALGP* bubbleEvent, ::System::String* textmapText, ::System::Int32 hitNum, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::ONPJILHALGP*, ::System::String*, ::System::Int32, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWMULTICLICKBUBBLE_OFFSET))(this, bubbleEvent, textmapText, hitNum, onClick);
		}

		::System::Void ShowMultiClickBubble_1(::ONPJILHALGP* bubbleEvent, ::System::String* textmapText, ::System::Int32 hitNum, ::System::Int32 bubbleLocation, ::System::Single timeDuration, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::ONPJILHALGP*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWMULTICLICKBUBBLE_1_OFFSET))(this, bubbleEvent, textmapText, hitNum, bubbleLocation, timeDuration, item, onClick);
		}

		::System::Void ShowBadBubble(::LMOLGOKJEBI* bubbleEvent, ::System::String* textmapText, ::System::Func_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::LMOLGOKJEBI*, ::System::String*, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWBADBUBBLE_OFFSET))(this, bubbleEvent, textmapText, onClick);
		}

		::System::Void ShowBadBubble_1(::LMOLGOKJEBI* bubbleEvent, ::System::String* textmapText, ::System::Int32 bubbleLocation, ::System::Single timeDuration, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item, ::System::Func_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::LMOLGOKJEBI*, ::System::String*, ::System::Int32, ::System::Single, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWBADBUBBLE_1_OFFSET))(this, bubbleEvent, textmapText, bubbleLocation, timeDuration, item, onClick);
		}

		::System::Void ShowSuperBubble(::BJKJAPBBLBB* bubbleEvent, ::System::String* textmapText, ::System::Int32 hitNum, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::BJKJAPBBLBB*, ::System::String*, ::System::Int32, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSUPERBUBBLE_OFFSET))(this, bubbleEvent, textmapText, hitNum, onClick);
		}

		::System::Void ShowSuperBubble_1(::BJKJAPBBLBB* bubbleEvent, ::System::String* textmapText, ::System::Int32 hitNum, ::System::Single timeDuration, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::BJKJAPBBLBB*, ::System::String*, ::System::Int32, ::System::Single, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSUPERBUBBLE_1_OFFSET))(this, bubbleEvent, textmapText, hitNum, timeDuration, onClick);
		}

		::System::Void ShowClearAllBubble(::NJJKOJFKACE* bubbleEvent, ::System::String* textmapText, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::NJJKOJFKACE*, ::System::String*, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCLEARALLBUBBLE_OFFSET))(this, bubbleEvent, textmapText, onClick);
		}

		::System::Void ShowClearAllBubble_1(::NJJKOJFKACE* bubbleEvent, ::System::String* textmapText, ::System::Int32 bubbleLocation, ::System::Single timeDuration, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::NJJKOJFKACE*, ::System::String*, ::System::Int32, ::System::Single, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCLEARALLBUBBLE_1_OFFSET))(this, bubbleEvent, textmapText, bubbleLocation, timeDuration, item, onClick);
		}

		::System::Void StartFeverUpdate(::MJCPKGJHMMN* feverEvent, ::System::Action* onFeverEnd)
		{
			return ((::System::Void(*)(::PVOID, ::MJCPKGJHMMN*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_STARTFEVERUPDATE_OFFSET))(this, feverEvent, onFeverEnd);
		}

		::System::Void UpdateScore(::System::Int32 score, ::BGHFICOEKBH level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BGHFICOEKBH))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATESCORE_OFFSET))(this, score, level);
		}

		::System::Void RefreshCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_REFRESHCOMBO_OFFSET))(this);
		}

		::System::Void UpdateComboCount(::System::Int32 newCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATECOMBOCOUNT_OFFSET))(this, newCount);
		}

		::System::Void UpdateComboMultiplier(::System::Single newMulti)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATECOMBOMULTIPLIER_OFFSET))(this, newMulti);
		}

		::System::Void StartFeverAppear(::FKLKNBBLJDF* feverAppearEvent)
		{
			return ((::System::Void(*)(::PVOID, ::FKLKNBBLJDF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_STARTFEVERAPPEAR_OFFSET))(this, feverAppearEvent);
		}

		::System::Boolean TryTriggerAvatarAnimCountdown(::System::Single totalAnimTime, ::System::Action* onFinish)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRYTRIGGERAVATARANIMCOUNTDOWN_OFFSET))(this, totalAnimTime, onFinish);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CEMGFAPFGKK(::System::Boolean KFMLCHBNNCK, ::System::Action* PABLEDCGDGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_CEMGFAPFGKK_OFFSET))(this, KFMLCHBNNCK, PABLEDCGDGM);
		}

		::System::Void KPBGGIILEEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_KPBGGIILEEH_OFFSET))(this);
		}

		::System::Void JOMMCPAANKP(::System::Single JBCGJJFKNJJ, ::System::Single LBMCALAIAKO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_JOMMCPAANKP_OFFSET))(this, JBCGJJFKNJJ, LBMCALAIAKO);
		}

		::System::Void EMOLHAPCICH(::System::Boolean FFJGINOKODO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EMOLHAPCICH_OFFSET))(this, FFJGINOKODO);
		}

		::System::Void JKKONNLMPFI(::System::Single JDCMMJOJECK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_JKKONNLMPFI_OFFSET))(this, JDCMMJOJECK);
		}

		::System::Void OMMAGKBFJMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_OMMAGKBFJMF_OFFSET))(this);
		}

		::System::Void HDFFECOKLLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_HDFFECOKLLP_OFFSET))(this);
		}

		::System::Void DMCJJKKHGIH(::System::Boolean KFMLCHBNNCK, ::System::Action* PABLEDCGDGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DMCJJKKHGIH_OFFSET))(this, KFMLCHBNNCK, PABLEDCGDGM);
		}

		::System::Collections::Generic::List_1<::System::String*>* NMLFGOFFLJG(::System::Int32 HFAFFNLNAJE)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NMLFGOFFLJG_OFFSET))(this, HFAFFNLNAJE);
		}

		::System::Void NLPGEFAAJGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NLPGEFAAJGN_OFFSET))(this);
		}

		::System::Boolean KFAODJLEHNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_KFAODJLEHNL_OFFSET))(this);
		}

		::System::Boolean IJNLOJCGHOM(::MoleMole::InputActionEvent MLNBANAGAEE, ::System::Int32 FIFFECCKMMK)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IJNLOJCGHOM_OFFSET))(this, MLNBANAGAEE, FIFFECCKMMK);
		}

		::System::Void KFIKAOEBHHK(::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem IPMMCGDMODG, ::System::Int32 LHDHLAEPFBH, ::System::Boolean IHKNCMCPHLG, ::FNIPCMOBODO* GFPCNLJGFBG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Int32, ::System::Boolean, ::FNIPCMOBODO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_KFIKAOEBHHK_OFFSET))(this, IPMMCGDMODG, LHDHLAEPFBH, IHKNCMCPHLG, GFPCNLJGFBG);
		}

		::System::Void NIBCPIAGEPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NIBCPIAGEPH_OFFSET))(this);
		}

		::System::Void FAAAIBFBDGD(::System::Boolean KGKLPPNJKAF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_FAAAIBFBDGD_OFFSET))(this, KGKLPPNJKAF);
		}

		::System::Void MKOKDLGAMGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_MKOKDLGAMGL_OFFSET))(this);
		}

		::System::Void GAPNKAHAHDM(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GAPNKAHAHDM_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void CJACHNHJKJN(::System::Boolean IHKNCMCPHLG, ::System::Action* PABLEDCGDGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_CJACHNHJKJN_OFFSET))(this, IHKNCMCPHLG, PABLEDCGDGM);
		}

		::System::Void LJDJEDFLKJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_LJDJEDFLKJP_OFFSET))(this);
		}

		::System::Void AFDCPDHNGFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_AFDCPDHNGFJ_OFFSET))(this);
		}

		::System::Void IMKKPGPEEMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IMKKPGPEEMK_OFFSET))(this);
		}

		::System::Void DKBOIOMEEHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DKBOIOMEEHK_OFFSET))(this);
		}

		::System::Void MECPLBHGFBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_MECPLBHGFBO_OFFSET))(this);
		}

		::MoleMole::UICinemaBubbleBaseContext* EFGANALGNFM(::System::String* CGMHGJNKMBM, ::System::Int32 FIFFECCKMMK, ::System::Int32 CMAGCIKBBKC, ::System::Single MLKBFGHCHIP, ::System::Action* BNEFENIHCIC, ::System::Func_1<::System::Int32>* BFOMBFMONJG, ::System::Action* GOHLKLOADNI)
		{
			return ((::MoleMole::UICinemaBubbleBaseContext*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Action*, ::System::Func_1<::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EFGANALGNFM_OFFSET))(this, CGMHGJNKMBM, FIFFECCKMMK, CMAGCIKBBKC, MLKBFGHCHIP, BNEFENIHCIC, BFOMBFMONJG, GOHLKLOADNI);
		}

		::System::Void DOAGDPEJKML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DOAGDPEJKML_OFFSET))(this);
		}

		::System::Void IAHEEMOAHNG(::System::Int32 LEDAGDKOMID, ::Il2CppArray<::System::Boolean>*& MBLBEMKOCEK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Boolean>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IAHEEMOAHNG_OFFSET))(this, LEDAGDKOMID, MBLBEMKOCEK);
		}

		::FNIPCMOBODO* NJHLCPJIMCM(::System::Boolean FNIFPJJDEME, ::UnityEngine::Transform* GENLJONBPLJ, ::MoleMole::UICinemaBubbleBaseContext* AAOCANGHBDG)
		{
			return ((::FNIPCMOBODO*(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::MoleMole::UICinemaBubbleBaseContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NJHLCPJIMCM_OFFSET))(this, FNIFPJJDEME, GENLJONBPLJ, AAOCANGHBDG);
		}

		::System::Void KMINHGHEBHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_KMINHGHEBHF_OFFSET))(this);
		}

		::System::Void AHNMMNCODBH(::System::Boolean JKBLDFBGBPK, ::System::Boolean NHKIIMFCDFD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_AHNMMNCODBH_OFFSET))(this, JKBLDFBGBPK, NHKIIMFCDFD);
		}

		::System::Void ABBPAFECBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ABBPAFECBGJ_OFFSET))(this);
		}

		::System::Void IKIAPJEHNNI(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IKIAPJEHNNI_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void GCJAIFHHDKC(::UnityEngine::Transform* JHMGPHMJPLG, ::UnityEngine::UI::Extension::UILocalizationText* KBDJAMBKEMK, ::UnityEngine::UI::Extension::UILocalizationText* ABCHKGNNKJK, ::UnityEngine::UI::Extension::UILocalizationText* HNHELHJNELL)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GCJAIFHHDKC_OFFSET))(this, JHMGPHMJPLG, KBDJAMBKEMK, ABCHKGNNKJK, HNHELHJNELL);
		}

		::UnityEngine::Camera* MBEEBLKJPDG()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_MBEEBLKJPDG_OFFSET))(this);
		}

		::System::Void EPDCPFANBKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EPDCPFANBKL_OFFSET))(this);
		}

		::System::Void NGMFKAPKBLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NGMFKAPKBLB_OFFSET))(this);
		}

		::System::Boolean FGFNEBIIEPC(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_FGFNEBIIEPC_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Boolean JJMLDLMHOCA(::System::Int32 LHDHLAEPFBH)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_JJMLDLMHOCA_OFFSET))(this, LHDHLAEPFBH);
		}

		::System::Void MJBJPOLKLJF(::BHJBJDALADJ_DJMEPLCJPBO* EEGIKMMHOLE)
		{
			return ((::System::Void(*)(::PVOID, ::BHJBJDALADJ_DJMEPLCJPBO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_MJBJPOLKLJF_OFFSET))(this, EEGIKMMHOLE);
		}

		::System::Void FNCJGHHIOOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_FNCJGHHIOOH_OFFSET))(this);
		}

		::MoleMole::UICinemaBubbleBaseContext* ADPPCHDBFPD(::System::String* CGMHGJNKMBM, ::System::Int32 FIFFECCKMMK, ::System::Int32 CMAGCIKBBKC, ::System::Single MLKBFGHCHIP, ::System::Action* BNEFENIHCIC, ::System::Func_1<::System::Int32>* BFOMBFMONJG)
		{
			return ((::MoleMole::UICinemaBubbleBaseContext*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Action*, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ADPPCHDBFPD_OFFSET))(this, CGMHGJNKMBM, FIFFECCKMMK, CMAGCIKBBKC, MLKBFGHCHIP, BNEFENIHCIC, BFOMBFMONJG);
		}

		::System::Void JAMNOLCIMFL(::System::Boolean CPHDDAGKHLB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_JAMNOLCIMFL_OFFSET))(this, CPHDDAGKHLB);
		}

		::System::Void GDAHHNEDIAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GDAHHNEDIAK_OFFSET))(this);
		}

		::System::Void EPJCDKJBNGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EPJCDKJBNGI_OFFSET))(this);
		}

		::System::Void DAEDLGBHKMP(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DAEDLGBHKMP_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void NOLBGNDAHFI(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_NOLBGNDAHFI_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void COCDDGIDPPI(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_COCDDGIDPPI_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void FPBMCJNCPLB(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_FPBMCJNCPLB_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void JAEOKIDADKF(::System::Boolean JKBLDFBGBPK, ::System::Boolean NHKIIMFCDFD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_JAEOKIDADKF_OFFSET))(this, JKBLDFBGBPK, NHKIIMFCDFD);
		}

		::System::Void DFEJCLKKIHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DFEJCLKKIHJ_OFFSET))(this);
		}

		::BHJBJDALADJ_DJMEPLCJPBO* HEBMNCBCMAA(::System::Int32 OBFPIIJBGKK)
		{
			return ((::BHJBJDALADJ_DJMEPLCJPBO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_HEBMNCBCMAA_OFFSET))(this, OBFPIIJBGKK);
		}

		::System::Void IHFJNEPGKLI(::System::Int32 LKNDODFAAMM, ::System::Single JCJILJMPADN, ::UnityEngine::Transform* GCPOLAIBHHF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IHFJNEPGKLI_OFFSET))(this, LKNDODFAAMM, JCJILJMPADN, GCPOLAIBHHF);
		}

		::System::Void DOHJHJFFDIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DOHJHJFFDIA_OFFSET))(this);
		}

		::System::Void PJIAEAHIHHM(::System::Single MCFLFONBJLG, ::System::Single CCFCJPNBFNM, ::System::Action* DOAGNEBAIJN, ::System::Action* PENGKFLBEFK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PJIAEAHIHHM_OFFSET))(this, MCFLFONBJLG, CCFCJPNBFNM, DOAGNEBAIJN, PENGKFLBEFK);
		}

		::FNIPCMOBODO* EHONJINCMKJ(::System::Boolean FNIFPJJDEME, ::UnityEngine::Transform* GENLJONBPLJ, ::MoleMole::UICinemaBubbleBaseContext* AAOCANGHBDG)
		{
			return ((::FNIPCMOBODO*(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::MoleMole::UICinemaBubbleBaseContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EHONJINCMKJ_OFFSET))(this, FNIFPJJDEME, GENLJONBPLJ, AAOCANGHBDG);
		}

		::System::Void IBEDFPDGIMG(::System::String* KPIAFDELPJL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_IBEDFPDGIMG_OFFSET))(this, KPIAFDELPJL);
		}

		::System::Boolean AEENDFBMJFN(::MoleMole::InputActionEvent MLNBANAGAEE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_AEENDFBMJFN_OFFSET))(this, MLNBANAGAEE);
		}

		::System::String* EDMGANHIEFO(::DBOMIGCHIIK LNAMPFKDHII)
		{
			return ((::System::String*(*)(::PVOID, ::DBOMIGCHIIK))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_EDMGANHIEFO_OFFSET))(this, LNAMPFKDHII);
		}

		::System::Void AMFDEFEPGBN(::System::Int32 LHDHLAEPFBH, ::System::Boolean POCDIGOGBOJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_AMFDEFEPGBN_OFFSET))(this, LHDHLAEPFBH, POCDIGOGBOJ);
		}

		::System::Void OPBNLMONMCE(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_OPBNLMONMCE_OFFSET))(this, PMNLNNGEIFM);
		}
	};
}
