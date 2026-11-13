#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExtraLevelResultType.h"
#include "unitysdk/System/Object.h"
class GGKEDBCAADJ;
class JBHAMLBKJNJ;

#define LGFMGCDDBGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA2900)
#define LGFMGCDDBGM_GET_BUSINESSSECONDS_OFFSET UNITYSDK_OFFSET(0x1BCA28A0)
#define LGFMGCDDBGM_GET_COMBO_OFFSET UNITYSDK_OFFSET(0x1BCA2880)
#define LGFMGCDDBGM_GET_EXTRALEVELRESULTID_OFFSET UNITYSDK_OFFSET(0x1BCA2860)
#define LGFMGCDDBGM_GET_EXTRALEVELRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1BCA2840)
#define LGFMGCDDBGM_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BCA27A0)
#define LGFMGCDDBGM_GET_ISTARGETCOIN_OFFSET UNITYSDK_OFFSET(0x1BCA2820)
#define LGFMGCDDBGM_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1BCA2780)
#define LGFMGCDDBGM_GET_SERVEDCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BCA27E0)
#define LGFMGCDDBGM_GET_STATINFO_OFFSET UNITYSDK_OFFSET(0x1BCA28C0)
#define LGFMGCDDBGM_GET_STT_OFFSET UNITYSDK_OFFSET(0x1BCA28E0)
#define LGFMGCDDBGM_GET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1BCA2800)
#define LGFMGCDDBGM_GET_TOTALINCOME_OFFSET UNITYSDK_OFFSET(0x1BCA27C0)
#define LGFMGCDDBGM_SET_BUSINESSSECONDS_OFFSET UNITYSDK_OFFSET(0x1BCA28B0)
#define LGFMGCDDBGM_SET_COMBO_OFFSET UNITYSDK_OFFSET(0x1BCA2890)
#define LGFMGCDDBGM_SET_EXTRALEVELRESULTID_OFFSET UNITYSDK_OFFSET(0x1BCA2870)
#define LGFMGCDDBGM_SET_EXTRALEVELRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1BCA2850)
#define LGFMGCDDBGM_SET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BCA27B0)
#define LGFMGCDDBGM_SET_ISTARGETCOIN_OFFSET UNITYSDK_OFFSET(0x1BCA2830)
#define LGFMGCDDBGM_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1BCA2790)
#define LGFMGCDDBGM_SET_SERVEDCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BCA27F0)
#define LGFMGCDDBGM_SET_STATINFO_OFFSET UNITYSDK_OFFSET(0x1BCA28D0)
#define LGFMGCDDBGM_SET_STT_OFFSET UNITYSDK_OFFSET(0x1BCA28F0)
#define LGFMGCDDBGM_SET_TARGETCOUNT_OFFSET UNITYSDK_OFFSET(0x1BCA2810)
#define LGFMGCDDBGM_SET_TOTALINCOME_OFFSET UNITYSDK_OFFSET(0x1BCA27D0)

inline static constexpr unsigned int LGFMGCDDBGM_TypeDefinitionIndex = 77014;

	class LGFMGCDDBGM : public ::System::Object
	{
	public:
		::JBHAMLBKJNJ* _StatInfo_k__BackingField; // 0x10
		::GGKEDBCAADJ* _Stt_k__BackingField; // 0x18
		::System::UInt32 _ServedCustomerCount_k__BackingField; // 0x20
		::System::UInt32 _BusinessSeconds_k__BackingField; // 0x24
		::System::UInt32 _ExtraLevelResultId_k__BackingField; // 0x28
		::System::Boolean _IsSuccess_k__BackingField; // 0x2C
		::System::Boolean _IsTargetCoin_k__BackingField; // 0x2D
		::System::Byte _padding0[0x2];
		::System::UInt32 _TotalIncome_k__BackingField; // 0x30
		::System::UInt32 _TargetCount_k__BackingField; // 0x34
		::System::UInt32 _Combo_k__BackingField; // 0x38
		::RPG::GameCore::ExtraLevelResultType _ExtraLevelResultType_k__BackingField; // 0x3C
		::System::UInt32 _LevelId_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_LEVELID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_ISSUCCESS_OFFSET))(this);
		}

		::System::Void set_IsSuccess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_ISSUCCESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalIncome()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_TOTALINCOME_OFFSET))(this);
		}

		::System::Void set_TotalIncome(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_TOTALINCOME_OFFSET))(this, a1);
		}

		::System::UInt32 get_ServedCustomerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_SERVEDCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::Void set_ServedCustomerCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_SERVEDCUSTOMERCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_TARGETCOUNT_OFFSET))(this);
		}

		::System::Void set_TargetCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_TARGETCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTargetCoin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_ISTARGETCOIN_OFFSET))(this);
		}

		::System::Void set_IsTargetCoin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_ISTARGETCOIN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ExtraLevelResultType get_ExtraLevelResultType()
		{
			return ((::RPG::GameCore::ExtraLevelResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_EXTRALEVELRESULTTYPE_OFFSET))(this);
		}

		::System::Void set_ExtraLevelResultType(::RPG::GameCore::ExtraLevelResultType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ExtraLevelResultType))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_EXTRALEVELRESULTTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExtraLevelResultId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_EXTRALEVELRESULTID_OFFSET))(this);
		}

		::System::Void set_ExtraLevelResultId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_EXTRALEVELRESULTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Combo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_COMBO_OFFSET))(this);
		}

		::System::Void set_Combo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_COMBO_OFFSET))(this, a1);
		}

		::System::UInt32 get_BusinessSeconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_BUSINESSSECONDS_OFFSET))(this);
		}

		::System::Void set_BusinessSeconds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_BUSINESSSECONDS_OFFSET))(this, a1);
		}

		::JBHAMLBKJNJ* get_StatInfo()
		{
			return ((::JBHAMLBKJNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_STATINFO_OFFSET))(this);
		}

		::System::Void set_StatInfo(::JBHAMLBKJNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBHAMLBKJNJ*))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_STATINFO_OFFSET))(this, a1);
		}

		::GGKEDBCAADJ* get_Stt()
		{
			return ((::GGKEDBCAADJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_GET_STT_OFFSET))(this);
		}

		::System::Void set_Stt(::GGKEDBCAADJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGKEDBCAADJ*))((::PBYTE)hIl2Cpp + LGFMGCDDBGM_SET_STT_OFFSET))(this, a1);
		}

	};
