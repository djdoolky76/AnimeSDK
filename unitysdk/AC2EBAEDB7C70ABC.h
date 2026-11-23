#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AC2EBAEDB7C70ABC_E49D6E8D3ECD7930_OFFSET UNITYSDK_OFFSET(0x29A49D0)
#define AC2EBAEDB7C70ABC_E95FF1F360EB3741_OFFSET UNITYSDK_OFFSET(0x29A4960)
#define AC2EBAEDB7C70ABC_FD970972DDD70D61_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define AC2EBAEDB7C70ABC__CTOR_OFFSET UNITYSDK_OFFSET(0x29A4A40)

inline static constexpr unsigned int AC2EBAEDB7C70ABC_TypeDefinitionIndex = 15585;

class AC2EBAEDB7C70ABC : public ::System::Object
{
public:
	::System::IntPtr A3171F185C90E814; // 0x10

	::System::IntPtr FD970972DDD70D61()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AC2EBAEDB7C70ABC_FD970972DDD70D61_OFFSET))(this);
	}

	static ::System::IntPtr E49D6E8D3ECD7930()
	{
		return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + AC2EBAEDB7C70ABC_E49D6E8D3ECD7930_OFFSET))();
	}

	static ::System::IntPtr E95FF1F360EB3741()
	{
		return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + AC2EBAEDB7C70ABC_E95FF1F360EB3741_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC2EBAEDB7C70ABC__CTOR_OFFSET))(this);
	}
};
