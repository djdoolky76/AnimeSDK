#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class IFEABBJBIGK;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCFC63E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_DCEJKNGIJMK_OFFSET UNITYSDK_OFFSET(0xCFC5650)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_HBLKJOJEMLJ_OFFSET UNITYSDK_OFFSET(0xCFC5E20)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_ICMLFCMMOCG_OFFSET UNITYSDK_OFFSET(0xCFC51A0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_JEJIIAODIOK_OFFSET UNITYSDK_OFFSET(0xCFC5D70)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_KJCMEDCODHG_OFFSET UNITYSDK_OFFSET(0xCFC5520)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_LFIHODPAAKJ_1_OFFSET UNITYSDK_OFFSET(0xCFC5C10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_LFIHODPAAKJ_OFFSET UNITYSDK_OFFSET(0xCFC52F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_MLECEAKNAAF_OFFSET UNITYSDK_OFFSET(0xCFC6110)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_OKKBGCHBCDK_OFFSET UNITYSDK_OFFSET(0xCFC5440)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_PLAYSTACKABLEADDCARDTOHANDFLOW_OFFSET UNITYSDK_OFFSET(0xCFB2560)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinStackableAddCardToHandFlowView_TypeDefinitionIndex = 80699;

	class FateRinStackableAddCardToHandFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _FlyDuration; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* _FlyEaseName; // 0x20
		::System::Single _ReflowDuration; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_CTOR_OFFSET))(this);
		}

		::IFEABBJBIGK* PlayStackableAddCardToHandFlow(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a3, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_PLAYSTACKABLEADDCARDTOHANDFLOW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::IFEABBJBIGK* KJCMEDCODHG(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::IFEABBJBIGK*(*)(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_KJCMEDCODHG_OFFSET))(a1);
		}

		::IFEABBJBIGK* DCEJKNGIJMK(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_DCEJKNGIJMK_OFFSET))(this, a1, a2, a3);
		}

		::IFEABBJBIGK* JEJIIAODIOK(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_JEJIIAODIOK_OFFSET))(this, a1, a2);
		}

		static ::IFEABBJBIGK* LFIHODPAAKJ(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::String* a2)
		{
			return ((::IFEABBJBIGK*(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_LFIHODPAAKJ_OFFSET))(a1, a2);
		}

		static ::IFEABBJBIGK* LFIHODPAAKJ_1(::UnityEngine::RectTransform* a1, ::System::String* a2)
		{
			return ((::IFEABBJBIGK*(*)(::UnityEngine::RectTransform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_LFIHODPAAKJ_1_OFFSET))(a1, a2);
		}

		static ::System::Void HBLKJOJEMLJ(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_HBLKJOJEMLJ_OFFSET))(a1);
		}

		static ::IFEABBJBIGK* ICMLFCMMOCG(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Boolean a2)
		{
			return ((::IFEABBJBIGK*(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_ICMLFCMMOCG_OFFSET))(a1, a2);
		}

		static ::System::Void MLECEAKNAAF(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::RectTransform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_MLECEAKNAAF_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MonoAnimationTrigger* OKKBGCHBCDK(::UnityEngine::RectTransform* a1)
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSTACKABLEADDCARDTOHANDFLOWVIEW_OKKBGCHBCDK_OFFSET))(a1);
		}

	};
}
