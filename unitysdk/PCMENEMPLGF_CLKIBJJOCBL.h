#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_CLKIBJJOCBL_OLANNGNGDBG_OFFSET UNITYSDK_OFFSET(0x18460EB0)
#define PCMENEMPLGF_CLKIBJJOCBL__CTOR_OFFSET UNITYSDK_OFFSET(0x18460EA0)

inline static constexpr unsigned int PCMENEMPLGF_CLKIBJJOCBL_TypeDefinitionIndex = 62874;

class PCMENEMPLGF_CLKIBJJOCBL : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Int32 MAPIAEMGGCO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_CLKIBJJOCBL__CTOR_OFFSET))(this);
	}

	::System::Void OLANNGNGDBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_CLKIBJJOCBL_OLANNGNGDBG_OFFSET))(this);
	}
};
