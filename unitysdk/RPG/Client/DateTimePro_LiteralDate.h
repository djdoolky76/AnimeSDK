#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro_LiteralDate_Kind.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/TimeSpan.h"
namespace System { class IFormatProvider; }
namespace System { class String; }

#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_CTOR_OFFSET UNITYSDK_OFFSET(0x3EA0000)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DATEKIND_OFFSET UNITYSDK_OFFSET(0xE600)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x3EA0180)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x3EA0210)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAY_OFFSET UNITYSDK_OFFSET(0x3EA0010)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x3EA0310)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MILLISECOND_OFFSET UNITYSDK_OFFSET(0x3EA0390)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x3EA0420)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x3EA04A0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x3EA0610)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x3EA0690)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x3EA0060)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET__DATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x3EA0990)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_SET_DATEKIND_OFFSET UNITYSDK_OFFSET(0xAF40)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x3EA0980)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3EA0790)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3EA0840)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x3EA08C0)
#define RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EA0710)

namespace RPG::Client
{
	inline static constexpr unsigned int DateTimePro_LiteralDate_TypeDefinitionIndex = 36189;

	struct alignas(4) DateTimePro_LiteralDate
	{
		::RPG::Client::DateTimePro_LiteralDate_Kind _DateKind_k__BackingField; // 0x10
		::System::Byte _padding0[0x4];
		::System::DateTime _DateTime; // 0x18
		/*
		::System::Void _ctor(::RPG::Client::DateTimePro a1, ::RPG::Client::DateTimePro_LiteralDate_Kind a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro, ::RPG::Client::DateTimePro_LiteralDate_Kind))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_CTOR_OFFSET))(this, a1, a2);
		}
		*/

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAY_OFFSET))(this);
		}

		::System::Int32 get_Year()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_YEAR_OFFSET))(this);
		}

		::System::DayOfWeek get_DayOfWeek()
		{
			return ((::System::DayOfWeek(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAYOFWEEK_OFFSET))(this);
		}

		::System::Int32 get_DayOfYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DAYOFYEAR_OFFSET))(this);
		}

		::System::Int32 get_Hour()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_HOUR_OFFSET))(this);
		}

		::System::Int32 get_Millisecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MILLISECOND_OFFSET))(this);
		}

		::System::Int32 get_Minute()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MINUTE_OFFSET))(this);
		}

		::System::Int32 get_Month()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_MONTH_OFFSET))(this);
		}

		::System::Int32 get_Second()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_SECOND_OFFSET))(this);
		}

		::System::TimeSpan get_TimeOfDay()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_TIMEOFDAY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TOSTRING_3_OFFSET))(this, a1, a2);
		}

		/*
		::RPG::Client::DateTimePro ToDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_TODATETIME_OFFSET))(this);
		}
		*/

		::RPG::Client::DateTimePro_LiteralDate_Kind get_DateKind()
		{
			return ((::RPG::Client::DateTimePro_LiteralDate_Kind(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET_DATEKIND_OFFSET))(this);
		}

		::System::Void set_DateKind(::RPG::Client::DateTimePro_LiteralDate_Kind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro_LiteralDate_Kind))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_SET_DATEKIND_OFFSET))(this, a1);
		}

		::System::DateTimeOffset get__DateTimeOffset()
		{
			return ((::System::DateTimeOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_LITERALDATE_GET__DATETIMEOFFSET_OFFSET))(this);
		}

	};
}
