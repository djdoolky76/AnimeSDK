#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_DBCE3E0FB3DD1609_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F0F8BF0)

namespace Unity
{
	class ThrowStub_DBCE3E0FB3DD1609 : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_DBCE3E0FB3DD1609_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}

	};
}
