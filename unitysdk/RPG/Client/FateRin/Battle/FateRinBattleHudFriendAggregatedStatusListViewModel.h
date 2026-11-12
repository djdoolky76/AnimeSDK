#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudFriendAggregatedStatusListViewModel___c__DisplayClass4_0.h"
class AADIBKNAJJI;
class AOFHFKPKKJI;
class CBJILMHOMGP;
class ELDKPCBCIIO;
class FEOJDGBAEDA;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD895E00)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD896630)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_GET_OPENSTATUSDETAILACTION_OFFSET UNITYSDK_OFFSET(0xD8970C0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_GET_STATUSES_OFFSET UNITYSDK_OFFSET(0xD897080)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xD8968D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__ONOPENDSTATUSDETAIL_OFFSET UNITYSDK_OFFSET(0xD896980)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__REFRESHSTATUSES_OFFSET UNITYSDK_OFFSET(0xD896000)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL___REFRESHSTATUSES_G___ADDSTATUSES_4_0_OFFSET UNITYSDK_OFFSET(0xD896AF0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFriendAggregatedStatusListViewModel_TypeDefinitionIndex = 83695;

	class FateRinBattleHudFriendAggregatedStatusListViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _Statuses_ReadOnly; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _Statuses; // 0x28
		::OBJANKHLNGO* _Messenger; // 0x30
		::AADIBKNAJJI* _Model; // 0x38
		::ELDKPCBCIIO* _UIPresentService; // 0x40
		::CBJILMHOMGP* _OpenStatusDetailAction_k__BackingField; // 0x48
		::System::Void _ctor(::AADIBKNAJJI* a1, ::OBJANKHLNGO* a2, ::ELDKPCBCIIO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AADIBKNAJJI*, ::OBJANKHLNGO*, ::ELDKPCBCIIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnBattleStatusesModelChangeMessage(::FEOJDGBAEDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEOJDGBAEDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnOpendStatusDetail(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__ONOPENDSTATUSDETAIL_OFFSET))(this, a1);
		}

		::System::Void _RefreshStatuses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL__REFRESHSTATUSES_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_Statuses()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_GET_STATUSES_OFFSET))(this);
		}

		::CBJILMHOMGP* get_OpenStatusDetailAction()
		{
			return ((::CBJILMHOMGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL_GET_OPENSTATUSDETAILACTION_OFFSET))(this);
		}

		::System::Void __RefreshStatuses_g___AddStatuses_4_0(::System::Collections::Generic::IEnumerable_1<::AOFHFKPKKJI*>* a1, ::RPG::Client::FateRin::Battle::FateRinBattleHudFriendAggregatedStatusListViewModel___c__DisplayClass4_0 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::AOFHFKPKKJI*>*, ::RPG::Client::FateRin::Battle::FateRinBattleHudFriendAggregatedStatusListViewModel___c__DisplayClass4_0))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDAGGREGATEDSTATUSLISTVIEWMODEL___REFRESHSTATUSES_G___ADDSTATUSES_4_0_OFFSET))(this, a1, a2);
		}

	};
}
