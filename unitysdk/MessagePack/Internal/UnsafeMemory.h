#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY_CCTOR_OFFSET UNITYSDK_OFFSET(0x174CB100)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeMemory_TypeDefinitionIndex = 7316;

	class UnsafeMemory : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Is32Bit()
		{
			return (::System::Boolean*)UnitySDK::FromName("MessagePack.Internal", "UnsafeMemory")->GetStaticField(0x9220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY_CCTOR_OFFSET))();
		}

	};
}
