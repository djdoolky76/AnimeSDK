#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMJKPKLCPNM.h"
#include "unitysdk/System/Object.h"
class NJMOBNILIHI;

#define RPG_CLIENT_PLAYERDIARYITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE68ABD0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xE68AB90)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xE68ABB0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xE68AB50)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE68AB70)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_ISDATAVALID_OFFSET UNITYSDK_OFFSET(0xE68AA60)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xE68ABA0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTPARAM_OFFSET UNITYSDK_OFFSET(0xE68ABC0)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xE68AB60)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xE68AB80)
#define RPG_CLIENT_PLAYERDIARYITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xE68A5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerDiaryItemData_TypeDefinitionIndex = 65726;

	class PlayerDiaryItemData : public ::System::Object
	{
	public:
		::KMJKPKLCPNM _Type_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::System::Int64 _TimeStamp_k__BackingField; // 0x18
		::System::UInt32 _ContentID_k__BackingField; // 0x20
		::System::UInt32 _ContentParam_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::NJMOBNILIHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJMOBNILIHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean IsDataValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_ISDATAVALID_OFFSET))(this);
		}

		::System::Int64 get_TimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TimeStamp(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TIMESTAMP_OFFSET))(this, a1);
		}

		::KMJKPKLCPNM get_Type()
		{
			return ((::KMJKPKLCPNM(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::KMJKPKLCPNM a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMJKPKLCPNM))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContentParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_GET_CONTENTPARAM_OFFSET))(this);
		}

		::System::Void set_ContentParam(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERDIARYITEMDATA_SET_CONTENTPARAM_OFFSET))(this, a1);
		}

	};
}
