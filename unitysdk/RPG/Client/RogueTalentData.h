#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOCBDCIBNMG;
class KLAEMDDHPNB;
class OKPIPFKONMG;
namespace RPG::Client { class RogueTalentDataItem; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETALENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDF73340)
#define RPG_CLIENT_ROGUETALENTDATA_GETTALENTDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0xDF72ED0)
#define RPG_CLIENT_ROGUETALENTDATA_UPDATETALENTBYACTIVATEDRSP_OFFSET UNITYSDK_OFFSET(0xDF72E60)
#define RPG_CLIENT_ROGUETALENTDATA_UPDATETALENTSRVDATA_OFFSET UNITYSDK_OFFSET(0xDF726D0)
#define RPG_CLIENT_ROGUETALENTDATA__GETTALENTDATAITEM_OFFSET UNITYSDK_OFFSET(0xDF72FB0)
#define RPG_CLIENT_ROGUETALENTDATA__INITROGUETALENTDATAITEMS_OFFSET UNITYSDK_OFFSET(0xDF72750)
#define RPG_CLIENT_ROGUETALENTDATA__UPDATEDATAITEMS_OFFSET UNITYSDK_OFFSET(0xDF72960)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalentData_TypeDefinitionIndex = 67471;

	class RogueTalentData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* _TalentDataItems; // 0x10
		::System::Boolean _Initialized; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA_CTOR_OFFSET))(this);
		}

		::System::Void UpdateTalentSrvData(::JOCBDCIBNMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCBDCIBNMG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA_UPDATETALENTSRVDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateTalentByActivatedRsp(::KLAEMDDHPNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLAEMDDHPNB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA_UPDATETALENTBYACTIVATEDRSP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>* GetTalentDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTalentDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA_GETTALENTDATAITEMLIST_OFFSET))(this);
		}

		::System::Void _InitRogueTalentDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA__INITROGUETALENTDATAITEMS_OFFSET))(this);
		}

		::System::Void _UpdateDataItems(::System::Collections::Generic::IEnumerable_1<::OKPIPFKONMG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::OKPIPFKONMG*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA__UPDATEDATAITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTalentDataItem* _GetTalentDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTalentDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALENTDATA__GETTALENTDATAITEM_OFFSET))(this, a1);
		}

	};
}
