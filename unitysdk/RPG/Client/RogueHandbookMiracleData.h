#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIGDBCKOFBN;
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::GameCore { class RogueHandBookMiracleRow; }

#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xE9C1B60)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE9C1AA0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xE9C1ED0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xE9C1BD0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xE9C2060)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xE9C1E90)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xE9C2040)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_MIRACLEHANDBOOKID_OFFSET UNITYSDK_OFFSET(0xE9C1EB0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_MIRACLETYPELIST_OFFSET UNITYSDK_OFFSET(0xE9C1D90)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xE9C1E40)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xE9C1D20)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SETREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xE9C1B90)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xE9C2070)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xE9C1EA0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xE9C2050)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_MIRACLEHANDBOOKID_OFFSET UNITYSDK_OFFSET(0xE9C1EC0)
#define RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xE9C1B00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookMiracleData_TypeDefinitionIndex = 69316;

	class RogueHandbookMiracleData : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracleLegacyDisplayRow* _DisplayRow; // 0x10
		::RPG::GameCore::RogueHandBookMiracleRow* _Row; // 0x18
		::System::UInt32 _MiracleHandbookID_k__BackingField; // 0x20
		::System::Boolean _IsUnlocked_k__BackingField; // 0x24
		::System::Boolean _IsInSchedule_k__BackingField; // 0x25
		::System::Boolean _HasTakenReward_k__BackingField; // 0x26
		::System::Void _ctor(::CIGDBCKOFBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIGDBCKOFBN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::RogueHandBookMiracleRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueHandBookMiracleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void UpdateByServer(::CIGDBCKOFBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIGDBCKOFBN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_UPDATEBYSERVER_OFFSET))(this, a1);
		}

		::System::Void SetRewardTaken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SETREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean get_HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_HASREWARDCANTAKE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MiracleTypeList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_MIRACLETYPELIST_OFFSET))(this);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Void set_IsInSchedule(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_ISINSCHEDULE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MiracleHandbookID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_MIRACLEHANDBOOKID_OFFSET))(this);
		}

		::System::Void set_MiracleHandbookID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_MIRACLEHANDBOOKID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueHandBookMiracleRow* get_Row()
		{
			return ((::RPG::GameCore::RogueHandBookMiracleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleLegacyDisplayRow* get_DisplayRow()
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_DISPLAYROW_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_GET_HASTAKENREWARD_OFFSET))(this);
		}

		::System::Void set_HasTakenReward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKMIRACLEDATA_SET_HASTAKENREWARD_OFFSET))(this, a1);
		}

	};
}
