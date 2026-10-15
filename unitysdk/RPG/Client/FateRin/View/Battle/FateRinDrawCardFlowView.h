#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FFMDBJLLDGD;
class IFEABBJBIGK;
class MDBOGJINCFP;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCFC8DE0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_EOIAPAJEFID_OFFSET UNITYSDK_OFFSET(0xCFC8100)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_IPACKPCDCNM_OFFSET UNITYSDK_OFFSET(0xCFC87D0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_JAGKJANLDHE_OFFSET UNITYSDK_OFFSET(0xCFC8A50)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_LFIHODPAAKJ_OFFSET UNITYSDK_OFFSET(0xCFC8B30)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_MJAPNODPFNO_OFFSET UNITYSDK_OFFSET(0xCFC8900)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_OJBIECAKAII_OFFSET UNITYSDK_OFFSET(0xCFC8680)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_OKKBGCHBCDK_OFFSET UNITYSDK_OFFSET(0xCFC8C80)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_PLAYDRAWFLOW_OFFSET UNITYSDK_OFFSET(0xCFB96A0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___CREATEBTNDRAWPLAYACTIONCOMMAND_B__11_0_OFFSET UNITYSDK_OFFSET(0xCFC8E40)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinDrawCardFlowView_TypeDefinitionIndex = 80683;

	class FateRinDrawCardFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _BtnDrawTransform; // 0x18
		::UnityEngine::Animation* _BtnDrawAnimation; // 0x20
		::System::Single _StaggerInterval; // 0x28
		::System::Single _DrawFlyDurationA; // 0x2C
		::System::Single _DrawFlyDurationB; // 0x30
		::UnityEngine::Vector3 _DrawFlyMidLocalOffset; // 0x34
		::System::String* _DrawFlyEaseNameA; // 0x40
		::System::String* _DrawFlyEaseNameB; // 0x48
		::System::Single _ReflowDuration; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_CTOR_OFFSET))(this);
		}

		::IFEABBJBIGK* PlayDrawFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a3, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a4, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a5, ::MDBOGJINCFP* a6, ::RPG::Client::Promises::IPendingPromise* a7)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::MDBOGJINCFP*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_PLAYDRAWFLOW_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::IFEABBJBIGK* EOIAPAJEFID(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a2, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a3, ::System::Boolean a4, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a5, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a6, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a7)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::System::Boolean, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_EOIAPAJEFID_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::IFEABBJBIGK* IPACKPCDCNM()
		{
			return ((::IFEABBJBIGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_IPACKPCDCNM_OFFSET))(this);
		}

		static ::IFEABBJBIGK* OJBIECAKAII(::MDBOGJINCFP* a1, ::System::String* a2)
		{
			return ((::IFEABBJBIGK*(*)(::MDBOGJINCFP*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_OJBIECAKAII_OFFSET))(a1, a2);
		}

		::IFEABBJBIGK* LFIHODPAAKJ(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_LFIHODPAAKJ_OFFSET))(this, a1);
		}

		::FFMDBJLLDGD* JAGKJANLDHE()
		{
			return ((::FFMDBJLLDGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_JAGKJANLDHE_OFFSET))(this);
		}

		::IFEABBJBIGK* MJAPNODPFNO(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a1)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_MJAPNODPFNO_OFFSET))(this, a1);
		}

		::RPG::Client::MonoAnimationTrigger* OKKBGCHBCDK(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW_OKKBGCHBCDK_OFFSET))(this, a1);
		}

		::System::Void __CreateBtnDrawPlayActionCommand_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___CREATEBTNDRAWPLAYACTIONCOMMAND_B__11_0_OFFSET))(this);
		}

	};
}
