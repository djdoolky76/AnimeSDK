#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define GCEHLBALCJD_BBAOLADFNBH_OJMIKCGIJOC_OFFSET UNITYSDK_OFFSET(0x141312D0)
#define GCEHLBALCJD_BBAOLADFNBH__CTOR_OFFSET UNITYSDK_OFFSET(0x14130E70)

inline static constexpr unsigned int GCEHLBALCJD_BBAOLADFNBH_TypeDefinitionIndex = 80319;

class GCEHLBALCJD_BBAOLADFNBH : public ::System::Object
{
public:
	::System::UInt32 NJNCGJLHLKC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEHLBALCJD_BBAOLADFNBH__CTOR_OFFSET))(this);
	}

	::System::Boolean OJMIKCGIJOC(::MoleMole::EntityHandle HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GCEHLBALCJD_BBAOLADFNBH_OJMIKCGIJOC_OFFSET))(this, HAAEBCOBKFF);
	}
};
