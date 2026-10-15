#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_UNSAFEMEMORY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBAC8A0)

namespace MessagePack::Internal
{
	class UnsafeMemory : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Is32Bit()
		{
			return (::System::Boolean*)UnitySDK::FromName("MessagePack.Internal", "UnsafeMemory")->GetStaticField(0x8330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEMEMORY_CCTOR_OFFSET))();
		}

	};
}
