#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger_B3F979F09C3940D2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EADE0CABA1B6337C.h"
#include "unitysdk/FCC2F8EABCD6F945.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_NUMERICS_BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x3E052C0)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3E05480)
#define SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3E05670)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E05780)
#define SYSTEM_NUMERICS_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E058B0)
#define SYSTEM_NUMERICS_BIGINTEGER_GETDIFFLENGTH_OFFSET UNITYSDK_OFFSET(0x3E05960)
#define SYSTEM_NUMERICS_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E059E0)
#define SYSTEM_NUMERICS_BIGINTEGER_GETPARTSFORBITMANIPULATION_OFFSET UNITYSDK_OFFSET(0x3E05A40)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x3E075C0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x3E077D0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x3E07940)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x3E07960)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x3E07990)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x3E079B0)
#define SYSTEM_NUMERICS_BIGINTEGER_OP_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x3E07CA0)
#define SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x3E05B30)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3E05E30)
#define SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E05D70)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYGETBYTES_OFFSET UNITYSDK_OFFSET(0x3E05F30)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYWRITEBYTES_OFFSET UNITYSDK_OFFSET(0x3E06520)
#define SYSTEM_NUMERICS_BIGINTEGER_TRYWRITEORCOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x3E065E0)
#define SYSTEM_NUMERICS_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E06690)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3E07540)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3E06BF0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F77300)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3E06DC0)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x3E06B00)
#define SYSTEM_NUMERICS_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x3E068D0)

namespace System::Numerics
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 21206;

	struct alignas(8) BigInteger
	{
		static ::System::Numerics::BigInteger* StaticGet_s_bnMinInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnOneInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnZeroInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::Numerics::BigInteger* StaticGet_s_bnMinusOneInt()
		{
			return (::System::Numerics::BigInteger*)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_success()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		::System::Int32 _sign; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* _bits; // 0x18

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		/*
		static ::System::Numerics::BigInteger op_Addition(::System::Numerics::BigInteger A11D4EC92205DAEE, ::System::Numerics::BigInteger F38046B0C91E49B1)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_ADDITION_OFFSET))(A11D4EC92205DAEE, F38046B0C91E49B1);
		}
		*/

		/*
		static ::System::Numerics::BigInteger op_Implicit(::System::Int64 E937D4885DAA1AE8)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_OFFSET))(E937D4885DAA1AE8);
		}
		*/

		/*
		static ::System::Numerics::BigInteger Subtract(::Il2CppArray<::System::UInt32>* F8B386EA58A58DDF, ::System::Int32 BD543744C7B22EDE, ::Il2CppArray<::System::UInt32>* A646A4CA1626C7F5, ::System::Int32 B07DADA905E7BB63)
		{
			return ((::System::Numerics::BigInteger(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_SUBTRACT_OFFSET))(F8B386EA58A58DDF, BD543744C7B22EDE, A646A4CA1626C7F5, B07DADA905E7BB63);
		}
		*/

		::System::Void _ctor(::Il2CppArray<::System::UInt32>* E937D4885DAA1AE8, ::System::Boolean EFBF206F8BE9C7C8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_OFFSET))(this, E937D4885DAA1AE8, EFBF206F8BE9C7C8);
		}

		::System::Void _ctor_1(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_1_OFFSET))(this, E937D4885DAA1AE8);
		}

		/*
		static ::System::Boolean GetPartsForBitManipulation(::System::Numerics::BigInteger& BB8C609F76620E45, ::Il2CppArray<::System::UInt32>*& B0EA1D07E1AF5D79, ::System::Int32& B5A494569A176FAD)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigInteger&, ::Il2CppArray<::System::UInt32>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETPARTSFORBITMANIPULATION_OFFSET))(BB8C609F76620E45, B0EA1D07E1AF5D79, B5A494569A176FAD);
		}
		*/

		::System::Void _ctor_2(::System::Int64 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_2_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor_3(::System::Int32 B8A243EF3616E270, ::Il2CppArray<::System::UInt32>* A0855477613C8BFE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_3_OFFSET))(this, B8A243EF3616E270, A0855477613C8BFE);
		}

		/*
		::System::Boolean Equals_1(::System::Numerics::BigInteger BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::Il2CppArray<::System::Byte>* TryGetBytes(::System::Numerics::BigInteger_B3F979F09C3940D2 A84D57260767D5BD, ::EADE0CABA1B6337C<::System::Byte> B80ACB93A9EE7636, ::System::Boolean A7AFD73FF835DA80, ::System::Boolean A381B1F47381DEED, ::System::Int32& FD2A34EC28C3A2A6)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Numerics::BigInteger_B3F979F09C3940D2, ::EADE0CABA1B6337C<::System::Byte>, ::System::Boolean, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYGETBYTES_OFFSET))(this, A84D57260767D5BD, B80ACB93A9EE7636, A7AFD73FF835DA80, A381B1F47381DEED, FD2A34EC28C3A2A6);
		}

		/*
		static ::System::Numerics::BigInteger op_Implicit_1(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_1_OFFSET))(E937D4885DAA1AE8);
		}
		*/

		/*
		static ::System::Int32 op_Explicit(::System::Numerics::BigInteger E937D4885DAA1AE8)
		{
			return ((::System::Int32(*)(::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_EXPLICIT_OFFSET))(E937D4885DAA1AE8);
		}
		*/

		::System::Boolean TryWriteOrCountBytes(::EADE0CABA1B6337C<::System::Byte> B80ACB93A9EE7636, ::System::Int32& FD2A34EC28C3A2A6, ::System::Boolean A7AFD73FF835DA80, ::System::Boolean A381B1F47381DEED)
		{
			return ((::System::Boolean(*)(::PVOID, ::EADE0CABA1B6337C<::System::Byte>, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYWRITEORCOUNTBYTES_OFFSET))(this, B80ACB93A9EE7636, FD2A34EC28C3A2A6, A7AFD73FF835DA80, A381B1F47381DEED);
		}

		static ::System::Int32 GetDiffLength(::Il2CppArray<::System::UInt32>* EE8EC207088A621A, ::Il2CppArray<::System::UInt32>* AED22676A1B96DB8, ::System::Int32 F12FE34352FE9770)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETDIFFLENGTH_OFFSET))(EE8EC207088A621A, AED22676A1B96DB8, F12FE34352FE9770);
		}

		::System::Int32 CompareTo(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_OFFSET))(this, A86A90C31A146E9C);
		}

		/*
		static ::System::Numerics::BigInteger op_Implicit_2(::System::Byte E937D4885DAA1AE8)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_IMPLICIT_2_OFFSET))(E937D4885DAA1AE8);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Numerics::BigInteger op_LeftShift(::System::Numerics::BigInteger E937D4885DAA1AE8, ::System::Int32 F6D09B1F9DAE57D2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_LEFTSHIFT_OFFSET))(E937D4885DAA1AE8, F6D09B1F9DAE57D2);
		}
		*/

		::System::Void _ctor_4(::FCC2F8EABCD6F945<::System::Byte> E937D4885DAA1AE8, ::System::Boolean A7AFD73FF835DA80, ::System::Boolean A381B1F47381DEED)
		{
			return ((::System::Void(*)(::PVOID, ::FCC2F8EABCD6F945<::System::Byte>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_4_OFFSET))(this, E937D4885DAA1AE8, A7AFD73FF835DA80, A381B1F47381DEED);
		}

		/*
		::System::Int32 CompareTo_1(::System::Numerics::BigInteger BEEE7A5A60941632)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_COMPARETO_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::String* ToString_1(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* AD687A4B9A03EFB2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TOSTRING_1_OFFSET))(this, F1B74DA73881CF9B, AD687A4B9A03EFB2);
		}

		/*
		static ::System::Numerics::BigInteger op_RightShift(::System::Numerics::BigInteger E937D4885DAA1AE8, ::System::Int32 F6D09B1F9DAE57D2)
		{
			return ((::System::Numerics::BigInteger(*)(::System::Numerics::BigInteger, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_OP_RIGHTSHIFT_OFFSET))(E937D4885DAA1AE8, F6D09B1F9DAE57D2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Numerics::BigInteger Add(::Il2CppArray<::System::UInt32>* F8B386EA58A58DDF, ::System::Int32 BD543744C7B22EDE, ::Il2CppArray<::System::UInt32>* A646A4CA1626C7F5, ::System::Int32 B07DADA905E7BB63)
		{
			return ((::System::Numerics::BigInteger(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_ADD_OFFSET))(F8B386EA58A58DDF, BD543744C7B22EDE, A646A4CA1626C7F5, B07DADA905E7BB63);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CCTOR_OFFSET))();
		}

		::System::Boolean TryWriteBytes(::EADE0CABA1B6337C<::System::Byte> B80ACB93A9EE7636, ::System::Int32& FD2A34EC28C3A2A6, ::System::Boolean A7AFD73FF835DA80, ::System::Boolean A381B1F47381DEED)
		{
			return ((::System::Boolean(*)(::PVOID, ::EADE0CABA1B6337C<::System::Byte>, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER_TRYWRITEBYTES_OFFSET))(this, B80ACB93A9EE7636, FD2A34EC28C3A2A6, A7AFD73FF835DA80, A381B1F47381DEED);
		}

		::System::Void _ctor_5(::Il2CppArray<::System::Byte>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGINTEGER__CTOR_5_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
