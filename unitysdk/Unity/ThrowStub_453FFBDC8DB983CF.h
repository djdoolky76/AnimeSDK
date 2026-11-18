#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_453FFBDC8DB983CF_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EC5BCB0)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_453FFBDC8DB983CF_TypeDefinitionIndex = 4313;

	class ThrowStub_453FFBDC8DB983CF : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_453FFBDC8DB983CF_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}
	};
}
