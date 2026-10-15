#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class IFEABBJBIGK;
class MDBOGJINCFP;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCFC7DC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_EFPDEKDOOBF_OFFSET UNITYSDK_OFFSET(0xCFC7D30)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_EOIAPAJEFID_OFFSET UNITYSDK_OFFSET(0xCFC6F80)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_JACOGOCONFL_OFFSET UNITYSDK_OFFSET(0xCFC66D0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_JGELEBDHDGN_OFFSET UNITYSDK_OFFSET(0xCFC7A00)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_LFIHODPAAKJ_OFFSET UNITYSDK_OFFSET(0xCFC78B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_OJBIECAKAII_OFFSET UNITYSDK_OFFSET(0xCFC7750)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_OKKBGCHBCDK_OFFSET UNITYSDK_OFFSET(0xCFC7BE0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_PLAYDISCARDFLOWFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xCFBAE40)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_PLAYDISCARDFLOW_OFFSET UNITYSDK_OFFSET(0xCFBAAF0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDiscardCardFlowView_TypeDefinitionIndex = 80678;

	class FateRinDiscardCardFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _BtnDropTransform; // 0x18
		::UnityEngine::Animation* _BtnDropAnimation; // 0x20
		::System::Single _StaggerInterval; // 0x28
		::UnityEngine::Vector3 _TrailMidLocalOffset; // 0x2C
		::System::Single _ReflowDuration; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_CTOR_OFFSET))(this);
		}

		::IFEABBJBIGK* PlayDiscardFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::MDBOGJINCFP* a5, ::RPG::Client::Promises::IPendingPromise* a6)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::MDBOGJINCFP*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_PLAYDISCARDFLOW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::IFEABBJBIGK* PlayDiscardFlowFromWorldPosition(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::MDBOGJINCFP* a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Quaternion a7, ::RPG::Client::Promises::IPendingPromise* a8)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::MDBOGJINCFP*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_PLAYDISCARDFLOWFROMWORLDPOSITION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::IFEABBJBIGK* JACOGOCONFL(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::MDBOGJINCFP* a5, ::System::Nullable* a6, ::System::Nullable* a7, ::RPG::Client::Promises::IPendingPromise* a8)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::MDBOGJINCFP*, ::System::Nullable*, ::System::Nullable*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_JACOGOCONFL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::IFEABBJBIGK* EOIAPAJEFID(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Boolean a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a5, ::System::Object* a6, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a7, ::System::Nullable* a8, ::System::Nullable* a9)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Boolean, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::System::Object*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::System::Nullable*, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_EOIAPAJEFID_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::UnityEngine::Vector3 JGELEBDHDGN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_JGELEBDHDGN_OFFSET))(this, a1, a2);
		}

		::IFEABBJBIGK* LFIHODPAAKJ(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_LFIHODPAAKJ_OFFSET))(this, a1);
		}

		static ::IFEABBJBIGK* OJBIECAKAII(::MDBOGJINCFP* a1, ::System::String* a2)
		{
			return ((::IFEABBJBIGK*(*)(::MDBOGJINCFP*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_OJBIECAKAII_OFFSET))(a1, a2);
		}

		::System::Void EFPDEKDOOBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_EFPDEKDOOBF_OFFSET))(this);
		}

		::RPG::Client::MonoAnimationTrigger* OKKBGCHBCDK(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDISCARDCARDFLOWVIEW_OKKBGCHBCDK_OFFSET))(this, a1);
		}

	};
}
