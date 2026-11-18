#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LJEMGOOPBBG__CTOR_OFFSET UNITYSDK_OFFSET(0x15662420)

inline static constexpr unsigned int LJEMGOOPBBG_TypeDefinitionIndex = 57205;

class LJEMGOOPBBG : public ::System::Object
{
public:
	::System::Boolean OLCOBKEKHHJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEMGOOPBBG__CTOR_OFFSET))(this);
	}
};
