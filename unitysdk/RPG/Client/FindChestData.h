#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/System/Object.h"
class INBMHMPKACI;
namespace RPG::GameCore { class FindChestFuncDataRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FINDCHESTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B30AEC0)
#define RPG_CLIENT_FINDCHESTDATA_GET_FINDCHESTMARKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1B30B410)
#define RPG_CLIENT_FINDCHESTDATA_GET_FUNCID_OFFSET UNITYSDK_OFFSET(0x1B30B110)
#define RPG_CLIENT_FINDCHESTDATA_GET_ISTRIGGERBYAVATAR_OFFSET UNITYSDK_OFFSET(0x1B30B370)
#define RPG_CLIENT_FINDCHESTDATA_GET_MAPICONID_OFFSET UNITYSDK_OFFSET(0x1B30B2D0)
#define RPG_CLIENT_FINDCHESTDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x1B30B190)
#define RPG_CLIENT_FINDCHESTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1B30B130)
#define RPG_CLIENT_FINDCHESTDATA_GET_SPECIALMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x1B30B230)
#define RPG_CLIENT_FINDCHESTDATA_GET_USETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B30B430)
#define RPG_CLIENT_FINDCHESTDATA_SET_FINDCHESTMARKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1B30B420)
#define RPG_CLIENT_FINDCHESTDATA_SET_FUNCID_OFFSET UNITYSDK_OFFSET(0x1B30B120)
#define RPG_CLIENT_FINDCHESTDATA_SET_USETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1B30B440)
#define RPG_CLIENT_FINDCHESTDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0x1B30AF60)

namespace RPG::Client
{
	inline static constexpr unsigned int FindChestData_TypeDefinitionIndex = 65644;

	class FindChestData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FindChestMarkConfig>* _FindChestMarkConfigs_k__BackingField; // 0x10
		::System::Int64 _UseTimeStamp_k__BackingField; // 0x18
		::System::UInt32 _FuncID_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncData(::INBMHMPKACI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INBMHMPKACI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_SYNCDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_FuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_FUNCID_OFFSET))(this);
		}

		::System::Void set_FuncID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_SET_FUNCID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FindChestFuncDataRow* get_Row()
		{
			return ((::RPG::GameCore::FindChestFuncDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::UInt32 get_SpecialMappinginfo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_SPECIALMAPPINGINFO_OFFSET))(this);
		}

		::System::UInt32 get_MapIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_MAPICONID_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerByAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_ISTRIGGERBYAVATAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FindChestMarkConfig>* get_FindChestMarkConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FindChestMarkConfig>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_FINDCHESTMARKCONFIGS_OFFSET))(this);
		}

		::System::Void set_FindChestMarkConfigs(::System::Collections::Generic::List_1<::RPG::Client::FindChestMarkConfig>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FindChestMarkConfig>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_SET_FINDCHESTMARKCONFIGS_OFFSET))(this, a1);
		}

		::System::Int64 get_UseTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_GET_USETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_UseTimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTDATA_SET_USETIMESTAMP_OFFSET))(this, a1);
		}

	};
}
