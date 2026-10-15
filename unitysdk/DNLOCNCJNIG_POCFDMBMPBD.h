#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define DNLOCNCJNIG_POCFDMBMPBD_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define DNLOCNCJNIG_POCFDMBMPBD_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define DNLOCNCJNIG_POCFDMBMPBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define DNLOCNCJNIG_POCFDMBMPBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

inline static constexpr unsigned int DNLOCNCJNIG_POCFDMBMPBD_TypeDefinitionIndex = 12858;

	struct alignas(4) DNLOCNCJNIG_POCFDMBMPBD
	{
		::System::UInt32 FMECKACCOCI; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNLOCNCJNIG_POCFDMBMPBD_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLOCNCJNIG_POCFDMBMPBD_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::DNLOCNCJNIG_POCFDMBMPBD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNLOCNCJNIG_POCFDMBMPBD))((::PBYTE)hIl2Cpp + DNLOCNCJNIG_POCFDMBMPBD_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNLOCNCJNIG_POCFDMBMPBD_GETHASHCODE_OFFSET))(this);
		}

	};
