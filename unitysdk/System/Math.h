#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MidpointRounding.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"

#define SYSTEM_MATH_ABSHELPER_1_OFFSET UNITYSDK_OFFSET(0x1EDCEAF0)
#define SYSTEM_MATH_ABSHELPER_OFFSET UNITYSDK_OFFSET(0x1EDCE9F0)
#define SYSTEM_MATH_ABS_1_OFFSET UNITYSDK_OFFSET(0x1EDCEA60)
#define SYSTEM_MATH_ABS_2_OFFSET UNITYSDK_OFFSET(0x1EDCEB70)
#define SYSTEM_MATH_ABS_3_OFFSET UNITYSDK_OFFSET(0x1EDCEB80)
#define SYSTEM_MATH_ABS_4_OFFSET UNITYSDK_OFFSET(0x1EDCEB90)
#define SYSTEM_MATH_ABS_OFFSET UNITYSDK_OFFSET(0x1EDCE970)
#define SYSTEM_MATH_ACOS_OFFSET UNITYSDK_OFFSET(0x1EDCDEB0)
#define SYSTEM_MATH_ASIN_OFFSET UNITYSDK_OFFSET(0x1EDCDEC0)
#define SYSTEM_MATH_ATAN2_OFFSET UNITYSDK_OFFSET(0x1EDCDEE0)
#define SYSTEM_MATH_ATAN_OFFSET UNITYSDK_OFFSET(0x1EDCDED0)
#define SYSTEM_MATH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDCEF30)
#define SYSTEM_MATH_CEILING_OFFSET UNITYSDK_OFFSET(0x1EDCDEF0)
#define SYSTEM_MATH_COS_OFFSET UNITYSDK_OFFSET(0x1EDCDF00)
#define SYSTEM_MATH_EXP_OFFSET UNITYSDK_OFFSET(0x1EDCE6D0)
#define SYSTEM_MATH_FLOOR_1_OFFSET UNITYSDK_OFFSET(0x1EDCDF80)
#define SYSTEM_MATH_FLOOR_OFFSET UNITYSDK_OFFSET(0x1EDCDF10)
#define SYSTEM_MATH_IEEEREMAINDER_OFFSET UNITYSDK_OFFSET(0x1EDCE6F0)
#define SYSTEM_MATH_INTERNALROUND_OFFSET UNITYSDK_OFFSET(0x1EDCDF90)
#define SYSTEM_MATH_INTERNALTRUNCATE_OFFSET UNITYSDK_OFFSET(0x1EDCE250)
#define SYSTEM_MATH_LOG10_OFFSET UNITYSDK_OFFSET(0x1EDCE6C0)
#define SYSTEM_MATH_LOG_1_OFFSET UNITYSDK_OFFSET(0x1EDCEDB0)
#define SYSTEM_MATH_LOG_OFFSET UNITYSDK_OFFSET(0x1EDCE6B0)
#define SYSTEM_MATH_MAX_1_OFFSET UNITYSDK_OFFSET(0x1EDB19E0)
#define SYSTEM_MATH_MAX_2_OFFSET UNITYSDK_OFFSET(0x1EDCEC40)
#define SYSTEM_MATH_MAX_3_OFFSET UNITYSDK_OFFSET(0x1EDCEC50)
#define SYSTEM_MATH_MAX_4_OFFSET UNITYSDK_OFFSET(0x1EDCEC60)
#define SYSTEM_MATH_MAX_5_OFFSET UNITYSDK_OFFSET(0x1EDCEC70)
#define SYSTEM_MATH_MAX_6_OFFSET UNITYSDK_OFFSET(0x1EDCECA0)
#define SYSTEM_MATH_MAX_OFFSET UNITYSDK_OFFSET(0x1EDCEC30)
#define SYSTEM_MATH_MIN_1_OFFSET UNITYSDK_OFFSET(0x1EDB17F0)
#define SYSTEM_MATH_MIN_2_OFFSET UNITYSDK_OFFSET(0x1EDCED00)
#define SYSTEM_MATH_MIN_3_OFFSET UNITYSDK_OFFSET(0x1EDCED10)
#define SYSTEM_MATH_MIN_4_OFFSET UNITYSDK_OFFSET(0x1EDCED20)
#define SYSTEM_MATH_MIN_5_OFFSET UNITYSDK_OFFSET(0x1EDCED60)
#define SYSTEM_MATH_MIN_OFFSET UNITYSDK_OFFSET(0x1EDCECF0)
#define SYSTEM_MATH_POW_OFFSET UNITYSDK_OFFSET(0x1EDCE6E0)
#define SYSTEM_MATH_ROUND_1_OFFSET UNITYSDK_OFFSET(0x1EDCE340)
#define SYSTEM_MATH_ROUND_2_OFFSET UNITYSDK_OFFSET(0x1EDCE3D0)
#define SYSTEM_MATH_ROUND_3_OFFSET UNITYSDK_OFFSET(0x1EDCE3E0)
#define SYSTEM_MATH_ROUND_4_OFFSET UNITYSDK_OFFSET(0x1EDCE520)
#define SYSTEM_MATH_ROUND_5_OFFSET UNITYSDK_OFFSET(0x1EDCE590)
#define SYSTEM_MATH_ROUND_OFFSET UNITYSDK_OFFSET(0x1EDCE290)
#define SYSTEM_MATH_SIGN_1_OFFSET UNITYSDK_OFFSET(0x1EDCEE70)
#define SYSTEM_MATH_SIGN_2_OFFSET UNITYSDK_OFFSET(0x1EDCEE90)
#define SYSTEM_MATH_SIGN_3_OFFSET UNITYSDK_OFFSET(0x1EDCE1B0)
#define SYSTEM_MATH_SIGN_OFFSET UNITYSDK_OFFSET(0x1EDCEE60)
#define SYSTEM_MATH_SIN_OFFSET UNITYSDK_OFFSET(0x1EDCE270)
#define SYSTEM_MATH_SPLITFRACTIONDOUBLE_OFFSET UNITYSDK_OFFSET(0x1EDCE1A0)
#define SYSTEM_MATH_SQRT_OFFSET UNITYSDK_OFFSET(0x1EDCE690)
#define SYSTEM_MATH_TAN_OFFSET UNITYSDK_OFFSET(0x1EDCE280)
#define SYSTEM_MATH_TRUNCATE_1_OFFSET UNITYSDK_OFFSET(0x1EDCE670)
#define SYSTEM_MATH_TRUNCATE_OFFSET UNITYSDK_OFFSET(0x1EDCE600)

namespace System
{
	inline static constexpr unsigned int Math_TypeDefinitionIndex = 295;

	class Math : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Double>** StaticGet_roundPower10Double()
		{
			return (::Il2CppArray<::System::Double>**)UnitySDK::FromName("System", "Math")->GetStaticField(0x121D0);
		}

		static ::System::Double* StaticGet_doubleRoundLimit()
		{
			return (::System::Double*)UnitySDK::FromName("System", "Math")->GetStaticField(0x3A70);
		}

		// static const ::System::Object maxRoundingDigits; // 0x0
		// static const ::System::Object PI; // 0x0
		// static const ::System::Object E; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_MATH_CCTOR_OFFSET))();
		}

		static ::System::Double Acos(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ACOS_OFFSET))(a1);
		}

		static ::System::Double Asin(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ASIN_OFFSET))(a1);
		}

		static ::System::Double Atan(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ATAN_OFFSET))(a1);
		}

		static ::System::Double Atan2(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ATAN2_OFFSET))(a1, a2);
		}

		static ::System::Double Ceiling(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_CEILING_OFFSET))(a1);
		}

		static ::System::Double Cos(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_COS_OFFSET))(a1);
		}

		static ::System::Decimal Floor(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_FLOOR_OFFSET))(a1);
		}

		static ::System::Double Floor_1(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_FLOOR_1_OFFSET))(a1);
		}

		static ::System::Double InternalRound(::System::Double a1, ::System::Int32 a2, ::System::MidpointRounding a3)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_MATH_INTERNALROUND_OFFSET))(a1, a2, a3);
		}

		static ::System::Double InternalTruncate(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_INTERNALTRUNCATE_OFFSET))(a1);
		}

		static ::System::Double Sin(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIN_OFFSET))(a1);
		}

		static ::System::Double Tan(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TAN_OFFSET))(a1);
		}

		static ::System::Double Round(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_OFFSET))(a1);
		}

		static ::System::Double Round_1(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_1_OFFSET))(a1, a2);
		}

		static ::System::Double Round_2(::System::Double a1, ::System::MidpointRounding a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_2_OFFSET))(a1, a2);
		}

		static ::System::Double Round_3(::System::Double a1, ::System::Int32 a2, ::System::MidpointRounding a3)
		{
			return ((::System::Double(*)(::System::Double, ::System::Int32, ::System::MidpointRounding))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Decimal Round_4(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_4_OFFSET))(a1);
		}

		static ::System::Decimal Round_5(::System::Decimal a1, ::System::Int32 a2)
		{
			return ((::System::Decimal(*)(::System::Decimal, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ROUND_5_OFFSET))(a1, a2);
		}

		static ::System::Double SplitFractionDouble(::PVOID a1)
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SPLITFRACTIONDOUBLE_OFFSET))(a1);
		}

		static ::System::Decimal Truncate(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TRUNCATE_OFFSET))(a1);
		}

		static ::System::Double Truncate_1(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_TRUNCATE_1_OFFSET))(a1);
		}

		static ::System::Double Sqrt(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SQRT_OFFSET))(a1);
		}

		static ::System::Double Log(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG_OFFSET))(a1);
		}

		static ::System::Double Log10(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG10_OFFSET))(a1);
		}

		static ::System::Double Exp(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_EXP_OFFSET))(a1);
		}

		static ::System::Double Pow(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_POW_OFFSET))(a1, a2);
		}

		static ::System::Double IEEERemainder(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_IEEEREMAINDER_OFFSET))(a1, a2);
		}

		static ::System::Int32 Abs(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_OFFSET))(a1);
		}

		static ::System::Int32 AbsHelper(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABSHELPER_OFFSET))(a1);
		}

		static ::System::Int64 Abs_1(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_1_OFFSET))(a1);
		}

		static ::System::Int64 AbsHelper_1(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABSHELPER_1_OFFSET))(a1);
		}

		static ::System::Single Abs_2(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_2_OFFSET))(a1);
		}

		static ::System::Double Abs_3(::System::Double a1)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_3_OFFSET))(a1);
		}

		static ::System::Decimal Abs_4(::System::Decimal a1)
		{
			return ((::System::Decimal(*)(::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_MATH_ABS_4_OFFSET))(a1);
		}

		static ::System::Byte Max(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Byte(*)(::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_OFFSET))(a1, a2);
		}

		static ::System::Int32 Max_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_1_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Max_2(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_2_OFFSET))(a1, a2);
		}

		static ::System::Int64 Max_3(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_3_OFFSET))(a1, a2);
		}

		static ::System::UInt64 Max_4(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_4_OFFSET))(a1, a2);
		}

		static ::System::Single Max_5(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_5_OFFSET))(a1, a2);
		}

		static ::System::Double Max_6(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MAX_6_OFFSET))(a1, a2);
		}

		static ::System::Int16 Min(::System::Int16 a1, ::System::Int16 a2)
		{
			return ((::System::Int16(*)(::System::Int16, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_OFFSET))(a1, a2);
		}

		static ::System::Int32 Min_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_1_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Min_2(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_2_OFFSET))(a1, a2);
		}

		static ::System::Int64 Min_3(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_3_OFFSET))(a1, a2);
		}

		static ::System::Single Min_4(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_4_OFFSET))(a1, a2);
		}

		static ::System::Double Min_5(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_MIN_5_OFFSET))(a1, a2);
		}

		static ::System::Double Log_1(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_LOG_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 Sign(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_OFFSET))(a1);
		}

		static ::System::Int32 Sign_1(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_1_OFFSET))(a1);
		}

		static ::System::Int32 Sign_2(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_2_OFFSET))(a1);
		}

		static ::System::Int32 Sign_3(::System::Double a1)
		{
			return ((::System::Int32(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_MATH_SIGN_3_OFFSET))(a1);
		}

	};
}
