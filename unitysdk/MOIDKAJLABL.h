#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OLHCEJBBEJF;

#define MOIDKAJLABL__CTOR_OFFSET UNITYSDK_OFFSET(0x18B5ED90)

inline static constexpr unsigned int MOIDKAJLABL_TypeDefinitionIndex = 43924;

class MOIDKAJLABL : public ::System::Object
{
public:
	::OLHCEJBBEJF* LJBPECKCCEA; // 0x10
	::System::Boolean LPLLMFMNKJI; // 0x18
	::System::Boolean OLBMKIEHIII; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIDKAJLABL__CTOR_OFFSET))(this);
	}
};
