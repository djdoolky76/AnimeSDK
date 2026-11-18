#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ObjectDisposedException.h"

#define UNITY_THROWSTUB_5AEA5A677827290E_THROWNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D626DE0)

namespace Unity
{
	inline static constexpr unsigned int ThrowStub_5AEA5A677827290E_TypeDefinitionIndex = 2254;

	class ThrowStub_5AEA5A677827290E : public ::System::ObjectDisposedException
	{
	public:
		static ::System::Void ThrowNotSupportedException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_THROWSTUB_5AEA5A677827290E_THROWNOTSUPPORTEDEXCEPTION_OFFSET))();
		}
	};
}
