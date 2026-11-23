#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_FF84CB81099E6B8E_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x3DFE7C0)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_FF84CB81099E6B8E_TypeDefinitionIndex = 14644;

	class ThrowStub_FF84CB81099E6B8E : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_FF84CB81099E6B8E_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}
	};
}
