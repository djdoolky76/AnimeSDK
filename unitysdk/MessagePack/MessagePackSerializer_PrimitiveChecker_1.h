#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack
{
	template <typename T>
	class MessagePackSerializer_PrimitiveChecker_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsMessagePackFixedSizePrimitive()
		{
			return (::System::Boolean*)UnitySDK::FromName("MessagePack", "PrimitiveChecker`1")->GetStaticField(0x0);
		}

	};
}
