#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_F12C9E0AC0B16CEF_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EAF7F40)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_F12C9E0AC0B16CEF_TypeDefinitionIndex = 26122;

	class ThrowStub_F12C9E0AC0B16CEF : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_F12C9E0AC0B16CEF_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}
	};
}
