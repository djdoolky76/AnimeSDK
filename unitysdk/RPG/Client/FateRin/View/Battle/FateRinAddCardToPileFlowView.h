#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IFEABBJBIGK;
class MDBOGJINCFP;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardDisplayViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_BMJBHGGJNPG_OFFSET UNITYSDK_OFFSET(0xCFB5480)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_BMKMGCNDHHD_OFFSET UNITYSDK_OFFSET(0xCFB7BD0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_CMIFCJODJHE_OFFSET UNITYSDK_OFFSET(0xCFB76F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCFB82B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_EOIAPAJEFID_OFFSET UNITYSDK_OFFSET(0xCFB7280)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_FBBDNOBFJFB_OFFSET UNITYSDK_OFFSET(0xCFB7580)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_HBLKJOJEMLJ_OFFSET UNITYSDK_OFFSET(0xCFB7D00)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_ICMLFCMMOCG_OFFSET UNITYSDK_OFFSET(0xCFB6980)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_JGELEBDHDGN_OFFSET UNITYSDK_OFFSET(0xCFB79C0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_LAIAJLNAMEP_OFFSET UNITYSDK_OFFSET(0xCFB7C90)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_LFIHODPAAKJ_OFFSET UNITYSDK_OFFSET(0xCFB6AD0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_MLECEAKNAAF_OFFSET UNITYSDK_OFFSET(0xCFB7FE0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_NGJMAMNHOMP_OFFSET UNITYSDK_OFFSET(0xCFB6D10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_OJBIECAKAII_OFFSET UNITYSDK_OFFSET(0xCFB7840)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_OKKBGCHBCDK_OFFSET UNITYSDK_OFFSET(0xCFB6C20)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYADDCARDTODISCARDPILEFLOW_OFFSET UNITYSDK_OFFSET(0xCFB60F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYADDCARDTODRAWPILEFLOW_OFFSET UNITYSDK_OFFSET(0xCFB5380)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYPROJECTIONREPLICATEFLOW_OFFSET UNITYSDK_OFFSET(0xCFB61E0)

namespace RPG::Client::FateRin::View::Battle
{
	class FateRinAddCardToPileFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _BtnDrawTransform; // 0x18
		::UnityEngine::RectTransform* _BtnDropTransform; // 0x20
		::UnityEngine::Animation* _BtnDrawAnimation; // 0x28
		::UnityEngine::Animation* _BtnDropAnimation; // 0x30
		::System::Single _TemporaryCardHoldDuration; // 0x38
		::System::Single _StaggerInterval; // 0x3C
		::UnityEngine::Vector3 _TrailMidLocalOffset; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_CTOR_OFFSET))(this);
		}

		::IFEABBJBIGK* PlayAddCardToDrawPileFlow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYADDCARDTODRAWPILEFLOW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::IFEABBJBIGK* PlayAddCardToDiscardPileFlow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::MDBOGJINCFP* a5, ::RPG::Client::Promises::IPendingPromise* a6)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::MDBOGJINCFP*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYADDCARDTODISCARDPILEFLOW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::IFEABBJBIGK* PlayProjectionReplicateFlow(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Action* a2)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_PLAYPROJECTIONREPLICATEFLOW_OFFSET))(this, a1, a2);
		}

		::IFEABBJBIGK* BMJBHGGJNPG(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::UnityEngine::RectTransform* a5, ::UnityEngine::Animation* a6, ::System::String* a7, ::System::Boolean a8, ::MDBOGJINCFP* a9, ::RPG::Client::Promises::IPendingPromise* a10)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::UnityEngine::RectTransform*, ::UnityEngine::Animation*, ::System::String*, ::System::Boolean, ::MDBOGJINCFP*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_BMJBHGGJNPG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::IFEABBJBIGK* CMIFCJODJHE(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::System::Object* a2)
		{
			return ((::IFEABBJBIGK*(*)(::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_CMIFCJODJHE_OFFSET))(a1, a2);
		}

		static ::IFEABBJBIGK* OJBIECAKAII(::MDBOGJINCFP* a1, ::System::String* a2)
		{
			return ((::IFEABBJBIGK*(*)(::MDBOGJINCFP*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_OJBIECAKAII_OFFSET))(a1, a2);
		}

		::IFEABBJBIGK* EOIAPAJEFID(::UnityEngine::RectTransform* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a3, ::UnityEngine::RectTransform* a4, ::UnityEngine::Animation* a5, ::System::String* a6, ::System::Boolean a7, ::System::Object* a8)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::UnityEngine::RectTransform*, ::UnityEngine::Animation*, ::System::String*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_EOIAPAJEFID_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::UnityEngine::Vector3 JGELEBDHDGN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_JGELEBDHDGN_OFFSET))(this, a1, a2);
		}

		static ::IFEABBJBIGK* FBBDNOBFJFB(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a2, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a3, ::System::Object* a4)
		{
			return ((::IFEABBJBIGK*(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_FBBDNOBFJFB_OFFSET))(a1, a2, a3, a4);
		}

		static ::IFEABBJBIGK* LFIHODPAAKJ(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::String* a2)
		{
			return ((::IFEABBJBIGK*(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_LFIHODPAAKJ_OFFSET))(a1, a2);
		}

		static ::IFEABBJBIGK* ICMLFCMMOCG(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Boolean a2)
		{
			return ((::IFEABBJBIGK*(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_ICMLFCMMOCG_OFFSET))(a1, a2);
		}

		static ::System::Void BMKMGCNDHHD(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_BMKMGCNDHHD_OFFSET))(a1, a2);
		}

		static ::System::Void LAIAJLNAMEP(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_LAIAJLNAMEP_OFFSET))(a1, a2);
		}

		static ::System::Void HBLKJOJEMLJ(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_HBLKJOJEMLJ_OFFSET))(a1);
		}

		static ::System::Void MLECEAKNAAF(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_MLECEAKNAAF_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MonoAnimationTrigger* OKKBGCHBCDK(::UnityEngine::RectTransform* a1)
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_OKKBGCHBCDK_OFFSET))(a1);
		}

		static ::System::Boolean NGJMAMNHOMP(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardDisplayViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOPILEFLOWVIEW_NGJMAMNHOMP_OFFSET))(a1);
		}

	};
}
