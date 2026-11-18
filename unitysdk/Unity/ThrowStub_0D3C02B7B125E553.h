#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_0D3C02B7B125E553_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F2A5630)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_0D3C02B7B125E553_TypeDefinitionIndex = 37443;

	class ThrowStub_0D3C02B7B125E553 : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_0D3C02B7B125E553_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}
	};
}
