#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFMGKIIDMJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GFJABFBIFKL.h"
#include "unitysdk/JMCEHJCEHEB.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EAHCLJPMCIG;
class ECNEEKNHIOE;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_CLEARFREECARDHITTARGET_OFFSET UNITYSDK_OFFSET(0xCFBD860)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0xCFBD6A0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_GETENEMYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xCFAA9C0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_HITTESTCARDS_OFFSET UNITYSDK_OFFSET(0xCFBD8B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_HITTESTENEMY_OFFSET UNITYSDK_OFFSET(0xCFBDC30)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINCANCELAREA_OFFSET UNITYSDK_OFFSET(0xCFBF1B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINFREECARDAREA_OFFSET UNITYSDK_OFFSET(0xCFBF2F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINSELECTAREA_OFFSET UNITYSDK_OFFSET(0xCFBEF40)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINSWITCHAREA_OFFSET UNITYSDK_OFFSET(0xCFBF250)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETCARDPOSCOMPS_OFFSET UNITYSDK_OFFSET(0xCFBD740)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETFREECARDHITTARGET_OFFSET UNITYSDK_OFFSET(0xCFBD800)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETHANDAREA_OFFSET UNITYSDK_OFFSET(0xCFBD790)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TRYGETADJACENTTARGETENEMY_OFFSET UNITYSDK_OFFSET(0xCFBED40)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TRYGETFIRSTTARGETENEMY_OFFSET UNITYSDK_OFFSET(0xCFBE960)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__CANNAVIGATETOENEMY_OFFSET UNITYSDK_OFFSET(0xCFBE110)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__FINDTARGETENEMYNAVIGATIONCANDIDATEINDEX_OFFSET UNITYSDK_OFFSET(0xCFBEE90)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__GETCURRENTACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xCFBF410)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISENTITYSTEALTH_OFFSET UNITYSDK_OFFSET(0xCFBF4B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISPOINTINCARDHITAREAS_OFFSET UNITYSDK_OFFSET(0xCFBDAC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISPOINTINRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCFBEFE0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__RAYCASTTOCOLLIDER_OFFSET UNITYSDK_OFFSET(0xCFBE2D0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__REBUILDTARGETENEMYNAVIGATIONCANDIDATES_OFFSET UNITYSDK_OFFSET(0xCFBEA00)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__SHOULDUSEFREECARDHITRECT_OFFSET UNITYSDK_OFFSET(0xCFBF3D0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__TRYGETENEMYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xCFBE710)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinCardHitTestService_TypeDefinitionIndex = 80675;

	class FateRinCardHitTestService : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* _FreeCardHitCard; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* _CardPosComps; // 0x18
		::UnityEngine::RectTransform* _PlayArea; // 0x20
		::EAHCLJPMCIG* _BattleModel; // 0x28
		::UnityEngine::RectTransform* _CancelArea; // 0x30
		::UnityEngine::RectTransform* _FreeCardHitRect; // 0x38
		::UnityEngine::RectTransform* _SwitchArea; // 0x40
		::System::Collections::Generic::List_1<::AFMGKIIDMJL>* _TargetEnemyNavigationCandidates; // 0x48
		::System::Void _ctor(::EAHCLJPMCIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAHCLJPMCIG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_CTOR_OFFSET))(this, a1);
		}

		::System::Void SetCardPosComps(::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETCARDPOSCOMPS_OFFSET))(this, a1);
		}

		::System::Void SetHandArea(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETHANDAREA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFreeCardHitTarget(::UnityEngine::RectTransform* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETFREECARDHITTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void ClearFreeCardHitTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_CLEARFREECARDHITTARGET_OFFSET))(this);
		}

		::JMCEHJCEHEB HitTestCards(::System::Single a1, ::System::Single a2)
		{
			return ((::JMCEHJCEHEB(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_HITTESTCARDS_OFFSET))(this, a1, a2);
		}

		::GFJABFBIFKL HitTestEnemy(::System::Single a1, ::System::Single a2)
		{
			return ((::GFJABFBIFKL(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_HITTESTENEMY_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetFirstTargetEnemy(::AFMGKIIDMJL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFMGKIIDMJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TRYGETFIRSTTARGETENEMY_OFFSET))(this, a1);
		}

		::System::Boolean TryGetAdjacentTargetEnemy(::System::UInt32 a1, ::System::Int32 a2, ::AFMGKIIDMJL a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::AFMGKIIDMJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TRYGETADJACENTTARGETENEMY_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetEnemyWorldPosition(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_GETENEMYWORLDPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean IsInSelectArea(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINSELECTAREA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInCancelArea(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINCANCELAREA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInSwitchArea(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINSWITCHAREA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInFreeCardArea(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINFREECARDAREA_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsPointInRectTransform(::System::Single a1, ::System::Single a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISPOINTINRECTTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsPointInCardHitAreas(::System::Single a1, ::System::Single a2, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISPOINTINCARDHITAREAS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean _ShouldUseFreeCardHitRect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__SHOULDUSEFREECARDHITRECT_OFFSET))();
		}

		::System::Void _RebuildTargetEnemyNavigationCandidates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__REBUILDTARGETENEMYNAVIGATIONCANDIDATES_OFFSET))(this);
		}

		static ::System::Boolean _CanNavigateToEnemy(::ECNEEKNHIOE* a1)
		{
			return ((::System::Boolean(*)(::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__CANNAVIGATETOENEMY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* _GetCurrentActionEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__GETCURRENTACTIONENTITY_OFFSET))(a1);
		}

		static ::System::Boolean _TryGetEnemyWorldPosition(::ECNEEKNHIOE* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::ECNEEKNHIOE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__TRYGETENEMYWORLDPOSITION_OFFSET))(a1, a2);
		}

		::System::Int32 _FindTargetEnemyNavigationCandidateIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__FINDTARGETENEMYNAVIGATIONCANDIDATEINDEX_OFFSET))(this, a1);
		}

		::System::Boolean _RaycastToCollider(::UnityEngine::Ray a1, ::UnityEngine::Collider* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Collider*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__RAYCASTTOCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean _IsEntityStealth(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISENTITYSTEALTH_OFFSET))(a1);
		}

	};
}
