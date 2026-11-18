#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KLIOLPDEKLK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x18636420)
#define KLIOLPDEKLK__CTOR_OFFSET UNITYSDK_OFFSET(0x18636410)

inline static constexpr unsigned int KLIOLPDEKLK_TypeDefinitionIndex = 61772;

class KLIOLPDEKLK : public ::System::Object
{
public:
	::System::Boolean GLPDAOBBAIA; // 0x10
	::System::Boolean NKLKBGGIEOC; // 0x11
	::System::Boolean NGDHJPOJJOL; // 0x12
	::System::Boolean GNIONBNNBBJ; // 0x13

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIOLPDEKLK__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIOLPDEKLK_NPOLNFDBOOD_OFFSET))(this);
	}
};
