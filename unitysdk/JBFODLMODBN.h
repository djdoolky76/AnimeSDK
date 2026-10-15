#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOIKIMJHDHK.h"
#include "unitysdk/CAHKKMIFGGB.h"

#define JBFODLMODBN_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0x1655FBE0)
#define JBFODLMODBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1655FD50)

inline static constexpr unsigned int JBFODLMODBN_TypeDefinitionIndex = 64933;

	class JBFODLMODBN : public ::BOIKIMJHDHK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFODLMODBN_CTOR_OFFSET))(this);
		}

		::System::Int32 CJDNCBHLOGD(::System::UInt32 a1, ::System::UInt32 a2, ::CAHKKMIFGGB a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + JBFODLMODBN_CJDNCBHLOGD_OFFSET))(this, a1, a2, a3);
		}

	};
