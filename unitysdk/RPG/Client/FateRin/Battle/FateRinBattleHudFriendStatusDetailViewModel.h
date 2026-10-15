#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/Client/TextID.h"
class AADIBKNAJJI;
class AOFHFKPKKJI;
class CEEGMMCFCBG;
class EAHCLJPMCIG;
class ELDKPCBCIIO;
class EOPFDKJOBIO;
class FEOJDGBAEDA;
class HPOCHBIJIHH;
class MALMDHMLGDE;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleModifierHintViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleStatusViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xCECEC90)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCECEA10)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCECF110)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_BUFFSTATUSLIST_OFFSET UNITYSDK_OFFSET(0xCED07B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_DEBUFFSTATUSLIST_OFFSET UNITYSDK_OFFSET(0xCED0800)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_ISSHOWDETAIL_OFFSET UNITYSDK_OFFSET(0xCED0900)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_LOCATESTATUSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCED08D0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_MODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0xCED0890)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_NAVIGATETOTEAMDETAIL_OFFSET UNITYSDK_OFFSET(0xCED08F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_OTHERSTATUSLIST_OFFSET UNITYSDK_OFFSET(0xCED0840)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xCED0730)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_ISSAMEWITHLOCATESTATUS_OFFSET UNITYSDK_OFFSET(0xCECF420)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_SET_LOCATESTATUSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCED08E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__DISPOSESTATUSLIST_OFFSET UNITYSDK_OFFSET(0xCECF190)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__GETALLSTATUSES_OFFSET UNITYSDK_OFFSET(0xCECFF20)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__NAVIGATETOTEAMDETAIL_OFFSET UNITYSDK_OFFSET(0xCED0660)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCECF4F0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHALLMODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0xCECEF30)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHMODIFIERHINTLIST_OFFSET UNITYSDK_OFFSET(0xCED00E0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHSTATUSLISTWITHALLTYPE_OFFSET UNITYSDK_OFFSET(0xCECEEB0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHSTATUSLIST_OFFSET UNITYSDK_OFFSET(0xCECF610)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudFriendStatusDetailViewModel_TypeDefinitionIndex = 80919;

	class FateRinBattleHudFriendStatusDetailViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _DebuffStatusList_ReadOnly; // 0x20
		::ELDKPCBCIIO* _UIPresentService; // 0x28
		::AADIBKNAJJI* _Model; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>* _ModifierHintList; // 0x38
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>* _ModifierHintList_ReadOnly; // 0x40
		::CEEGMMCFCBG* _NavigateToTeamDetail_k__BackingField; // 0x48
		::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* _LocateStatusViewModel_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _BuffStatusList; // 0x58
		::EOPFDKJOBIO* _Deck; // 0x60
		::OBJANKHLNGO* _Messenger; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _OtherStatusList; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _DebuffStatusList; // 0x78
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _BuffStatusList_ReadOnly; // 0x80
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* _OtherStatusList_ReadOnly; // 0x88
		::System::Void _ctor(::OBJANKHLNGO* a1, ::ELDKPCBCIIO* a2, ::EAHCLJPMCIG* a3, ::HPOCHBIJIHH* a4)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::ELDKPCBCIIO*, ::EAHCLJPMCIG*, ::HPOCHBIJIHH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _DisposeStatusList(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__DISPOSESTATUSLIST_OFFSET))(this, a1);
		}

		::System::Boolean IsSameWithLocateStatus(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_ISSAMEWITHLOCATESTATUS_OFFSET))(this, a1);
		}

		::System::Void _OnBattleStatusesModelChangeMessage(::FEOJDGBAEDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEOJDGBAEDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__ONBATTLESTATUSESMODELCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshStatusListWithAllType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHSTATUSLISTWITHALLTYPE_OFFSET))(this);
		}

		::System::Void _RefreshStatusList(::System::Object* a1, ::RPG::GameCore::EnumStatusType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHSTATUSLIST_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshAllModifierHintList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHALLMODIFIERHINTLIST_OFFSET))(this);
		}

		::System::Void _RefreshModifierHintList(::System::Collections::Generic::List_1<::MALMDHMLGDE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MALMDHMLGDE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__REFRESHMODIFIERHINTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::AOFHFKPKKJI*>* _GetAllStatuses()
		{
			return ((::System::Collections::Generic::List_1<::AOFHFKPKKJI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__GETALLSTATUSES_OFFSET))(this);
		}

		::System::Void _NavigateToTeamDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL__NAVIGATETOTEAMDETAIL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_BuffStatusList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_BUFFSTATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_DebuffStatusList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_DEBUFFSTATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>* get_OtherStatusList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_OTHERSTATUSLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>* get_ModifierHintList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::FateRin::Battle::IFateRinBattleModifierHintViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_MODIFIERHINTLIST_OFFSET))(this);
		}

		::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* get_LocateStatusViewModel()
		{
			return ((::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_LOCATESTATUSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_LocateStatusViewModel(::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleStatusViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_SET_LOCATESTATUSVIEWMODEL_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* get_NavigateToTeamDetail()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_NAVIGATETOTEAMDETAIL_OFFSET))(this);
		}

		::System::Boolean get_IsShowDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDFRIENDSTATUSDETAILVIEWMODEL_GET_ISSHOWDETAIL_OFFSET))(this);
		}

	};
}
