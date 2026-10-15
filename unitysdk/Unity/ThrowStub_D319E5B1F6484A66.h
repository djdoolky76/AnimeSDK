#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_D319E5B1F6484A66_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EE62C00)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_D319E5B1F6484A66_TypeDefinitionIndex = 3913;

	class ThrowStub_D319E5B1F6484A66 : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_D319E5B1F6484A66_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}

	};
}
