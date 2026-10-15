#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_E14170BF4D0D4B2F_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1ED87F90)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_E14170BF4D0D4B2F_TypeDefinitionIndex = 2343;

	class ThrowStub_E14170BF4D0D4B2F : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_E14170BF4D0D4B2F_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}

	};
}
