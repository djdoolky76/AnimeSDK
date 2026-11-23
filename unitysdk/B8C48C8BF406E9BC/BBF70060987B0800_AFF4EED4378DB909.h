#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define B8C48C8BF406E9BC_BBF70060987B0800_AFF4EED4378DB909_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define B8C48C8BF406E9BC_BBF70060987B0800_AFF4EED4378DB909__CTOR_OFFSET UNITYSDK_OFFSET(0x3B3A1C0)

namespace B8C48C8BF406E9BC
{
	inline static constexpr unsigned int BBF70060987B0800_AFF4EED4378DB909_TypeDefinitionIndex = 20534;

	class BBF70060987B0800_AFF4EED4378DB909 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* param_0, ::System::IntPtr param_1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B8C48C8BF406E9BC_BBF70060987B0800_AFF4EED4378DB909__CTOR_OFFSET))(this, param_0, param_1);
		}

		::System::UInt64 Invoke(::PVOID AF4717A1A80FD60F, ::PVOID B3E3A8495E17DE76, ::System::Int64 A96B867D8BBB8B00, ::PVOID E7075E532EB4510A)
		{
			return ((::System::UInt64(*)(::PVOID, ::PVOID, ::PVOID, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + B8C48C8BF406E9BC_BBF70060987B0800_AFF4EED4378DB909_INVOKE_OFFSET))(this, AF4717A1A80FD60F, B3E3A8495E17DE76, A96B867D8BBB8B00, E7075E532EB4510A);
		}
	};
}
