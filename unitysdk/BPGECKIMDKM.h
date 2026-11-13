#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"

#define BPGECKIMDKM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B601E00)
#define BPGECKIMDKM_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define BPGECKIMDKM_GET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define BPGECKIMDKM_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define BPGECKIMDKM_GET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x7F5730)
#define BPGECKIMDKM_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x723600)
#define BPGECKIMDKM_SET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define BPGECKIMDKM_SET_BEGINTIMEDATE_OFFSET UNITYSDK_OFFSET(0xB88D90)
#define BPGECKIMDKM_SET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xFDBF80)
#define BPGECKIMDKM_SET_ENDTIMEDATE_OFFSET UNITYSDK_OFFSET(0x3D6A850)
#define BPGECKIMDKM_SET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x3DBC680)

inline static constexpr unsigned int BPGECKIMDKM_TypeDefinitionIndex = 69843;

	struct alignas(4) BPGECKIMDKM
	{
		::System::UInt32 _ActivityID_k__BackingField; // 0x10
		::System::UInt32 _BeginTimeStamp_k__BackingField; // 0x14
		::RPG::Client::DateTimePro _BeginTimeDate_k__BackingField; // 0x18
		::System::UInt32 _EndTimeStamp_k__BackingField; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::DateTimePro _EndTimeDate_k__BackingField; // 0x28
		/*
		static ::BPGECKIMDKM BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::BPGECKIMDKM(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BPGECKIMDKM_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}
		*/

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGECKIMDKM_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void set_ActivityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPGECKIMDKM_SET_ACTIVITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BeginTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGECKIMDKM_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_BeginTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPGECKIMDKM_SET_BEGINTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_BeginTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGECKIMDKM_GET_BEGINTIMEDATE_OFFSET))(this);
		}

		::System::Void set_BeginTimeDate(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + BPGECKIMDKM_SET_BEGINTIMEDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGECKIMDKM_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_EndTimeStamp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPGECKIMDKM_SET_ENDTIMESTAMP_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_EndTimeDate()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGECKIMDKM_GET_ENDTIMEDATE_OFFSET))(this);
		}

		::System::Void set_EndTimeDate(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + BPGECKIMDKM_SET_ENDTIMEDATE_OFFSET))(this, a1);
		}

	};
