#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/NumberBuffer.h"

#define SYSTEM_NUMBER_9DF8B82F6EF63C29_DECIMALTONUMBER_OFFSET UNITYSDK_OFFSET(0x1F41BDD0)
#define SYSTEM_NUMBER_9DF8B82F6EF63C29_NUMBERBUFFERTODECIMAL_OFFSET UNITYSDK_OFFSET(0x1F41ED00)
#define SYSTEM_NUMBER_9DF8B82F6EF63C29_ROUNDNUMBER_OFFSET UNITYSDK_OFFSET(0x1F41CD70)
#define SYSTEM_NUMBER_9DF8B82F6EF63C29__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4206C0)

namespace System
{
	inline static constexpr unsigned int Number_9DF8B82F6EF63C29_TypeDefinitionIndex = 6560;

	class Number_9DF8B82F6EF63C29 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int16>** StaticGet_s_rgexp64Power10By16()
		{
			return (::Il2CppArray<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(Number_9DF8B82F6EF63C29_TypeDefinitionIndex)->GetStaticField(0x5A00);
		}
		static ::Il2CppArray<::System::SByte>** StaticGet_s_rgexp64Power10()
		{
			return (::Il2CppArray<::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(Number_9DF8B82F6EF63C29_TypeDefinitionIndex)->GetStaticField(0x5A08);
		}
		static ::Il2CppArray<::System::UInt64>** StaticGet_s_rgval64Power10()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Number_9DF8B82F6EF63C29_TypeDefinitionIndex)->GetStaticField(0x5A10);
		}
		static ::Il2CppArray<::System::UInt64>** StaticGet_s_rgval64Power10By16()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Number_9DF8B82F6EF63C29_TypeDefinitionIndex)->GetStaticField(0x5A18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_9DF8B82F6EF63C29__CCTOR_OFFSET))();
		}

		static ::System::Void RoundNumber(::System::NumberBuffer& number, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::System::NumberBuffer&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_9DF8B82F6EF63C29_ROUNDNUMBER_OFFSET))(number, pos);
		}

		static ::System::Boolean NumberBufferToDecimal(::System::NumberBuffer& number, ::System::Decimal& value)
		{
			return ((::System::Boolean(*)(::System::NumberBuffer&, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_9DF8B82F6EF63C29_NUMBERBUFFERTODECIMAL_OFFSET))(number, value);
		}

		static ::System::Void DecimalToNumber(::System::Decimal value, ::System::NumberBuffer& number)
		{
			return ((::System::Void(*)(::System::Decimal, ::System::NumberBuffer&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_9DF8B82F6EF63C29_DECIMALTONUMBER_OFFSET))(value, number);
		}
	};
}
