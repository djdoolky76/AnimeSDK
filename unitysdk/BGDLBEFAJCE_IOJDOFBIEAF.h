#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGDLBEFAJCE;
namespace System { class Action; }

#define BGDLBEFAJCE_IOJDOFBIEAF_JMNKLEOCMEL_OFFSET UNITYSDK_OFFSET(0x143DB6F0)
#define BGDLBEFAJCE_IOJDOFBIEAF__CTOR_OFFSET UNITYSDK_OFFSET(0x143DB6E0)

inline static constexpr unsigned int BGDLBEFAJCE_IOJDOFBIEAF_TypeDefinitionIndex = 52501;

class BGDLBEFAJCE_IOJDOFBIEAF : public ::System::Object
{
public:
	::BGDLBEFAJCE* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDLBEFAJCE_IOJDOFBIEAF__CTOR_OFFSET))(this);
	}

	::System::Void JMNKLEOCMEL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDLBEFAJCE_IOJDOFBIEAF_JMNKLEOCMEL_OFFSET))(this);
	}
};
