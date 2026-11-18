#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
class FMHDMLBDIJC;
namespace System { class Action; }

#define EKGAHGCJOAN_DBIIHGBHLLO_GGKPLKCGEHC_OFFSET UNITYSDK_OFFSET(0x14AA21A0)
#define EKGAHGCJOAN_DBIIHGBHLLO_HKBFOCAELIF_OFFSET UNITYSDK_OFFSET(0x14AA2120)
#define EKGAHGCJOAN_DBIIHGBHLLO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA2110)

inline static constexpr unsigned int EKGAHGCJOAN_DBIIHGBHLLO_TypeDefinitionIndex = 51216;

class EKGAHGCJOAN_DBIIHGBHLLO : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x18
	::System::Action* EDNJGMKPFHG; // 0x20
	::FMHDMLBDIJC* COHFFGAPOLF; // 0x28
	::System::Action* DLMJCFBENGB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_DBIIHGBHLLO__CTOR_OFFSET))(this);
	}

	::System::Void HKBFOCAELIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_DBIIHGBHLLO_HKBFOCAELIF_OFFSET))(this);
	}

	::System::Void GGKPLKCGEHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_DBIIHGBHLLO_GGKPLKCGEHC_OFFSET))(this);
	}
};
