#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IFEABBJBIGK;
namespace RPG::Client::FateRin::View::Battle { class FateRinBattleHudHandCardLayout; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCFCB700)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW_PLAYFIREOUTFLOWFROMWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xCFBB340)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW_PLAYFIREOUTFLOW_OFFSET UNITYSDK_OFFSET(0xCFBB0B0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW__PLAYFIREOUTFLOW_OFFSET UNITYSDK_OFFSET(0xCFCAEB0)

namespace RPG::Client::FateRin::View::Battle
{
	class FateRinFireOutCardFlowView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _AnimationDuration; // 0x18
		::System::Single _ReflowDuration; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW_CTOR_OFFSET))(this);
		}

		::IFEABBJBIGK* PlayFireOutFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a2, ::RPG::Client::Promises::IPendingPromise* a3)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW_PLAYFIREOUTFLOW_OFFSET))(this, a1, a2, a3);
		}

		::IFEABBJBIGK* PlayFireOutFlowFromWorldPosition(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW_PLAYFIREOUTFLOWFROMWORLDPOSITION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::IFEABBJBIGK* _PlayFireOutFlow(::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout* a2, ::System::Nullable* a3, ::System::Nullable* a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*, ::RPG::Client::FateRin::View::Battle::FateRinBattleHudHandCardLayout*, ::System::Nullable*, ::System::Nullable*, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINFIREOUTCARDFLOWVIEW__PLAYFIREOUTFLOW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
}
