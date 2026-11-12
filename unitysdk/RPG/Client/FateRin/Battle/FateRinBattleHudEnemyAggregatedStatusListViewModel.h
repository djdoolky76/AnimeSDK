#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudEnemyAggregatedStatusListViewModel___c__DisplayClass4_0.h"
class AOFHFKPKKJI;
class CBJILMHOMGP;
class ECNEEKNHIOE;
class ELDKPCBCIIO;
class FEOJDGBAEDA;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD8914D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD891CA0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_GET_OPENSTATUSDETAILACTION_OFFSET UNITYSDK_OFFSET(0xD892740)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_GET_STATUSES_OFFSET UNITYSDK_OFFSET(0xD892700)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD891F40)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__ONOPENDSTATUSDETAIL_OFFSET UNITYSDK_OFFSET(0xD891FC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__REFRESHSTATUSES_OFFSET UNITYSDK_OFFSET(0xD8916D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL___REFRESHSTATUSES_G___ADDSTATUSES_4_0_OFFSET UNITYSDK_OFFSET(0xD892170)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudEnemyAggregatedStatusListViewModel_TypeDefinitionIndex = 83686;

	class FateRinBattleHudEnemyAggregatedStatusListViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _Statuses; // 0x20
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _Statuses_ReadOnly; // 0x28
		::OBJANKHLNGO* _Messenger; // 0x30
		::CBJILMHOMGP* _OpenStatusDetailAction_k__BackingField; // 0x38
		::ECNEEKNHIOE* _Model; // 0x40
		::ELDKPCBCIIO* _UIPresentService; // 0x48
		::System::Void _ctor(::ECNEEKNHIOE* a1, ::OBJANKHLNGO* a2, ::ELDKPCBCIIO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*, ::OBJANKHLNGO*, ::ELDKPCBCIIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleStatusesModelChangeMessage(::FEOJDGBAEDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEOJDGBAEDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnOpendStatusDetail(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__ONOPENDSTATUSDETAIL_OFFSET))(this, a1);
		}

		::System::Void _RefreshStatuses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL__REFRESHSTATUSES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_Statuses()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_GET_STATUSES_OFFSET))(this);
		}

		::CBJILMHOMGP* get_OpenStatusDetailAction()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL_GET_OPENSTATUSDETAILACTION_OFFSET))(this);
		}

		::System::Void __RefreshStatuses_g___AddStatuses_4_0(::System::Collections::Generic::IEnumerable_1<::AOFHFKPKKJI*>* a1, ::RPG::Client::FateRin::Battle::FateRinBattleHudEnemyAggregatedStatusListViewModel___c__DisplayClass4_0 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::AOFHFKPKKJI*>*, ::RPG::Client::FateRin::Battle::FateRinBattleHudEnemyAggregatedStatusListViewModel___c__DisplayClass4_0))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYAGGREGATEDSTATUSLISTVIEWMODEL___REFRESHSTATUSES_G___ADDSTATUSES_4_0_OFFSET))(this, a1, a2);
		}

	};
}
