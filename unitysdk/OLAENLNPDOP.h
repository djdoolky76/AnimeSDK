#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOIKIMJHDHK.h"
#include "unitysdk/CAHKKMIFGGB.h"

#define OLAENLNPDOP_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0xBEFF0F0)
#define OLAENLNPDOP_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFF490)
#define OLAENLNPDOP_FLGIGFHKFFA_OFFSET UNITYSDK_OFFSET(0xBEFF1C0)

inline static constexpr unsigned int OLAENLNPDOP_TypeDefinitionIndex = 64936;

	class OLAENLNPDOP : public ::BOIKIMJHDHK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLAENLNPDOP_CTOR_OFFSET))(this);
		}

		::System::Int32 CJDNCBHLOGD(::System::UInt32 a1, ::System::UInt32 a2, ::CAHKKMIFGGB a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + OLAENLNPDOP_CJDNCBHLOGD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FLGIGFHKFFA(::System::UInt32 a1, ::CAHKKMIFGGB a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + OLAENLNPDOP_FLGIGFHKFFA_OFFSET))(this, a1, a2);
		}

	};
