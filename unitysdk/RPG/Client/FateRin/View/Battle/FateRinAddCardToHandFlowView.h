#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IFEABBJBIGK;
namespace RPG::Client { class MonoAnimationTrigger; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_CMIFCJODJHE_OFFSET UNITYSDK_OFFSET(0xCFB3CA0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCFB42F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_DCEJKNGIJMK_OFFSET UNITYSDK_OFFSET(0xCFB3E00)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_GET_SPAWNANCHORTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCFB2B20)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_KEJIMFPNCPM_OFFSET UNITYSDK_OFFSET(0xCFB3870)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_LFIHODPAAKJ_OFFSET UNITYSDK_OFFSET(0xCFB39E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_NGJMAMNHOMP_OFFSET UNITYSDK_OFFSET(0xCFB32A0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_OKKBGCHBCDK_OFFSET UNITYSDK_OFFSET(0xCFB3B70)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_PLAYADDCARDTOHANDFLOW_OFFSET UNITYSDK_OFFSET(0xCFB2B60)

namespace RPG::Client::FateRin::View::Battle
{
	class FateRinAddCardToHandFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _FlyDuration; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* _FlyEaseName; // 0x20
		::System::Single _ReflowDuration; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* _SpawnAnchorTransform; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_SpawnAnchorTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_GET_SPAWNANCHORTRANSFORM_OFFSET))(this);
		}

		::IFEABBJBIGK* PlayAddCardToHandFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a2, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a3, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a4, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a5, ::RPG::Client::Promises::IPendingPromise* a6)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_PLAYADDCARDTOHANDFLOW_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::IFEABBJBIGK* CMIFCJODJHE(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::System::Object* a2)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_CMIFCJODJHE_OFFSET))(this, a1, a2);
		}

		::IFEABBJBIGK* KEJIMFPNCPM(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a2, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a3)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_KEJIMFPNCPM_OFFSET))(this, a1, a2, a3);
		}

		::IFEABBJBIGK* DCEJKNGIJMK(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a2)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_DCEJKNGIJMK_OFFSET))(this, a1, a2);
		}

		::IFEABBJBIGK* LFIHODPAAKJ(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinEffectController* a2, ::System::Object* a3, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a4)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_LFIHODPAAKJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::MonoAnimationTrigger* OKKBGCHBCDK(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1)
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_OKKBGCHBCDK_OFFSET))(this, a1);
		}

		static ::System::Boolean NGJMAMNHOMP(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINADDCARDTOHANDFLOWVIEW_NGJMAMNHOMP_OFFSET))(a1);
		}

	};
}
