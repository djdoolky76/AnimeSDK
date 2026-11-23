#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Unity/Mathematics/uint4.h"

namespace System { class Object; }

#define B8C48C8BF406E9BC_BBF70060987B0800_AC23D47B7B2AE500_INVOKE_OFFSET UNITYSDK_OFFSET(0x2911D30)
#define B8C48C8BF406E9BC_BBF70060987B0800_AC23D47B7B2AE500__CTOR_OFFSET UNITYSDK_OFFSET(0x3F40020)

namespace B8C48C8BF406E9BC
{
	inline static constexpr unsigned int BBF70060987B0800_AC23D47B7B2AE500_TypeDefinitionIndex = 20536;

	class BBF70060987B0800_AC23D47B7B2AE500 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* param_0, ::System::IntPtr param_1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B8C48C8BF406E9BC_BBF70060987B0800_AC23D47B7B2AE500__CTOR_OFFSET))(this, param_0, param_1);
		}

		::System::Void Invoke(::PVOID AF4717A1A80FD60F, ::PVOID B3E3A8495E17DE76, ::System::Int64 A96B867D8BBB8B00, ::PVOID E7075E532EB4510A, ::Unity::Mathematics::uint4& E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::System::Int64, ::PVOID, ::Unity::Mathematics::uint4&))((::PBYTE)hIl2Cpp + B8C48C8BF406E9BC_BBF70060987B0800_AC23D47B7B2AE500_INVOKE_OFFSET))(this, AF4717A1A80FD60F, B3E3A8495E17DE76, A96B867D8BBB8B00, E7075E532EB4510A, E82293C0814051A5);
		}
	};
}
