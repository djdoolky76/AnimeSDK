#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
namespace System { class Action; }

#define EKGAHGCJOAN_BOJKBLMIPCC_FCDLBLHPNCD_OFFSET UNITYSDK_OFFSET(0x1426C160)
#define EKGAHGCJOAN_BOJKBLMIPCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1426C150)

inline static constexpr unsigned int EKGAHGCJOAN_BOJKBLMIPCC_TypeDefinitionIndex = 51233;

class EKGAHGCJOAN_BOJKBLMIPCC : public ::System::Object
{
public:
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_BOJKBLMIPCC__CTOR_OFFSET))(this);
	}

	::System::Void FCDLBLHPNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_BOJKBLMIPCC_FCDLBLHPNCD_OFFSET))(this);
	}
};
