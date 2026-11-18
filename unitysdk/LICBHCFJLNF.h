#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LICBHCFJLNF_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x158E16A0)
#define LICBHCFJLNF__CTOR_OFFSET UNITYSDK_OFFSET(0x158E16E0)

inline static constexpr unsigned int LICBHCFJLNF_TypeDefinitionIndex = 84004;

class LICBHCFJLNF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICBHCFJLNF__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICBHCFJLNF_FCMNHLDLJCI_OFFSET))(this);
	}
};
