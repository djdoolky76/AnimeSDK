#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OMLJBOAOHGB_GET_REFCOUNT_OFFSET UNITYSDK_OFFSET(0x15F7F290)
#define OMLJBOAOHGB_ISUNUSED_OFFSET UNITYSDK_OFFSET(0x15F7F2A0)
#define OMLJBOAOHGB_RELEASE_OFFSET UNITYSDK_OFFSET(0x15F7F330)
#define OMLJBOAOHGB_RETAIN_OFFSET UNITYSDK_OFFSET(0x15F7F2F0)
#define OMLJBOAOHGB__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7F370)

inline static constexpr unsigned int OMLJBOAOHGB_TypeDefinitionIndex = 85163;

class OMLJBOAOHGB : public ::System::Object
{
public:
	::System::Int32 AMLEPKBLJDA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLJBOAOHGB__CTOR_OFFSET))(this);
	}

	::System::Int32 get_RefCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLJBOAOHGB_GET_REFCOUNT_OFFSET))(this);
	}

	::System::Boolean IsUnused()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLJBOAOHGB_ISUNUSED_OFFSET))(this);
	}

	::System::Void Retain()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLJBOAOHGB_RETAIN_OFFSET))(this);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMLJBOAOHGB_RELEASE_OFFSET))(this);
	}
};
