#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2D6DE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D6DD0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA384_TypeDefinitionIndex = 1097;

	class SHA384 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::SHA384* Create()
		{
			return ((::System::Security::Cryptography::SHA384*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA384_CREATE_OFFSET))();
		}
	};
}
