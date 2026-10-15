#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/NumberBuffer.h"

#define SYSTEM_NUMBER_9011FAD97750D224_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE45BD0)
#define SYSTEM_NUMBER_9011FAD97750D224_DECIMALTONUMBER_OFFSET UNITYSDK_OFFSET(0x1EE41920)
#define SYSTEM_NUMBER_9011FAD97750D224_NUMBERBUFFERTODECIMAL_OFFSET UNITYSDK_OFFSET(0x1EE44560)
#define SYSTEM_NUMBER_9011FAD97750D224_ROUNDNUMBER_OFFSET UNITYSDK_OFFSET(0x1EE42620)

namespace System
{
	class Number_9011FAD97750D224 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int16>** StaticGet_s_rgexp64Power10By16()
		{
			return (::Il2CppArray<::System::Int16>**)UnitySDK::FromName("System", "Number")->GetStaticField(0x1A0);
		}

		static ::Il2CppArray<::System::UInt64>** StaticGet_s_rgval64Power10()
		{
			return (::Il2CppArray<::System::UInt64>**)UnitySDK::FromName("System", "Number")->GetStaticField(0x1A8);
		}

		static ::Il2CppArray<::System::SByte>** StaticGet_s_rgexp64Power10()
		{
			return (::Il2CppArray<::System::SByte>**)UnitySDK::FromName("System", "Number")->GetStaticField(0x1B0);
		}

		static ::Il2CppArray<::System::UInt64>** StaticGet_s_rgval64Power10By16()
		{
			return (::Il2CppArray<::System::UInt64>**)UnitySDK::FromName("System", "Number")->GetStaticField(0x1B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_9011FAD97750D224_CCTOR_OFFSET))();
		}

		static ::System::Void RoundNumber(::System::NumberBuffer a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::NumberBuffer, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_9011FAD97750D224_ROUNDNUMBER_OFFSET))(a1, a2);
		}

		static ::System::Boolean NumberBufferToDecimal(::System::NumberBuffer a1, ::System::Decimal a2)
		{
			return ((::System::Boolean(*)(::System::NumberBuffer, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_9011FAD97750D224_NUMBERBUFFERTODECIMAL_OFFSET))(a1, a2);
		}

		static ::System::Void DecimalToNumber(::System::Decimal a1, ::System::NumberBuffer a2)
		{
			return ((::System::Void(*)(::System::Decimal, ::System::NumberBuffer))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_9011FAD97750D224_DECIMALTONUMBER_OFFSET))(a1, a2);
		}

	};
}
