#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOIKIMJHDHK.h"
#include "unitysdk/CAHKKMIFGGB.h"

#define JIDFALOGIBF_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0xB1EEAB0)
#define JIDFALOGIBF_CTOR_OFFSET UNITYSDK_OFFSET(0xB1EEB50)

inline static constexpr unsigned int JIDFALOGIBF_TypeDefinitionIndex = 64937;

	class JIDFALOGIBF : public ::BOIKIMJHDHK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIDFALOGIBF_CTOR_OFFSET))(this);
		}

		::System::Int32 CJDNCBHLOGD(::System::UInt32 a1, ::System::UInt32 a2, ::CAHKKMIFGGB a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + JIDFALOGIBF_CJDNCBHLOGD_OFFSET))(this, a1, a2, a3);
		}

	};
