#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1C041BF0)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1C041C10)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1C040EF0)
#define MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET UNITYSDK_OFFSET(0x1C041A10)
#define MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET UNITYSDK_OFFSET(0x1C041AC0)
#define MONO_SECURITY_BITCONVERTERLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1C041EB0)
#define MONO_SECURITY_BITCONVERTERLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1C041E80)
#define MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C041C30)
#define MONO_SECURITY_BITCONVERTERLE_ULONGFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C041D00)

namespace Mono::Security
{
	inline static constexpr unsigned int BitConverterLE_TypeDefinitionIndex = 47;

	class BitConverterLE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* GetUIntBytes(::PVOID a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetULongBytes(::PVOID a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_1(::System::Single a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Single))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_2(::System::Double a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Double))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_2_OFFSET))(a1);
		}

		static ::System::Void UIntFromBytes(::PVOID a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ULongFromBytes(::PVOID a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_ULONGFROMBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Single ToSingle(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOSINGLE_OFFSET))(a1, a2);
		}

		static ::System::Double ToDouble(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TODOUBLE_OFFSET))(a1, a2);
		}

	};
}
