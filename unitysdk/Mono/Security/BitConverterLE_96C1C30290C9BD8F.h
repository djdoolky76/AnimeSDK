#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1C02CFD0)
#define MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1C02B640)
#define MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_GETUINTBYTES_OFFSET UNITYSDK_OFFSET(0x1C02CDF0)
#define MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_GETULONGBYTES_OFFSET UNITYSDK_OFFSET(0x1C02CEA0)
#define MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_TOINT32_OFFSET UNITYSDK_OFFSET(0x1C02CA70)
#define MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1C02D130)
#define MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1C02CA40)
#define MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_UINTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C02D060)
#define MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_USHORTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C02CFF0)

namespace Mono::Security
{
	inline static constexpr unsigned int BitConverterLE_96C1C30290C9BD8F_TypeDefinitionIndex = 2259;

	class BitConverterLE_96C1C30290C9BD8F : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* GetUIntBytes(::PVOID a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_GETUINTBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetULongBytes(::PVOID a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_GETULONGBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_GETBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_1(::System::Int64 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_GETBYTES_1_OFFSET))(a1);
		}

		static ::System::Void UShortFromBytes(::PVOID a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_USHORTFROMBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UIntFromBytes(::PVOID a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_UINTFROMBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 ToInt32(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_TOINT32_OFFSET))(a1, a2);
		}

		static ::System::UInt16 ToUInt16(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_TOUINT16_OFFSET))(a1, a2);
		}

		static ::System::UInt32 ToUInt32(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_96C1C30290C9BD8F_TOUINT32_OFFSET))(a1, a2);
		}

	};
}
