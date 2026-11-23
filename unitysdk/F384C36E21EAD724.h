#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F384C36E21EAD724_ACB6A31899873468_OFFSET UNITYSDK_OFFSET(0x26352E0)
#define F384C36E21EAD724_BB45FB82BF2FED87_OFFSET UNITYSDK_OFFSET(0x2635370)
#define F384C36E21EAD724__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F384C36E21EAD724_TypeDefinitionIndex = 6067;

class F384C36E21EAD724 : public ::System::Object
{
public:
	::System::Boolean A51D694C4352DC7B; // 0x10

	::System::Void BB45FB82BF2FED87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F384C36E21EAD724_BB45FB82BF2FED87_OFFSET))(this);
	}

	::System::Void ACB6A31899873468()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F384C36E21EAD724_ACB6A31899873468_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F384C36E21EAD724__CTOR_OFFSET))(this);
	}
};
