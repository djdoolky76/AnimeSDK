#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHOFPPJJMDM;
class JGBMOOJHMBF;

#define EJINDPBKMHH_MJKNJMHIGMH_MHGEJJBEMCH_OFFSET UNITYSDK_OFFSET(0xFE1A460)
#define EJINDPBKMHH_MJKNJMHIGMH__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1A450)

inline static constexpr unsigned int EJINDPBKMHH_MJKNJMHIGMH_TypeDefinitionIndex = 46495;

class EJINDPBKMHH_MJKNJMHIGMH : public ::System::Object
{
public:
	::EHOFPPJJMDM* NJFEFKPAOPI; // 0x10
	::System::Boolean CFNJFGLONKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJINDPBKMHH_MJKNJMHIGMH__CTOR_OFFSET))(this);
	}

	::System::Void MHGEJJBEMCH(::JGBMOOJHMBF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + EJINDPBKMHH_MJKNJMHIGMH_MHGEJJBEMCH_OFFSET))(this, HMMMOCJAEOA);
	}
};
