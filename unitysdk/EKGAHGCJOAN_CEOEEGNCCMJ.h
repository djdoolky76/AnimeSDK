#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMKJPFMGGHJ.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
namespace System { class Action; }

#define EKGAHGCJOAN_CEOEEGNCCMJ_JKDGIFKPAKA_OFFSET UNITYSDK_OFFSET(0x11CB0260)
#define EKGAHGCJOAN_CEOEEGNCCMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB0250)

inline static constexpr unsigned int EKGAHGCJOAN_CEOEEGNCCMJ_TypeDefinitionIndex = 51215;

class EKGAHGCJOAN_CEOEEGNCCMJ : public ::System::Object
{
public:
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::GMKJPFMGGHJ NHHPNPHHMBH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CEOEEGNCCMJ__CTOR_OFFSET))(this);
	}

	::System::Void JKDGIFKPAKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_CEOEEGNCCMJ_JKDGIFKPAKA_OFFSET))(this);
	}
};
