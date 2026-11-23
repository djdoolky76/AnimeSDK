#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A956261E0E29930B_BE5723A5C39DFBAD_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define A956261E0E29930B_EEB8066261821CD6_OFFSET UNITYSDK_OFFSET(0x19DB7F0)

inline static constexpr unsigned int A956261E0E29930B_TypeDefinitionIndex = 18953;

class A956261E0E29930B : public ::System::Object
{
public:
	::System::Int32 F5EF7E29767E03BF; // 0x10
	::System::Int32 F0961C93719F7B0D; // 0x14

	::System::Int32 EEB8066261821CD6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A956261E0E29930B_EEB8066261821CD6_OFFSET))(this);
	}

	::System::Int32 BE5723A5C39DFBAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A956261E0E29930B_BE5723A5C39DFBAD_OFFSET))(this);
	}
};
