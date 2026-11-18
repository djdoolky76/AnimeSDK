#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJBHPIMGMCD.h"
#include "unitysdk/System/Object.h"

#define OHOCACBBFPP_LEJCMLAGJKI_OFFSET UNITYSDK_OFFSET(0x10073210)
#define OHOCACBBFPP__CTOR_OFFSET UNITYSDK_OFFSET(0x10073200)

inline static constexpr unsigned int OHOCACBBFPP_TypeDefinitionIndex = 42844;

class OHOCACBBFPP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOCACBBFPP__CTOR_OFFSET))(this);
	}

	static ::System::Boolean LEJCMLAGJKI(::JJBHPIMGMCD KKMENMCMMBN)
	{
		return ((::System::Boolean(*)(::JJBHPIMGMCD))((::PBYTE)hIl2Cpp + OHOCACBBFPP_LEJCMLAGJKI_OFFSET))(KKMENMCMMBN);
	}
};
