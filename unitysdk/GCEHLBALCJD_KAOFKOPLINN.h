#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class PEIPCHALOLP;

#define GCEHLBALCJD_KAOFKOPLINN_HDHLIIMBHCB_OFFSET UNITYSDK_OFFSET(0x13248320)
#define GCEHLBALCJD_KAOFKOPLINN__CTOR_OFFSET UNITYSDK_OFFSET(0x13248310)

inline static constexpr unsigned int GCEHLBALCJD_KAOFKOPLINN_TypeDefinitionIndex = 80317;

class GCEHLBALCJD_KAOFKOPLINN : public ::System::Object
{
public:
	::PEIPCHALOLP* BLCBDDBPGHM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEHLBALCJD_KAOFKOPLINN__CTOR_OFFSET))(this);
	}

	::System::Boolean HDHLIIMBHCB(::MoleMole::EntityHandle HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GCEHLBALCJD_KAOFKOPLINN_HDHLIIMBHCB_OFFSET))(this, HAAEBCOBKFF);
	}
};
