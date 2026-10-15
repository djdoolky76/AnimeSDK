#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOIKIMJHDHK.h"
#include "unitysdk/CAHKKMIFGGB.h"

#define HGJLEKLDBCF_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0x15CA72C0)
#define HGJLEKLDBCF_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA73C0)

inline static constexpr unsigned int HGJLEKLDBCF_TypeDefinitionIndex = 64938;

	class HGJLEKLDBCF : public ::BOIKIMJHDHK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJLEKLDBCF_CTOR_OFFSET))(this);
		}

		::System::Int32 CJDNCBHLOGD(::System::UInt32 a1, ::System::UInt32 a2, ::CAHKKMIFGGB a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + HGJLEKLDBCF_CJDNCBHLOGD_OFFSET))(this, a1, a2, a3);
		}

	};
