#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
class CMAMEPBHDDP;
class KAPEMBCNNIG;
class LDMBNFAMCOI;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTargetSingleViewModel; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCECCCA0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCECD380)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__GETCONFIG_OFFSET UNITYSDK_OFFSET(0xCECD630)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__ONBATTLEENEMYSTATEMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCECD5A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__REFRESHVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCECCD90)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudTargetViewModel_TypeDefinitionIndex = 80935;

	class FateRinBattleHudTargetViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::LDMBNFAMCOI* _EnemyModel; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::KAPEMBCNNIG*>* _CrosshairConfigDict; // 0x28
		::OBJANKHLNGO* _Messenger; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel*>* TargetViewModelList; // 0x38
		::System::Void _ctor(::LDMBNFAMCOI* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDMBNFAMCOI*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleEnemyStateModelChangeMessage(::CMAMEPBHDDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMAMEPBHDDP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__ONBATTLEENEMYSTATEMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__REFRESHVIEWMODEL_OFFSET))(this);
		}

		::KAPEMBCNNIG* _GetConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::KAPEMBCNNIG*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL__GETCONFIG_OFFSET))(this, a1);
		}

	};
}
