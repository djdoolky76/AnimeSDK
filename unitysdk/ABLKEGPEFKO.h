#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABLKEGPEFKO_ABCJOGNBGFE_OFFSET UNITYSDK_OFFSET(0xB105EB0)
#define ABLKEGPEFKO_CTOR_OFFSET UNITYSDK_OFFSET(0xB105D80)
#define ABLKEGPEFKO_EDAPINIDPOP_OFFSET UNITYSDK_OFFSET(0xB105E00)
#define ABLKEGPEFKO_KDCMIGBDKDO_OFFSET UNITYSDK_OFFSET(0xB105F50)
#define ABLKEGPEFKO_MGBLJFOEMHI_OFFSET UNITYSDK_OFFSET(0xB105D90)

inline static constexpr unsigned int ABLKEGPEFKO_TypeDefinitionIndex = 80175;

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
