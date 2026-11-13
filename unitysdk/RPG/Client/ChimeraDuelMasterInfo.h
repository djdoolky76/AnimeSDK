#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELMASTERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6C730)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE6CD10)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CE6CDA0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_GETORDEREDMASTER_OFFSET UNITYSDK_OFFSET(0x1CE6CE50)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CE6C6F0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_GET_ISSKIPCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1CE6D780)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_GET_MASTERMONEY_OFFSET UNITYSDK_OFFSET(0x1CE6D740)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_SET_ISSKIPCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1CE6D790)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_SET_MASTERMONEY_OFFSET UNITYSDK_OFFSET(0x1CE6D110)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERMONEY_OFFSET UNITYSDK_OFFSET(0x1CE6D0C0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERPURCHASED_1_OFFSET UNITYSDK_OFFSET(0x1CE6D660)
#define RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERPURCHASED_OFFSET UNITYSDK_OFFSET(0x1CE6D1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelMasterInfo_TypeDefinitionIndex = 64811;

	class ChimeraDuelMasterInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelMasterData*>* _DataDict; // 0x10
		::System::Boolean _IsSkipConfirmDialog_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 _MasterMoney; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelMasterData*>* get_DataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraDuelMasterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_GET_DATADICT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelMasterData* GetData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_GETDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelMasterData*>* GetOrderedMaster()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelMasterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_GETORDEREDMASTER_OFFSET))(this);
		}

		::System::Void SyncMasterMoney(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERMONEY_OFFSET))(this, a1);
		}

		::System::Void SyncMasterPurchased(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERPURCHASED_OFFSET))(this, a1);
		}

		::System::Void SyncMasterPurchased_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_SYNCMASTERPURCHASED_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_MasterMoney()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_GET_MASTERMONEY_OFFSET))(this);
		}

		::System::Void set_MasterMoney(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_SET_MASTERMONEY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSkipConfirmDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_GET_ISSKIPCONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void set_IsSkipConfirmDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO_SET_ISSKIPCONFIRMDIALOG_OFFSET))(this, a1);
		}

	};
}
