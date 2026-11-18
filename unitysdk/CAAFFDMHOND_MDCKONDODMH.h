#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DCBIKALEPHJ;
namespace System { class String; }

#define CAAFFDMHOND_MDCKONDODMH_DEELIFKHLBB_OFFSET UNITYSDK_OFFSET(0x14F0AAB0)
#define CAAFFDMHOND_MDCKONDODMH__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0AAA0)

inline static constexpr unsigned int CAAFFDMHOND_MDCKONDODMH_TypeDefinitionIndex = 45291;

class CAAFFDMHOND_MDCKONDODMH : public ::System::Object
{
public:
	::DCBIKALEPHJ* NILPOBDPPNL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAFFDMHOND_MDCKONDODMH__CTOR_OFFSET))(this);
	}

	::System::String* DEELIFKHLBB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAAFFDMHOND_MDCKONDODMH_DEELIFKHLBB_OFFSET))(this);
	}
};
