#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_ADD_OFFSET UNITYSDK_OFFSET(0xEBB90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CCTOR_OFFSET UNITYSDK_OFFSET(0xCDAF0B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_COMPARETO_OFFSET UNITYSDK_OFFSET(0xEBCA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0xEBAA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_2_OFFSET UNITYSDK_OFFSET(0xEBAF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_3_OFFSET UNITYSDK_OFFSET(0xEBB40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_4_OFFSET UNITYSDK_OFFSET(0xEBB50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_5_OFFSET UNITYSDK_OFFSET(0xEBB60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xEBD60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0xEBCD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOINT32_OFFSET UNITYSDK_OFFSET(0xEBBF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOUINT32_OFFSET UNITYSDK_OFFSET(0xEBBE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FORMATWITHDECIMAL_OFFSET UNITYSDK_OFFSET(0xEBE80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEBD70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETLERPEDVALUE_OFFSET UNITYSDK_OFFSET(0xEBC60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETSCALEDNUMERATOR_OFFSET UNITYSDK_OFFSET(0xEBB70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_MUL_OFFSET UNITYSDK_OFFSET(0xEBBB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0xCDA4A70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xCDB1540)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xCDB1B60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_1_OFFSET UNITYSDK_OFFSET(0xCDB1A40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0xCDB1900)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0xCD91D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0xCD8BC00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0xCDB11A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0xCD8E4F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xCDB1230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xCDB1630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0xCDB1AD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_1_OFFSET UNITYSDK_OFFSET(0xCDB17C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0xCDB1730)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xCD8BCC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0xCD917F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POWEROF10_OFFSET UNITYSDK_OFFSET(0xCDAF4B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POW_OFFSET UNITYSDK_OFFSET(0xEBBC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_SUB_OFFSET UNITYSDK_OFFSET(0xEBBA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TODISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xEBE60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFIXPOINT_OFFSET UNITYSDK_OFFSET(0xEBC10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFLOAT_OFFSET UNITYSDK_OFFSET(0xEBC00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOLONG_OFFSET UNITYSDK_OFFSET(0xEBC20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRINGWITHSIGN_OFFSET UNITYSDK_OFFSET(0xEBE50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xEBE40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEBDD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOULONG_OFFSET UNITYSDK_OFFSET(0xEBC30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TRUNCATE_OFFSET UNITYSDK_OFFSET(0xEBC40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__TODISPLAYDATARAW_OFFSET UNITYSDK_OFFSET(0xEBE90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDecimal_TypeDefinitionIndex = 77447;

	struct alignas(4) IdleLiveDecimal
	{
		::System::Numerics::BigInteger _numerator; // 0x10
		::System::Int32 _denominatorLog10; // 0x20
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal* StaticGet_One()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDecimal*)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "IdleLiveDecimal")->GetStaticField(0xBF80);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal* StaticGet_Zero()
		{
			return (::RPG::Client::ActivityIdleLive::IdleLiveDecimal*)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "IdleLiveDecimal")->GetStaticField(0xBF98);
		}

		static ::Il2CppArray<::System::Numerics::BigInteger>** StaticGet_s_powerOf10Table()
		{
			return (::Il2CppArray<::System::Numerics::BigInteger>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "IdleLiveDecimal")->GetStaticField(0xBFB0);
		}

		// static const ::System::Object MAX_DENOMINATOR_LOG10; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::System::Numerics::BigInteger a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_CTOR_5_OFFSET))(this, a1, a2);
		}

		static ::System::Numerics::BigInteger PowerOf10(::System::Int32 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POWEROF10_OFFSET))(a1);
		}

		::System::Numerics::BigInteger GetScaledNumerator(::System::Int32 a1)
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETSCALEDNUMERATOR_OFFSET))(this, a1);
		}

		/*
		::System::Void Add(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_ADD_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void Sub(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_SUB_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void Mul(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_MUL_OFFSET))(this, a1);
		}
		*/

		/*
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal Pow(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_POW_OFFSET))(this, a1);
		}
		*/

		/*
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Addition(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_ADDITION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Subtraction(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_SUBTRACTION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Multiply(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_MULTIPLY_OFFSET))(a1, a2);
		}
		*/

		::System::UInt32 FloorToUint32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOUINT32_OFFSET))(this);
		}

		::System::Int32 FloorToInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FLOORTOINT32_OFFSET))(this);
		}

		::System::Single ToFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFLOAT_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint ToFixPoint()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOFIXPOINT_OFFSET))(this);
		}

		::System::Int64 ToLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOLONG_OFFSET))(this);
		}

		::System::UInt64 ToULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOULONG_OFFSET))(this);
		}

		/*
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal Truncate()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TRUNCATE_OFFSET))(this);
		}
		*/

		/*
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetLerpedValue(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETLERPEDVALUE_OFFSET))(this, a1, a2, a3);
		}
		*/

		/*
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit(::System::Int64 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_1(::System::UInt64 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_2(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_2_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_3(::System::Double a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_3_OFFSET))(a1);
		}
		*/

		/*
		static ::RPG::Client::ActivityIdleLive::IdleLiveDecimal op_Implicit_4(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_IMPLICIT_4_OFFSET))(a1);
		}
		*/

		/*
		::System::Int32 CompareTo(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_COMPARETO_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Boolean Equals(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThan(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThan_1(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHAN_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThan(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThan_1(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHAN_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_LessThanOrEqual(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_GreaterThanOrEqual(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToStringWithSign()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TOSTRINGWITHSIGN_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::String*, ::System::String*> ToDisplayData()
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_TODISPLAYDATA_OFFSET))(this);
		}

		::System::String* FormatWithDecimal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL_FORMATWITHDECIMAL_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*> _ToDisplayDataRaw(::System::Int32 a1, ::System::Nullable_1<::System::Numerics::BigInteger> a2)
		{
			return ((::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*>(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::Numerics::BigInteger>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDECIMAL__TODISPLAYDATARAW_OFFSET))(this, a1, a2);
		}

	};
}
