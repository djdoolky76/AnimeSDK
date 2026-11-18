#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKDNDBHIHPL;

#define ONEMDPLGMLB_JALMIHNKDEB_OFFSET UNITYSDK_OFFSET(0x12953C00)
#define ONEMDPLGMLB__CTOR_OFFSET UNITYSDK_OFFSET(0x12953BF0)

inline static constexpr unsigned int ONEMDPLGMLB_TypeDefinitionIndex = 38541;

class ONEMDPLGMLB : public ::System::Object
{
public:
	::AKDNDBHIHPL* IBDADOPEBFC; // 0x10
	::System::Boolean CMKANADLEKO; // 0x18
	::System::Boolean FNJPOPELCKE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEMDPLGMLB__CTOR_OFFSET))(this);
	}

	::System::Int32 JALMIHNKDEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEMDPLGMLB_JALMIHNKDEB_OFFSET))(this);
	}
};
