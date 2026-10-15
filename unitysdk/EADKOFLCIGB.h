#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOIKIMJHDHK.h"
#include "unitysdk/CAHKKMIFGGB.h"

#define EADKOFLCIGB_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0x1266E9D0)
#define EADKOFLCIGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1266EAC0)

inline static constexpr unsigned int EADKOFLCIGB_TypeDefinitionIndex = 64935;

	class EADKOFLCIGB : public ::BOIKIMJHDHK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EADKOFLCIGB_CTOR_OFFSET))(this);
		}

		::System::Int32 CJDNCBHLOGD(::System::UInt32 a1, ::System::UInt32 a2, ::CAHKKMIFGGB a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + EADKOFLCIGB_CJDNCBHLOGD_OFFSET))(this, a1, a2, a3);
		}

	};
