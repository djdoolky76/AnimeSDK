#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class IOHBHDJGCPK;
namespace RPG::Client::ComicDessert { class ComicDessertDateItemViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D029EA0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_DATEITEMS_OFFSET UNITYSDK_OFFSET(0x1D02A000)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_REQUIREDCOIN_OFFSET UNITYSDK_OFFSET(0x1D02A150)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_REQUIREDCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D02A170)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_SHOWGREEDYBUBBLE_OFFSET UNITYSDK_OFFSET(0x1D02A2E0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_SPECIALGUESTSTATES_OFFSET UNITYSDK_OFFSET(0x1D02A1E0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_TITLEDESC_OFFSET UNITYSDK_OFFSET(0x1D02A0C0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1D02A0A0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_ISCUSTOMERGOAL_OFFSET UNITYSDK_OFFSET(0x1D02A190)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SETDATEITEMS_OFFSET UNITYSDK_OFFSET(0x1D02A040)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SETLEVELGOAL_OFFSET UNITYSDK_OFFSET(0x1D02A280)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SETSHOWGREEDYBUBBLE_OFFSET UNITYSDK_OFFSET(0x1D02A300)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SETSPECIALGUESTSTATES_OFFSET UNITYSDK_OFFSET(0x1D02A220)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SETTITLE_OFFSET UNITYSDK_OFFSET(0x1D02A0E0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SET_REQUIREDCOIN_OFFSET UNITYSDK_OFFSET(0x1D02A160)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SET_REQUIREDCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D02A180)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SET_SHOWGREEDYBUBBLE_OFFSET UNITYSDK_OFFSET(0x1D02A2F0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SET_TITLEDESC_OFFSET UNITYSDK_OFFSET(0x1D02A0D0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1D02A0B0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_STARTBUSINESS_OFFSET UNITYSDK_OFFSET(0x1D02A350)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDateDialogViewModel_TypeDefinitionIndex = 77109;

	class ComicDessertDateDialogViewModel : public ::System::Object
	{
	public:
		::IOHBHDJGCPK* _LevelStartFlowService; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* _SpecialGuestStates; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertDateItemViewModel*>* _DateItems; // 0x20
		::System::Boolean _ShowGreedyBubble_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 _RequiredCoin_k__BackingField; // 0x2C
		::System::UInt32 _RequiredCustomerCount_k__BackingField; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID _Title_k__BackingField; // 0x38
		::RPG::Client::TextID _TitleDesc_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertDateItemViewModel*>* get_DateItems()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertDateItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_DATEITEMS_OFFSET))(this);
		}

		::System::Void SetDateItems(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertDateItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ComicDessert::ComicDessertDateItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SETDATEITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SET_TITLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TitleDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_TITLEDESC_OFFSET))(this);
		}

		::System::Void set_TitleDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SET_TITLEDESC_OFFSET))(this, a1);
		}

		::System::Void SetTitle(::RPG::Client::TextID a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SETTITLE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RequiredCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_REQUIREDCOIN_OFFSET))(this);
		}

		::System::Void set_RequiredCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SET_REQUIREDCOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_RequiredCustomerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_REQUIREDCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::Void set_RequiredCustomerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SET_REQUIREDCUSTOMERCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean IsCustomerGoal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_ISCUSTOMERGOAL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_SpecialGuestStates()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_SPECIALGUESTSTATES_OFFSET))(this);
		}

		::System::Void SetSpecialGuestStates(::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SETSPECIALGUESTSTATES_OFFSET))(this, a1);
		}

		::System::Void SetLevelGoal(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SETLEVELGOAL_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ShowGreedyBubble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_GET_SHOWGREEDYBUBBLE_OFFSET))(this);
		}

		::System::Void set_ShowGreedyBubble(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SET_SHOWGREEDYBUBBLE_OFFSET))(this, a1);
		}

		::System::Void SetShowGreedyBubble(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_SETSHOWGREEDYBUBBLE_OFFSET))(this, a1);
		}

		::System::Void StartBusiness()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDATEDIALOGVIEWMODEL_STARTBUSINESS_OFFSET))(this);
		}

	};
}
