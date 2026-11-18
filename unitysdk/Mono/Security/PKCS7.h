#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_PKCS7__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF71300)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_TypeDefinitionIndex = 51;

	class PKCS7 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7__CTOR_OFFSET))(this);
		}
	};
}
