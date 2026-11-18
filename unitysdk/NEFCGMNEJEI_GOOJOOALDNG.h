#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NEFCGMNEJEI_HEDPILPFHHH;
namespace System { class String; }

#define NEFCGMNEJEI_GOOJOOALDNG_JKJKFMPAIFK_OFFSET UNITYSDK_OFFSET(0x12FE0130)
#define NEFCGMNEJEI_GOOJOOALDNG__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE0120)

inline static constexpr unsigned int NEFCGMNEJEI_GOOJOOALDNG_TypeDefinitionIndex = 48998;

class NEFCGMNEJEI_GOOJOOALDNG : public ::System::Object
{
public:
	::NEFCGMNEJEI_HEDPILPFHHH* FGBNBFHOKAA; // 0x10
	::System::String* KNFEAJKCNIJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFCGMNEJEI_GOOJOOALDNG__CTOR_OFFSET))(this);
	}

	::System::Single JKJKFMPAIFK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFCGMNEJEI_GOOJOOALDNG_JKJKFMPAIFK_OFFSET))(this);
	}
};
