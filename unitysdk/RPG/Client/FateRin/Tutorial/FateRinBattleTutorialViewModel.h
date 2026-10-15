#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALIACDLNBJB;
class EAHCLJPMCIG;
class NDNDJODCDEP;
class OBJANKHLNGO;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_ADD_ONTUTORIALSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xCFB29F0)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCFB2460)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCFB25F0)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GETENEMYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xCFB27A0)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_CARDINDEX_OFFSET UNITYSDK_OFFSET(0xCFB26C0)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0xCFB2730)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xCFB2650)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_REMOVE_ONTUTORIALSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xCFB2A50)
#define RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL__ONRULECHANGED_OFFSET UNITYSDK_OFFSET(0xCFB2AB0)

namespace RPG::Client::FateRin::Tutorial
{
	inline static constexpr unsigned int FateRinBattleTutorialViewModel_TypeDefinitionIndex = 80721;

	class FateRinBattleTutorialViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::ViewModelEventHandler* OnTutorialStateChanged; // 0x20
		::EAHCLJPMCIG* _BattleGameState; // 0x28
		::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* _HitTestService; // 0x30
		::ALIACDLNBJB* _TutorialService; // 0x38
		::OBJANKHLNGO* _Messenger; // 0x40
		::System::Void _ctor(::ALIACDLNBJB* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::EAHCLJPMCIG* a3, ::OBJANKHLNGO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::ALIACDLNBJB*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::EAHCLJPMCIG*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Int32 get_CardIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_CARDINDEX_OFFSET))(this);
		}

		::System::Int32 get_EnemyIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GET_ENEMYINDEX_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetEnemyWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_GETENEMYWORLDPOSITION_OFFSET))(this);
		}

		::System::Void add_OnTutorialStateChanged(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_ADD_ONTUTORIALSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnTutorialStateChanged(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL_REMOVE_ONTUTORIALSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnRuleChanged(::NDNDJODCDEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDNDJODCDEP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_TUTORIAL_FATERINBATTLETUTORIALVIEWMODEL__ONRULECHANGED_OFFSET))(this, a1);
		}

	};
}
