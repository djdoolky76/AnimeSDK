#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABLKEGPEFKO_ABCJOGNBGFE_OFFSET UNITYSDK_OFFSET(0xB769FE0)
#define ABLKEGPEFKO_CTOR_OFFSET UNITYSDK_OFFSET(0xB769EB0)
#define ABLKEGPEFKO_EDAPINIDPOP_OFFSET UNITYSDK_OFFSET(0xB769F30)
#define ABLKEGPEFKO_KDCMIGBDKDO_OFFSET UNITYSDK_OFFSET(0xB76A080)
#define ABLKEGPEFKO_MGBLJFOEMHI_OFFSET UNITYSDK_OFFSET(0xB769EC0)

inline static constexpr unsigned int ABLKEGPEFKO_TypeDefinitionIndex = 82953;

	class ABLKEGPEFKO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLKEGPEFKO_CTOR_OFFSET))(this);
		}

		::System::Boolean MGBLJFOEMHI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABLKEGPEFKO_MGBLJFOEMHI_OFFSET))(this, a1);
		}

		::System::Boolean EDAPINIDPOP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABLKEGPEFKO_EDAPINIDPOP_OFFSET))(this, a1);
		}

		::System::Void ABCJOGNBGFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABLKEGPEFKO_ABCJOGNBGFE_OFFSET))(this, a1);
		}

		::System::Void KDCMIGBDKDO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABLKEGPEFKO_KDCMIGBDKDO_OFFSET))(this, a1);
		}

	};
