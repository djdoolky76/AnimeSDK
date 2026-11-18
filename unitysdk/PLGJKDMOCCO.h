#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JDDHAHBFBMI;

#define PLGJKDMOCCO_GOKKLBCCHBP_OFFSET UNITYSDK_OFFSET(0x13721090)
#define PLGJKDMOCCO__CTOR_OFFSET UNITYSDK_OFFSET(0x13721080)

inline static constexpr unsigned int PLGJKDMOCCO_TypeDefinitionIndex = 46975;

class PLGJKDMOCCO : public ::System::Object
{
public:
	::System::UInt32 EBOJPBJLPKG; // 0x10
	::System::UInt32 GJOCGANNFDP; // 0x14
	::System::UInt32 PMCNDKMMFDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLGJKDMOCCO__CTOR_OFFSET))(this);
	}

	::System::Void GOKKLBCCHBP(::JDDHAHBFBMI* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::JDDHAHBFBMI*))((::PBYTE)hIl2Cpp + PLGJKDMOCCO_GOKKLBCCHBP_OFFSET))(this, LJBPECKCCEA);
	}
};
