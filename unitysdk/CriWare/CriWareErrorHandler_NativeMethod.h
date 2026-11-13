#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIWAREERRORHANDLER_NATIVEMETHOD_CRIWARE5731BE5C_OFFSET UNITYSDK_OFFSET(0x1F4657D0)

namespace CriWare
{
	inline static constexpr unsigned int CriWareErrorHandler_NativeMethod_TypeDefinitionIndex = 41120;

	class CriWareErrorHandler_NativeMethod : public ::System::Object
	{
	public:
		static ::System::IntPtr CRIWARE5731BE5C()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREERRORHANDLER_NATIVEMETHOD_CRIWARE5731BE5C_OFFSET))();
		}

	};
}
