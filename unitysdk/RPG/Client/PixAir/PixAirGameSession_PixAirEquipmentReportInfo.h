#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_ENCHANT_OFFSET UNITYSDK_OFFSET(0x9600)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x723600)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_ENCHANT_OFFSET UNITYSDK_OFFSET(0x9610)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x3DBC680)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_TAGLIST_OFFSET UNITYSDK_OFFSET(0xB88D90)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameSession_PixAirEquipmentReportInfo_TypeDefinitionIndex = 82127;

	struct alignas(8) PixAirGameSession_PixAirEquipmentReportInfo
	{
		::System::Int32 _ID_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* _TagList_k__BackingField; // 0x18
		::System::Int32 _Level_k__BackingField; // 0x20
		::System::Int32 _Enchant_k__BackingField; // 0x24
		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_ID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_TagList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_TAGLIST_OFFSET))(this);
		}

		::System::Void set_TagList(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_TAGLIST_OFFSET))(this, a1);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Int32 get_Enchant()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_GET_ENCHANT_OFFSET))(this);
		}

		::System::Void set_Enchant(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION_PIXAIREQUIPMENTREPORTINFO_SET_ENCHANT_OFFSET))(this, a1);
		}

	};
}
