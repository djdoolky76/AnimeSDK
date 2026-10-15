#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IFEABBJBIGK;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardPileBtnViewModel; }
namespace RPG::Client::FateRin::View::Battle { class FateRinEffectController; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_BIAJIILMHON_OFFSET UNITYSDK_OFFSET(0xCFCC090)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_BOPHIHGFLPJ_OFFSET UNITYSDK_OFFSET(0xCFCBF10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_CGOGLKBHCDP_OFFSET UNITYSDK_OFFSET(0xCFCC000)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCFCC120)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_GHLGBCGGGGG_OFFSET UNITYSDK_OFFSET(0xCFCB8E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_PLAYSHUFFLEFLOW_OFFSET UNITYSDK_OFFSET(0xCFBB510)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinShuffleTrailEffectView_TypeDefinitionIndex = 80698;

	class FateRinShuffleTrailEffectView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _StartPoint; // 0x18
		::UnityEngine::RectTransform* _MidPoint; // 0x20
		::UnityEngine::RectTransform* _EndPoint; // 0x28
		::UnityEngine::Animation* _BtnDrawAnimation; // 0x30
		::UnityEngine::Animation* _BtnDropAnimation; // 0x38
		::System::Int32 _Count; // 0x40
		::System::Single _Interval; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_CTOR_OFFSET))(this);
		}

		::IFEABBJBIGK* PlayShuffleFlow(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel* a2, ::System::Int32 a3, ::System::Int32 a4, ::RPG::Client::Promises::IPendingPromise* a5)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardPileBtnViewModel*, ::System::Int32, ::System::Int32, ::RPG::Client::Promises::IPendingPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_PLAYSHUFFLEFLOW_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::IFEABBJBIGK* GHLGBCGGGGG(::RPG::Client::FateRin::View::Battle::FateRinEffectController* a1, ::System::Object* a2)
		{
			return ((::IFEABBJBIGK*(*)(::PVOID, ::RPG::Client::FateRin::View::Battle::FateRinEffectController*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_GHLGBCGGGGG_OFFSET))(this, a1, a2);
		}

		::System::Void CGOGLKBHCDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_CGOGLKBHCDP_OFFSET))(this);
		}

		::System::Void BIAJIILMHON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_BIAJIILMHON_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 BOPHIHGFLPJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINSHUFFLETRAILEFFECTVIEW_BOPHIHGFLPJ_OFFSET))(a1, a2, a3);
		}

	};
}
