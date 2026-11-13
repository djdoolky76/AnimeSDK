#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class AADIBKNAJJI;
class BJMHJJIELLH;
class EAHCLJPMCIG;
class ELDKPCBCIIO;
class FEIPLKMMIOI;
class FOOFKOELLGH;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Avatar { class IFateRinBattleAvatarViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHealthViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCEC090)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DCEC230)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_AGGREGATEDSTATUSES_OFFSET UNITYSDK_OFFSET(0x1DCEC680)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_MASTER_OFFSET UNITYSDK_OFFSET(0x1DCEC690)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0x1DCEC6A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_TEAMHEALTH_OFFSET UNITYSDK_OFFSET(0x1DCEC670)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFriendAreaViewModel_TypeDefinitionIndex = 83697;

	class FateRinBattleHudFriendAreaViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel* _Servant_k__BackingField; // 0x20
		::RPG::Client::FateRin::Battle::IFateRinBattleHealthViewModel* _TeamHealth_k__BackingField; // 0x28
		::FOOFKOELLGH* _AggregatedStatuses_k__BackingField; // 0x30
		::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel* _Master_k__BackingField; // 0x38
		::System::Void _ctor(::AADIBKNAJJI* a1, ::EAHCLJPMCIG* a2, ::BJMHJJIELLH* a3, ::FEIPLKMMIOI* a4, ::OBJANKHLNGO* a5, ::ELDKPCBCIIO* a6)
		{
			return ((::System::Void(*)(::PVOID, ::AADIBKNAJJI*, ::EAHCLJPMCIG*, ::BJMHJJIELLH*, ::FEIPLKMMIOI*, ::OBJANKHLNGO*, ::ELDKPCBCIIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleHealthViewModel* get_TeamHealth()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleHealthViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_TEAMHEALTH_OFFSET))(this);
		}

		::FOOFKOELLGH* get_AggregatedStatuses()
		{
			return ((::FOOFKOELLGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_AGGREGATEDSTATUSES_OFFSET))(this);
		}

		::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel* get_Master()
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_MASTER_OFFSET))(this);
		}

		::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel* get_Servant()
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinBattleAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAREAVIEWMODEL_GET_SERVANT_OFFSET))(this);
		}

	};
}
