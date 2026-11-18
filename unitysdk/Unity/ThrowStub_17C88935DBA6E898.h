#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_17C88935DBA6E898_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F755F40)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_17C88935DBA6E898_TypeDefinitionIndex = 5035;

	class ThrowStub_17C88935DBA6E898 : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_17C88935DBA6E898_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}
	};
}
