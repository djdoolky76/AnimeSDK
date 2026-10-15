#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1C070330)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1C070350)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1C06F630)
#define MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET UNITYSDK_OFFSET(0x1C070150)
#define MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET UNITYSDK_OFFSET(0x1C070200)
#define MONO_SECURITY_BITCONVERTERLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1C0705F0)
#define MONO_SECURITY_BITCONVERTERLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1C0705C0)
#define MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C070370)
#define MONO_SECURITY_BITCONVERTERLE_ULONGFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C070440)

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
