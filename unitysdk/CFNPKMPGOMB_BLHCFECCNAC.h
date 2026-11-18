#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CFNPKMPGOMB_BLHCFECCNAC_EIBCLKPCMON_OFFSET UNITYSDK_OFFSET(0x128ED3E0)
#define CFNPKMPGOMB_BLHCFECCNAC__CTOR_OFFSET UNITYSDK_OFFSET(0x128ED3D0)

inline static constexpr unsigned int CFNPKMPGOMB_BLHCFECCNAC_TypeDefinitionIndex = 44978;

class CFNPKMPGOMB_BLHCFECCNAC : public ::System::Object
{
public:
	::System::Action* BKLLGFGNNPL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_BLHCFECCNAC__CTOR_OFFSET))(this);
	}

	::System::Void EIBCLKPCMON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_BLHCFECCNAC_EIBCLKPCMON_OFFSET))(this);
	}
};
