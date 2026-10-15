#pragma once
#include "unitysdk/unitysdk.h"

#define SYSTEM_NUMBER_NUMBERBUFFER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C286480)
#define SYSTEM_NUMBER_NUMBERBUFFER_CTOR_OFFSET UNITYSDK_OFFSET(0x3C22CD0)
#define SYSTEM_NUMBER_NUMBERBUFFER_PACKFORNATIVE_OFFSET UNITYSDK_OFFSET(0x3C22CF0)

namespace System
{
	inline static constexpr unsigned int Number_NumberBuffer_TypeDefinitionIndex = 308;

	struct alignas(8) Number_NumberBuffer
	{
		::PVOID baseAddress; // 0x10
		::PVOID digits; // 0x18
		::System::Int32 precision; // 0x20
		::System::Int32 scale; // 0x24
		::System::Boolean sign; // 0x28
		static ::System::Int32* StaticGet_NumberBufferBytes()
		{
			return (::System::Int32*)UnitySDK::FromName("System", "NumberBuffer")->GetStaticField(0x3F70);
		}

		::System::Void _ctor(::PVOID a1)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFER_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFER_CCTOR_OFFSET))();
		}

		::PVOID PackForNative()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFER_PACKFORNATIVE_OFFSET))(this);
		}

	};
}
