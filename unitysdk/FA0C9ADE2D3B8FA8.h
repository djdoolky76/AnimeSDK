#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB07E24B584983C1.h"

class F962AEFC0B647F8D;

#define FA0C9ADE2D3B8FA8_A3C2F655C6B4F5E2_OFFSET UNITYSDK_OFFSET(0x17C7AE0)
#define FA0C9ADE2D3B8FA8_AFD5178090BD77F2_OFFSET UNITYSDK_OFFSET(0x17C7870)
#define FA0C9ADE2D3B8FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FA0C9ADE2D3B8FA8_TypeDefinitionIndex = 961;

class FA0C9ADE2D3B8FA8 : public ::AB07E24B584983C1
{
public:
	::F962AEFC0B647F8D* F3597127D1687748; // 0x50

	::System::Void A3C2F655C6B4F5E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA0C9ADE2D3B8FA8_A3C2F655C6B4F5E2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA0C9ADE2D3B8FA8__CTOR_OFFSET))(this);
	}

	::System::Void AFD5178090BD77F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA0C9ADE2D3B8FA8_AFD5178090BD77F2_OFFSET))(this);
	}
};
