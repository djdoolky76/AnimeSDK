#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Numerics/BigIntegerCalculator_BitsBuffer.h"
#include "unitysdk/System/Numerics/BigIntegerCalculator_FastReducer.h"
namespace System { class Object; }

#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_1_OFFSET UNITYSDK_OFFSET(0x2012CC30)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_OFFSET UNITYSDK_OFFSET(0x2012CBC0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDDIVISOR_OFFSET UNITYSDK_OFFSET(0x2012A6A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDSELF_OFFSET UNITYSDK_OFFSET(0x20129D20)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_1_OFFSET UNITYSDK_OFFSET(0x20126A20)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_2_OFFSET UNITYSDK_OFFSET(0x20129C00)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET UNITYSDK_OFFSET(0x20126960)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x2012EDC0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_1_OFFSET UNITYSDK_OFFSET(0x20129FF0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_OFFSET UNITYSDK_OFFSET(0x20123260)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x2012A050)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDEGUESSTOOBIG_OFFSET UNITYSDK_OFFSET(0x2012A620)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_1_OFFSET UNITYSDK_OFFSET(0x20128ED0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_2_OFFSET UNITYSDK_OFFSET(0x201226F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_3_OFFSET UNITYSDK_OFFSET(0x20128F80)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_4_OFFSET UNITYSDK_OFFSET(0x2012A0B0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET UNITYSDK_OFFSET(0x20122620)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_EXTRACTDIGITS_OFFSET UNITYSDK_OFFSET(0x2012ACA0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_1_OFFSET UNITYSDK_OFFSET(0x20123890)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_2_OFFSET UNITYSDK_OFFSET(0x20123120)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_3_OFFSET UNITYSDK_OFFSET(0x20123950)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_4_OFFSET UNITYSDK_OFFSET(0x2012A7F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_OFFSET UNITYSDK_OFFSET(0x201230A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEADINGZEROS_OFFSET UNITYSDK_OFFSET(0x2012A5B0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEHMERCORE_OFFSET UNITYSDK_OFFSET(0x2012AFD0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x20128DF0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x2012DA80)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x20128CB0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWBOUND_OFFSET UNITYSDK_OFFSET(0x2012B380)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_1_OFFSET UNITYSDK_OFFSET(0x2012B570)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_2_OFFSET UNITYSDK_OFFSET(0x2012B940)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_3_OFFSET UNITYSDK_OFFSET(0x2012B8A0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_4_OFFSET UNITYSDK_OFFSET(0x2012BD40)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_5_OFFSET UNITYSDK_OFFSET(0x2012BAF0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_6_OFFSET UNITYSDK_OFFSET(0x2012BEC0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_7_OFFSET UNITYSDK_OFFSET(0x2012C950)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_8_OFFSET UNITYSDK_OFFSET(0x2012C510)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_9_OFFSET UNITYSDK_OFFSET(0x2012C9D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_OFFSET UNITYSDK_OFFSET(0x2012B440)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_1_OFFSET UNITYSDK_OFFSET(0x20124BA0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_2_OFFSET UNITYSDK_OFFSET(0x20124710)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_3_OFFSET UNITYSDK_OFFSET(0x20124500)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_4_OFFSET UNITYSDK_OFFSET(0x201246D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_5_OFFSET UNITYSDK_OFFSET(0x201243B0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_6_OFFSET UNITYSDK_OFFSET(0x201249D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_7_OFFSET UNITYSDK_OFFSET(0x20124890)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_8_OFFSET UNITYSDK_OFFSET(0x20124930)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_9_OFFSET UNITYSDK_OFFSET(0x201247F0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_OFFSET UNITYSDK_OFFSET(0x20124C70)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_1_OFFSET UNITYSDK_OFFSET(0x201237D0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_OFFSET UNITYSDK_OFFSET(0x201236E0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_1_OFFSET UNITYSDK_OFFSET(0x2012CC90)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET UNITYSDK_OFFSET(0x20128D60)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTCORE_OFFSET UNITYSDK_OFFSET(0x2012D8E0)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTDIVISOR_OFFSET UNITYSDK_OFFSET(0x2012A660)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTSELF_OFFSET UNITYSDK_OFFSET(0x20129F10)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x20126E90)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_2_OFFSET UNITYSDK_OFFSET(0x20129E00)
#define SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x20126DF0)

namespace System::Numerics
{
	inline static constexpr unsigned int BigIntegerCalculator_TypeDefinitionIndex = 3837;

	class BigIntegerCalculator : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MultiplyThreshold()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Numerics", "BigIntegerCalculator")->GetStaticField(0x20);
		}

		static ::System::Int32* StaticGet_ReducerThreshold()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Numerics", "BigIntegerCalculator")->GetStaticField(0x24);
		}

		static ::System::Int32* StaticGet_SquareThreshold()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Numerics", "BigIntegerCalculator")->GetStaticField(0x28);
		}

		static ::System::Int32* StaticGet_AllocationThreshold()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Numerics", "BigIntegerCalculator")->GetStaticField(0x2C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* Add(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Add_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_1_OFFSET))(a1, a2);
		}

		static ::System::Void Add_2(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::PVOID a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADD_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void AddSelf(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDSELF_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::UInt32>* Subtract(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Subtract_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_1_OFFSET))(a1, a2);
		}

		static ::System::Void Subtract_2(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::PVOID a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACT_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SubtractSelf(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTSELF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 Compare(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_OFFSET))(a1, a2);
		}

		static ::System::Int32 Compare_1(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_COMPARE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::UInt32>* Divide(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* Divide_1(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_1_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Remainder(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Divide_2(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Object* a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_2_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* Divide_3(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_3_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Remainder_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_REMAINDER_1_OFFSET))(a1, a2);
		}

		static ::System::Void Divide_4(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::PVOID a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDE_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::UInt32 AddDivisor(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ADDDIVISOR_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 SubtractDivisor(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::System::UInt64 a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTDIVISOR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean DivideGuessTooBig(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::System::UInt64, ::System::UInt64, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_DIVIDEGUESSTOOBIG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::System::UInt32>* CreateCopy(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_CREATECOPY_OFFSET))(a1);
		}

		static ::System::Int32 LeadingZeros(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEADINGZEROS_OFFSET))(a1);
		}

		static ::System::UInt32 Gcd(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_OFFSET))(a1, a2);
		}

		static ::System::UInt64 Gcd_1(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_1_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Gcd_2(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_2_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Gcd_3(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_3_OFFSET))(a1, a2);
		}

		static ::System::Void Gcd_4(::System::Numerics::BigIntegerCalculator_BitsBuffer a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer a2)
		{
			return ((::System::Void(*)(::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_GCD_4_OFFSET))(a1, a2);
		}

		static ::System::Void ExtractDigits(::System::Numerics::BigIntegerCalculator_BitsBuffer a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::Void(*)(::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_EXTRACTDIGITS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LehmerCore(::System::Numerics::BigIntegerCalculator_BitsBuffer a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer a2, ::System::Int64 a3, ::System::Int64 a4, ::System::Int64 a5, ::System::Int64 a6)
		{
			return ((::System::Void(*)(::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_LEHMERCORE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::Il2CppArray<::System::UInt32>* Pow(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_1(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* PowCore(::System::UInt32 a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::Numerics::BigIntegerCalculator_BitsBuffer))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_OFFSET))(a1, a2);
		}

		static ::System::Int32 PowBound(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWBOUND_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PowCore_1(::System::UInt32 a1, ::System::Numerics::BigIntegerCalculator_BitsBuffer a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer a3, ::System::Numerics::BigIntegerCalculator_BitsBuffer a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 Pow_2(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_2_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 Pow_3(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_3_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 Pow_4(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_4_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 Pow_5(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_5_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 PowCore_2(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 PowCore_3(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt64 a3, ::System::UInt64 a4)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_6(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_6_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_7(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_7_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_8(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_8_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* Pow_9(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POW_9_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* PowCore_4(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_4_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::UInt32>* PowCore_5(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer a3)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PowCore_6(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer a3, ::System::Numerics::BigIntegerCalculator_BitsBuffer a4, ::System::Numerics::BigIntegerCalculator_BitsBuffer a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void PowCore_7(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer a3, ::System::Numerics::BigIntegerCalculator_BitsBuffer a4, ::System::Numerics::BigIntegerCalculator_BitsBuffer a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_7_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void PowCore_8(::Il2CppArray<::System::UInt32>* a1, ::System::Numerics::BigIntegerCalculator_FastReducer a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer a3, ::System::Numerics::BigIntegerCalculator_BitsBuffer a4, ::System::Numerics::BigIntegerCalculator_BitsBuffer a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Numerics::BigIntegerCalculator_FastReducer, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_8_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void PowCore_9(::System::UInt32 a1, ::System::Numerics::BigIntegerCalculator_FastReducer a2, ::System::Numerics::BigIntegerCalculator_BitsBuffer a3, ::System::Numerics::BigIntegerCalculator_BitsBuffer a4, ::System::Numerics::BigIntegerCalculator_BitsBuffer a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Numerics::BigIntegerCalculator_FastReducer, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer, ::System::Numerics::BigIntegerCalculator_BitsBuffer))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_POWCORE_9_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 ActualLength(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_OFFSET))(a1);
		}

		static ::System::Int32 ActualLength_1(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_ACTUALLENGTH_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Square(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_OFFSET))(a1);
		}

		static ::System::Void Square_1(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SQUARE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::UInt32>* Multiply(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* Multiply_1(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_1_OFFSET))(a1, a2);
		}

		static ::System::Void Multiply_2(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::PVOID a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_MULTIPLY_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SubtractCore(::PVOID a1, ::System::Int32 a2, ::PVOID a3, ::System::Int32 a4, ::PVOID a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::System::Int32, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGERCALCULATOR_SUBTRACTCORE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};
}
