#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_1194783A7913BCB1_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x2006F670)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_1194783A7913BCB1_TypeDefinitionIndex = 2517;

	class ThrowStub_1194783A7913BCB1 : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_1194783A7913BCB1_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}
	};
}
