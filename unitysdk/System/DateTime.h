#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/DateTimeStyles.h"
#include "unitysdk/System/DateTimeKind.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/TimeSpan.h"
namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class Calendar; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATETIME_ADDDAYS_OFFSET UNITYSDK_OFFSET(0x3C1BAD0)
#define SYSTEM_DATETIME_ADDHOURS_OFFSET UNITYSDK_OFFSET(0x3C1BAE0)
#define SYSTEM_DATETIME_ADDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x3C1BAF0)
#define SYSTEM_DATETIME_ADDMINUTES_OFFSET UNITYSDK_OFFSET(0x3C1BB00)
#define SYSTEM_DATETIME_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x3C1BB10)
#define SYSTEM_DATETIME_ADDSECONDS_OFFSET UNITYSDK_OFFSET(0x3C1BB20)
#define SYSTEM_DATETIME_ADDTICKS_OFFSET UNITYSDK_OFFSET(0x3C1BA30)
#define SYSTEM_DATETIME_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x3C1BB30)
#define SYSTEM_DATETIME_ADD_1_OFFSET UNITYSDK_OFFSET(0x3C1BAC0)
#define SYSTEM_DATETIME_ADD_OFFSET UNITYSDK_OFFSET(0x3C1BA30)
#define SYSTEM_DATETIME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1ABAE0)
#define SYSTEM_DATETIME_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3C1BC70)
#define SYSTEM_DATETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3C1BBC0)
#define SYSTEM_DATETIME_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C1A86D0)
#define SYSTEM_DATETIME_CTOR_10_OFFSET UNITYSDK_OFFSET(0x3C1B9D0)
#define SYSTEM_DATETIME_CTOR_11_OFFSET UNITYSDK_OFFSET(0x3C1B9E0)
#define SYSTEM_DATETIME_CTOR_12_OFFSET UNITYSDK_OFFSET(0x3C1B9F0)
#define SYSTEM_DATETIME_CTOR_13_OFFSET UNITYSDK_OFFSET(0x3C1BA00)
#define SYSTEM_DATETIME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x94B0)
#define SYSTEM_DATETIME_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C1B830)
#define SYSTEM_DATETIME_CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C1B840)
#define SYSTEM_DATETIME_CTOR_4_OFFSET UNITYSDK_OFFSET(0x3C1B8B0)
#define SYSTEM_DATETIME_CTOR_5_OFFSET UNITYSDK_OFFSET(0x3C1B8D0)
#define SYSTEM_DATETIME_CTOR_6_OFFSET UNITYSDK_OFFSET(0x3C1B910)
#define SYSTEM_DATETIME_CTOR_7_OFFSET UNITYSDK_OFFSET(0x3C1B9A0)
#define SYSTEM_DATETIME_CTOR_8_OFFSET UNITYSDK_OFFSET(0x3C1B9B0)
#define SYSTEM_DATETIME_CTOR_9_OFFSET UNITYSDK_OFFSET(0x3C1B9C0)
#define SYSTEM_DATETIME_CTOR_OFFSET UNITYSDK_OFFSET(0x3C1B7D0)
#define SYSTEM_DATETIME_DATETOTICKS_OFFSET UNITYSDK_OFFSET(0x1C1A6C10)
#define SYSTEM_DATETIME_DAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1C1A8500)
#define SYSTEM_DATETIME_DOUBLEDATETOTICKS_OFFSET UNITYSDK_OFFSET(0x1C1A8860)
#define SYSTEM_DATETIME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C1BCD0)
#define SYSTEM_DATETIME_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1C1A8A00)
#define SYSTEM_DATETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C1BCA0)
#define SYSTEM_DATETIME_FROMBINARYRAW_OFFSET UNITYSDK_OFFSET(0x1C1A8CB0)
#define SYSTEM_DATETIME_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C1A8A10)
#define SYSTEM_DATETIME_FROMFILETIMEUTC_OFFSET UNITYSDK_OFFSET(0x1C1A8EF0)
#define SYSTEM_DATETIME_FROMFILETIME_OFFSET UNITYSDK_OFFSET(0x1C1A8D40)
#define SYSTEM_DATETIME_FROMOADATE_OFFSET UNITYSDK_OFFSET(0x1C1A90C0)
#define SYSTEM_DATETIME_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x3C1BE70)
#define SYSTEM_DATETIME_GETDATETIMEFORMATS_1_OFFSET UNITYSDK_OFFSET(0x3C1CB30)
#define SYSTEM_DATETIME_GETDATETIMEFORMATS_2_OFFSET UNITYSDK_OFFSET(0x3C1CB70)
#define SYSTEM_DATETIME_GETDATETIMEFORMATS_3_OFFSET UNITYSDK_OFFSET(0x3C1CC20)
#define SYSTEM_DATETIME_GETDATETIMEFORMATS_OFFSET UNITYSDK_OFFSET(0x3C1CA80)
#define SYSTEM_DATETIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C1BFB0)
#define SYSTEM_DATETIME_GETSYSTEMTIMEASFILETIME_OFFSET UNITYSDK_OFFSET(0x1C1A9830)
#define SYSTEM_DATETIME_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x2FCCAB0)
#define SYSTEM_DATETIME_GET_DATE_OFFSET UNITYSDK_OFFSET(0x3C1BE20)
#define SYSTEM_DATETIME_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x3C1BE90)
#define SYSTEM_DATETIME_GET_DAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x3C1BEE0)
#define SYSTEM_DATETIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x3C1BE80)
#define SYSTEM_DATETIME_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x3C1BFD0)
#define SYSTEM_DATETIME_GET_INTERNALKIND_OFFSET UNITYSDK_OFFSET(0x3C1BA20)
#define SYSTEM_DATETIME_GET_INTERNALTICKS_OFFSET UNITYSDK_OFFSET(0x3C1BA10)
#define SYSTEM_DATETIME_GET_KIND_OFFSET UNITYSDK_OFFSET(0x3C1C020)
#define SYSTEM_DATETIME_GET_MILLISECOND_OFFSET UNITYSDK_OFFSET(0x3C1C050)
#define SYSTEM_DATETIME_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x3C1C0A0)
#define SYSTEM_DATETIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x3C1C0E0)
#define SYSTEM_DATETIME_GET_NOW_OFFSET UNITYSDK_OFFSET(0x1C1A9770)
#define SYSTEM_DATETIME_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x3C1C210)
#define SYSTEM_DATETIME_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x3C1BA10)
#define SYSTEM_DATETIME_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x3C1C250)
#define SYSTEM_DATETIME_GET_TODAY_OFFSET UNITYSDK_OFFSET(0x1C1A98D0)
#define SYSTEM_DATETIME_GET_UTCNOW_OFFSET UNITYSDK_OFFSET(0x1C1A9800)
#define SYSTEM_DATETIME_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x3C1C290)
#define SYSTEM_DATETIME_ISAMBIGUOUSDAYLIGHTSAVINGTIME_OFFSET UNITYSDK_OFFSET(0x3C1C010)
#define SYSTEM_DATETIME_ISDAYLIGHTSAVINGTIME_OFFSET UNITYSDK_OFFSET(0x3C1BCF0)
#define SYSTEM_DATETIME_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1C1A87D0)
#define SYSTEM_DATETIME_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1C1AAFB0)
#define SYSTEM_DATETIME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C1AB100)
#define SYSTEM_DATETIME_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C1AB180)
#define SYSTEM_DATETIME_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1C1AB160)
#define SYSTEM_DATETIME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C1AB110)
#define SYSTEM_DATETIME_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C1AB140)
#define SYSTEM_DATETIME_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1C1AB120)
#define SYSTEM_DATETIME_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x1C1AB0E0)
#define SYSTEM_DATETIME_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1C1AB040)
#define SYSTEM_DATETIME_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1C1A9E40)
#define SYSTEM_DATETIME_PARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x1C1A9EC0)
#define SYSTEM_DATETIME_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1C1A9C60)
#define SYSTEM_DATETIME_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1C1A1E20)
#define SYSTEM_DATETIME_PARSE_2_OFFSET UNITYSDK_OFFSET(0x1C1A9BC0)
#define SYSTEM_DATETIME_PARSE_OFFSET UNITYSDK_OFFSET(0x1C1A9A70)
#define SYSTEM_DATETIME_SPECIFYKIND_OFFSET UNITYSDK_OFFSET(0x1C1A9320)
#define SYSTEM_DATETIME_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x3C1C390)
#define SYSTEM_DATETIME_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x3C1C370)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x3C1CC70)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x3C1CCA0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x3C1CC80)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1D30)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x3C1CD30)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x3C1CD20)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x3C1CCB0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x3C1CCD0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x3C1CCF0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x3C1CC90)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x3C1CD10)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x3C1CD40)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x3C1CCC0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x3C1CCE0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x3C1CD00)
#define SYSTEM_DATETIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3C1BCE0)
#define SYSTEM_DATETIME_TICKSTOOADATE_OFFSET UNITYSDK_OFFSET(0x1C1AA110)
#define SYSTEM_DATETIME_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x1C1A6F90)
#define SYSTEM_DATETIME_TOBINARYRAW_OFFSET UNITYSDK_OFFSET(0x1D30)
#define SYSTEM_DATETIME_TOBINARY_OFFSET UNITYSDK_OFFSET(0x3C1BDC0)
#define SYSTEM_DATETIME_TOFILETIMEUTC_OFFSET UNITYSDK_OFFSET(0x3C1C600)
#define SYSTEM_DATETIME_TOFILETIME_OFFSET UNITYSDK_OFFSET(0x3C1C570)
#define SYSTEM_DATETIME_TOLOCALTIME_1_OFFSET UNITYSDK_OFFSET(0x3C1C7F0)
#define SYSTEM_DATETIME_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x3C1C690)
#define SYSTEM_DATETIME_TOLONGDATESTRING_OFFSET UNITYSDK_OFFSET(0x3C1C800)
#define SYSTEM_DATETIME_TOLONGTIMESTRING_OFFSET UNITYSDK_OFFSET(0x3C1C850)
#define SYSTEM_DATETIME_TOOADATE_OFFSET UNITYSDK_OFFSET(0x3C1C440)
#define SYSTEM_DATETIME_TOSHORTDATESTRING_OFFSET UNITYSDK_OFFSET(0x3C1C8A0)
#define SYSTEM_DATETIME_TOSHORTTIMESTRING_OFFSET UNITYSDK_OFFSET(0x3C1C8F0)
#define SYSTEM_DATETIME_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3C1C980)
#define SYSTEM_DATETIME_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3C1C9D0)
#define SYSTEM_DATETIME_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x3C1CA20)
#define SYSTEM_DATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C1C940)
#define SYSTEM_DATETIME_TOUNIVERSALTIME_OFFSET UNITYSDK_OFFSET(0x3C1CA70)
#define SYSTEM_DATETIME_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1C1AB970)
#define SYSTEM_DATETIME_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1C1AADC0)
#define SYSTEM_DATETIME_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1C1AAB50)
#define SYSTEM_DATETIME_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1C1AAA10)
#define SYSTEM_DATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1C1AA860)

namespace System
{
	inline static constexpr unsigned int DateTime_TypeDefinitionIndex = 223;

	struct alignas(4) DateTime
	{
		::System::UInt64 dateData; // 0x10
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("System", "DateTime")->GetStaticField(0x7E0);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("System", "DateTime")->GetStaticField(0x7E8);
		}

		static ::System::DateTime* StaticGet_MaxValue()
		{
			return (::System::DateTime*)UnitySDK::FromName("System", "DateTime")->GetStaticField(0x4C0);
		}

		static ::System::DateTime* StaticGet_MinValue()
		{
			return (::System::DateTime*)UnitySDK::FromName("System", "DateTime")->GetStaticField(0x4C8);
		}

		// static const ::System::Object TicksPerMillisecond; // 0x0
		// static const ::System::Object TicksPerSecond; // 0x0
		// static const ::System::Object TicksPerMinute; // 0x0
		// static const ::System::Object TicksPerHour; // 0x0
		// static const ::System::Object TicksPerDay; // 0x0
		// static const ::System::Object MillisPerSecond; // 0x0
		// static const ::System::Object MillisPerMinute; // 0x0
		// static const ::System::Object MillisPerHour; // 0x0
		// static const ::System::Object MillisPerDay; // 0x0
		// static const ::System::Object DaysPerYear; // 0x0
		// static const ::System::Object DaysPer4Years; // 0x0
		// static const ::System::Object DaysPer100Years; // 0x0
		// static const ::System::Object DaysPer400Years; // 0x0
		// static const ::System::Object DaysTo1601; // 0x0
		// static const ::System::Object DaysTo1899; // 0x0
		// static const ::System::Object DaysTo1970; // 0x0
		// static const ::System::Object DaysTo10000; // 0x0
		// static const ::System::Object MinTicks; // 0x0
		// static const ::System::Object MaxTicks; // 0x0
		// static const ::System::Object MaxMillis; // 0x0
		// static const ::System::Object FileTimeOffset; // 0x0
		// static const ::System::Object DoubleDateOffset; // 0x0
		// static const ::System::Object OADateMinAsTicks; // 0x0
		// static const ::System::Object OADateMinAsDouble; // 0x0
		// static const ::System::Object OADateMaxAsDouble; // 0x0
		// static const ::System::Object DatePartYear; // 0x0
		// static const ::System::Object DatePartDayOfYear; // 0x0
		// static const ::System::Object DatePartMonth; // 0x0
		// static const ::System::Object DatePartDay; // 0x0
		// static const ::System::Object TicksMask; // 0x0
		// static const ::System::Object FlagsMask; // 0x0
		// static const ::System::Object LocalMask; // 0x0
		// static const ::System::Object TicksCeiling; // 0x0
		// static const ::System::Object KindUnspecified; // 0x0
		// static const ::System::Object KindUtc; // 0x0
		// static const ::System::Object KindLocal; // 0x0
		// static const ::System::Object KindLocalAmbiguousDst; // 0x0
		// static const ::System::Object KindShift; // 0x0
		// static const ::System::String* TicksField; // 0x0
		// static const ::System::String* DateDataField; // 0x0
		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int64 a1, ::System::DateTimeKind a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Int64 a1, ::System::DateTimeKind a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::DateTimeKind, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Globalization::Calendar* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_6(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_6_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::DateTimeKind a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Globalization::Calendar* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_9(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_10(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::DateTimeKind a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_10_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _ctor_11(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Globalization::Calendar* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_11_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _ctor_12(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Globalization::Calendar* a8, ::System::DateTimeKind a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_12_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void _ctor_13(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CTOR_13_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_CCTOR_OFFSET))();
		}

		::System::Int64 get_InternalTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_INTERNALTICKS_OFFSET))(this);
		}

		::System::UInt64 get_InternalKind()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_INTERNALKIND_OFFSET))(this);
		}

		/*
		::System::DateTime Add(::System::TimeSpan a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADD_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime Add_1(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADD_1_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::DateTime AddDays(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDDAYS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime AddHours(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDHOURS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime AddMilliseconds(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDMILLISECONDS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime AddMinutes(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDMINUTES_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime AddMonths(::System::Int32 a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDMONTHS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime AddSeconds(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDSECONDS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime AddTicks(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDTICKS_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime AddYears(::System::Int32 a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDYEARS_OFFSET))(this, a1);
		}
		*/

		/*
		static ::System::Int32 Compare(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Int32(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_COMPARE_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_COMPARETO_OFFSET))(this, a1);
		}

		/*
		::System::Int32 CompareTo_1(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_COMPARETO_1_OFFSET))(this, a1);
		}
		*/

		static ::System::Int64 DateToTicks(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_DATETOTICKS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 TimeToTicks(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TIMETOTICKS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 DaysInMonth(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_DAYSINMONTH_OFFSET))(a1, a2);
		}

		static ::System::Int64 DoubleDateToTicks(::System::Double a1)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_DOUBLEDATETOTICKS_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		/*
		static ::System::Boolean Equals_2(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_EQUALS_2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::DateTime FromBinary(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMBINARY_OFFSET))(a1);
		}
		*/

		/*
		static ::System::DateTime FromBinaryRaw(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMBINARYRAW_OFFSET))(a1);
		}
		*/

		/*
		static ::System::DateTime FromFileTime(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMFILETIME_OFFSET))(a1);
		}
		*/

		/*
		static ::System::DateTime FromFileTimeUtc(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMFILETIMEUTC_OFFSET))(a1);
		}
		*/

		/*
		static ::System::DateTime FromOADate(::System::Double a1)
		{
			return ((::System::DateTime(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMOADATE_OFFSET))(a1);
		}
		*/

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDaylightSavingTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ISDAYLIGHTSAVINGTIME_OFFSET))(this);
		}

		/*
		static ::System::DateTime SpecifyKind(::System::DateTime a1, ::System::DateTimeKind a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SPECIFYKIND_OFFSET))(a1, a2);
		}
		*/

		::System::Int64 ToBinary()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOBINARY_OFFSET))(this);
		}

		::System::Int64 ToBinaryRaw()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOBINARYRAW_OFFSET))(this);
		}

		/*
		::System::DateTime get_Date()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_DATE_OFFSET))(this);
		}
		*/

		::System::Int32 GetDatePart(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATEPART_OFFSET))(this, a1);
		}

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_DAY_OFFSET))(this);
		}

		::System::DayOfWeek get_DayOfWeek()
		{
			return ((::System::DayOfWeek(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_DAYOFWEEK_OFFSET))(this);
		}

		::System::Int32 get_DayOfYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_DAYOFYEAR_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_Hour()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_HOUR_OFFSET))(this);
		}

		::System::Boolean IsAmbiguousDaylightSavingTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ISAMBIGUOUSDAYLIGHTSAVINGTIME_OFFSET))(this);
		}

		::System::DateTimeKind get_Kind()
		{
			return ((::System::DateTimeKind(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_KIND_OFFSET))(this);
		}

		::System::Int32 get_Millisecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_MILLISECOND_OFFSET))(this);
		}

		::System::Int32 get_Minute()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_MINUTE_OFFSET))(this);
		}

		::System::Int32 get_Month()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_MONTH_OFFSET))(this);
		}

		/*
		static ::System::DateTime get_Now()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_NOW_OFFSET))();
		}
		*/

		/*
		static ::System::DateTime get_UtcNow()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_UTCNOW_OFFSET))();
		}
		*/

		static ::System::Int64 GetSystemTimeAsFileTime()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETSYSTEMTIMEASFILETIME_OFFSET))();
		}

		::System::Int32 get_Second()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_SECOND_OFFSET))(this);
		}

		::System::Int64 get_Ticks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_TICKS_OFFSET))(this);
		}

		::System::TimeSpan get_TimeOfDay()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_TIMEOFDAY_OFFSET))(this);
		}

		/*
		static ::System::DateTime get_Today()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_TODAY_OFFSET))();
		}
		*/

		::System::Int32 get_Year()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_YEAR_OFFSET))(this);
		}

		static ::System::Boolean IsLeapYear(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ISLEAPYEAR_OFFSET))(a1);
		}

		/*
		static ::System::DateTime Parse(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSE_OFFSET))(a1);
		}
		*/

		/*
		static ::System::DateTime Parse_1(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSE_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::DateTime Parse_2(::System::String* a1, ::System::IFormatProvider* a2, ::System::Globalization::DateTimeStyles a3)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSE_2_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::DateTime ParseExact(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSEEXACT_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::System::DateTime ParseExact_1(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSEEXACT_1_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::DateTime ParseExact_2(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4)
		{
			return ((::System::DateTime(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSEEXACT_2_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		::System::TimeSpan Subtract(::System::DateTime a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SUBTRACT_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime Subtract_1(::System::TimeSpan a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SUBTRACT_1_OFFSET))(this, a1);
		}
		*/

		static ::System::Double TicksToOADate(::System::Int64 a1)
		{
			return ((::System::Double(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TICKSTOOADATE_OFFSET))(a1);
		}

		::System::Double ToOADate()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOOADATE_OFFSET))(this);
		}

		::System::Int64 ToFileTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOFILETIME_OFFSET))(this);
		}

		::System::Int64 ToFileTimeUtc()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOFILETIMEUTC_OFFSET))(this);
		}

		/*
		::System::DateTime ToLocalTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOLOCALTIME_OFFSET))(this);
		}
		*/

		/*
		::System::DateTime ToLocalTime_1(::System::Boolean a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOLOCALTIME_1_OFFSET))(this, a1);
		}
		*/

		::System::String* ToLongDateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOLONGDATESTRING_OFFSET))(this);
		}

		::System::String* ToLongTimeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOLONGTIMESTRING_OFFSET))(this);
		}

		::System::String* ToShortDateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSHORTDATESTRING_OFFSET))(this);
		}

		::System::String* ToShortTimeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSHORTTIMESTRING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_3_OFFSET))(this, a1, a2);
		}

		/*
		::System::DateTime ToUniversalTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOUNIVERSALTIME_OFFSET))(this);
		}
		*/

		/*
		static ::System::Boolean TryParse(::System::String* a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean TryParse_1(::System::String* a1, ::System::IFormatProvider* a2, ::System::Globalization::DateTimeStyles a3, ::System::DateTime a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSE_1_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::Boolean TryParseExact(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTime a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSEEXACT_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean TryParseExact_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTime a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSEEXACT_1_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::DateTime op_Addition(::System::DateTime a1, ::System::TimeSpan a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_ADDITION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::DateTime op_Subtraction(::System::DateTime a1, ::System::TimeSpan a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_SUBTRACTION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::TimeSpan op_Subtraction_1(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_SUBTRACTION_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThan(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_LESSTHAN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThanOrEqual(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThan(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_GREATERTHAN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThanOrEqual(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}
		*/

		::Il2CppArray<::System::String*>* GetDateTimeFormats()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATETIMEFORMATS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetDateTimeFormats_1(::System::IFormatProvider* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATETIMEFORMATS_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetDateTimeFormats_2(::System::Char a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATETIMEFORMATS_2_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetDateTimeFormats_3(::System::Char a1, ::System::IFormatProvider* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Char, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATETIMEFORMATS_3_OFFSET))(this, a1, a2);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, a1);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, a1);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, a1);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, a1);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, a1);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, a1);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, a1);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, a1);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, a1);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, a1);
		}

		/*
		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, a1);
		}
		*/

		::System::Object* System_IConvertible_ToType(::System::Type* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, a1, a2);
		}

		/*
		static ::System::Boolean TryCreate(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::DateTime a8)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYCREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

	};
}
