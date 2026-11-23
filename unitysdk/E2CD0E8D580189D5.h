#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E98AF858C32293BC;

#define E2CD0E8D580189D5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F26BB0)
#define E2CD0E8D580189D5__CTOR_OFFSET UNITYSDK_OFFSET(0x19259E0)

inline static constexpr unsigned int E2CD0E8D580189D5_TypeDefinitionIndex = 14940;

class E2CD0E8D580189D5 : public ::System::Object
{
public:
	::System::Int32 B8BA82A3899D312F; // 0x10
	::System::Byte _padding0[0x4];
	::E98AF858C32293BC* FA4ED2A22EC6B11C; // 0x18

	::System::Void _ctor(::E98AF858C32293BC* E22BCD4736CD9DF9)
	{
		return ((::System::Void(*)(::PVOID, ::E98AF858C32293BC*))((::PBYTE)hIl2Cpp + E2CD0E8D580189D5__CTOR_OFFSET))(this, E22BCD4736CD9DF9);
	}

	::System::Void _ctor_1(::System::Int32 E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + E2CD0E8D580189D5__CTOR_1_OFFSET))(this, E82293C0814051A5);
	}
};
