#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define E786CC573A4B67DB_NETWORKADAPTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3A58040)

inline static constexpr unsigned int E786CC573A4B67DB_NetworkAdapterInfo_TypeDefinitionIndex = 12978;

class E786CC573A4B67DB_NetworkAdapterInfo : public ::System::Object
{
public:
	::System::String* mac_address; // 0x10
	::System::String* description; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E786CC573A4B67DB_NETWORKADAPTERINFO__CTOR_OFFSET))(this);
	}
};
