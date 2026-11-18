#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1FCFA000)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1FCFA020)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1FCFA040)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_4_OFFSET UNITYSDK_OFFSET(0x1FCFA060)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_5_OFFSET UNITYSDK_OFFSET(0x1FCFA080)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_6_OFFSET UNITYSDK_OFFSET(0x1FCFA0A0)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_7_OFFSET UNITYSDK_OFFSET(0x1FCFA0C0)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_8_OFFSET UNITYSDK_OFFSET(0x1FCFA0E0)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_9_OFFSET UNITYSDK_OFFSET(0x1FCFA100)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1FCF9FA0)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETUINTBYTES_OFFSET UNITYSDK_OFFSET(0x1FCF9BC0)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETULONGBYTES_OFFSET UNITYSDK_OFFSET(0x1FCF9D30)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETUSHORTBYTES_OFFSET UNITYSDK_OFFSET(0x1FCF9AF0)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1FCFA490)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1FCFA4D0)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1FCFA650)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOINT16_OFFSET UNITYSDK_OFFSET(0x1FCFA500)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOINT32_OFFSET UNITYSDK_OFFSET(0x1FCFA530)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOINT64_OFFSET UNITYSDK_OFFSET(0x1FCFA560)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1FCFA620)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1FCFA590)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1FCFA5C0)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1FCFA5F0)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_UINTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1FCFA1C0)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_ULONGFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1FCFA300)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_USHORTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1FCFA120)
#define MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCF9AE0)

namespace Mono::Security
{
	inline static constexpr unsigned int BitConverterLE_A110784FAE8400C1_TypeDefinitionIndex = 2272;

	class BitConverterLE_A110784FAE8400C1 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* GetUShortBytes(::PVOID bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETUSHORTBYTES_OFFSET))(bytes);
		}

		static ::Il2CppArray<::System::Byte>* GetUIntBytes(::PVOID bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETUINTBYTES_OFFSET))(bytes);
		}

		static ::Il2CppArray<::System::Byte>* GetULongBytes(::PVOID bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETULONGBYTES_OFFSET))(bytes);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes(::System::Boolean value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_1(::System::Char value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Char))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_1_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_2(::System::Int16 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int16))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_2_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_3(::System::Int32 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_3_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_4(::System::Int64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_4_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_5(::System::UInt16 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_5_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_6(::System::UInt32 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_6_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_7(::System::UInt64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_7_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_8(::System::Single value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Single))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_8_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_9(::System::Double value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Double))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_GETBYTES_9_OFFSET))(value);
		}

		static ::System::Void UShortFromBytes(::PVOID dst, ::Il2CppArray<::System::Byte>* src, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_USHORTFROMBYTES_OFFSET))(dst, src, startIndex);
		}

		static ::System::Void UIntFromBytes(::PVOID dst, ::Il2CppArray<::System::Byte>* src, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_UINTFROMBYTES_OFFSET))(dst, src, startIndex);
		}

		static ::System::Void ULongFromBytes(::PVOID dst, ::Il2CppArray<::System::Byte>* src, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_ULONGFROMBYTES_OFFSET))(dst, src, startIndex);
		}

		static ::System::Boolean ToBoolean(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOBOOLEAN_OFFSET))(value, startIndex);
		}

		static ::System::Char ToChar(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Char(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOCHAR_OFFSET))(value, startIndex);
		}

		static ::System::Int16 ToInt16(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Int16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOINT16_OFFSET))(value, startIndex);
		}

		static ::System::Int32 ToInt32(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOINT32_OFFSET))(value, startIndex);
		}

		static ::System::Int64 ToInt64(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOINT64_OFFSET))(value, startIndex);
		}

		static ::System::UInt16 ToUInt16(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOUINT16_OFFSET))(value, startIndex);
		}

		static ::System::UInt32 ToUInt32(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOUINT32_OFFSET))(value, startIndex);
		}

		static ::System::UInt64 ToUInt64(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOUINT64_OFFSET))(value, startIndex);
		}

		static ::System::Single ToSingle(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TOSINGLE_OFFSET))(value, startIndex);
		}

		static ::System::Double ToDouble(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_A110784FAE8400C1_TODOUBLE_OFFSET))(value, startIndex);
		}
	};
}
