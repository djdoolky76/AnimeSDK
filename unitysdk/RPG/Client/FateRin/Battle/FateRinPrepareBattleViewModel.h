#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class CBJILMHOMGP;
class CEEGMMCFCBG;
class DEGELHCLDJB;
class EBEHJBOGLII;
class ELDKPCBCIIO;
class HPOCHBIJIHH;
class MAMLJFHHHBN;
namespace RPG::Client { class UIController; }
namespace RPG::Client::FateRin::Battle { class FateRinPrepareBattleFriendAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class PrepareBattleMonsterViewModel; }
namespace RPG::Client::FateRin::Battle { class PrepareBattleTalkViewModel; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0xCED57F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCED52F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_CLOSE_OFFSET UNITYSDK_OFFSET(0xCED6560)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_EDITDECK_OFFSET UNITYSDK_OFFSET(0xCED6550)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_FRIENDAREA_OFFSET UNITYSDK_OFFSET(0xCED64F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_ISHARDMODE_OFFSET UNITYSDK_OFFSET(0xCED6520)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_ISHOUGUMAPFIGHT_OFFSET UNITYSDK_OFFSET(0xCED64E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_MONSTER_OFFSET UNITYSDK_OFFSET(0xCED6510)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_TALK_OFFSET UNITYSDK_OFFSET(0xCED6530)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_TRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0xCED6540)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_SETSELECTEASYMODE_OFFSET UNITYSDK_OFFSET(0xCED60A0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_SET_FRIENDAREA_OFFSET UNITYSDK_OFFSET(0xCED6500)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__CLOSE_OFFSET UNITYSDK_OFFSET(0xCED6480)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__EDITDECK_OFFSET UNITYSDK_OFFSET(0xCED6370)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__TRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0xCED60F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL___EDITDECK_B__4_0_OFFSET UNITYSDK_OFFSET(0xCED6570)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinPrepareBattleViewModel_TypeDefinitionIndex = 80979;

	class FateRinPrepareBattleViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::ELDKPCBCIIO* _UIPresentService; // 0x20
		::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel* _Talk_k__BackingField; // 0x28
		::CEEGMMCFCBG* _EditDeck_k__BackingField; // 0x30
		::DEGELHCLDJB* _OwnerVmFactory; // 0x38
		::RPG::Client::FateRin::Battle::PrepareBattleMonsterViewModel* _Monster_k__BackingField; // 0x40
		::HPOCHBIJIHH* _DeckRepository; // 0x48
		::MAMLJFHHHBN* _HouguMapService; // 0x50
		::RPG::Client::FateRin::Battle::FateRinPrepareBattleFriendAreaViewModel* _FriendArea_k__BackingField; // 0x58
		::CBJILMHOMGP* _Close_k__BackingField; // 0x60
		::EBEHJBOGLII* _ChallengeService; // 0x68
		::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* _HouguMapFight; // 0x70
		::CEEGMMCFCBG* _TriggerBattle_k__BackingField; // 0x78
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ChallengeBuffIDs; // 0x80
		::System::Boolean _IsSelectEasyMode; // 0x88
		::System::Boolean _IsHardMode_k__BackingField; // 0x89
		::System::Boolean _IsHouguMapFight_k__BackingField; // 0x8A
		::System::Byte _padding0[0x1];
		::System::UInt32 _ChallengeFightID; // 0x8C
		::System::Void _ctor(::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* a1, ::MAMLJFHHHBN* a2, ::HPOCHBIJIHH* a3, ::DEGELHCLDJB* a4, ::ELDKPCBCIIO* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*, ::MAMLJFHHHBN*, ::HPOCHBIJIHH*, ::DEGELHCLDJB*, ::ELDKPCBCIIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::EBEHJBOGLII* a3, ::HPOCHBIJIHH* a4, ::DEGELHCLDJB* a5, ::ELDKPCBCIIO* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::EBEHJBOGLII*, ::HPOCHBIJIHH*, ::DEGELHCLDJB*, ::ELDKPCBCIIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SetSelectEasyMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_SETSELECTEASYMODE_OFFSET))(this, a1);
		}

		::System::Void _TriggerBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__TRIGGERBATTLE_OFFSET))(this);
		}

		::System::Void _EditDeck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__EDITDECK_OFFSET))(this);
		}

		::System::Void _Close(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL__CLOSE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHouguMapFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_ISHOUGUMAPFIGHT_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::FateRinPrepareBattleFriendAreaViewModel* get_FriendArea()
		{
			return ((::RPG::Client::FateRin::Battle::FateRinPrepareBattleFriendAreaViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_FRIENDAREA_OFFSET))(this);
		}

		::System::Void set_FriendArea(::RPG::Client::FateRin::Battle::FateRinPrepareBattleFriendAreaViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinPrepareBattleFriendAreaViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_SET_FRIENDAREA_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Battle::PrepareBattleMonsterViewModel* get_Monster()
		{
			return ((::RPG::Client::FateRin::Battle::PrepareBattleMonsterViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_MONSTER_OFFSET))(this);
		}

		::System::Boolean get_IsHardMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_ISHARDMODE_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel* get_Talk()
		{
			return ((::RPG::Client::FateRin::Battle::PrepareBattleTalkViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_TALK_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_TriggerBattle()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_TRIGGERBATTLE_OFFSET))(this);
		}

		::CEEGMMCFCBG* get_EditDeck()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_EDITDECK_OFFSET))(this);
		}

		::CBJILMHOMGP* get_Close()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL_GET_CLOSE_OFFSET))(this);
		}

		::System::Void __EditDeck_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINPREPAREBATTLEVIEWMODEL___EDITDECK_B__4_0_OFFSET))(this);
		}

	};
}
