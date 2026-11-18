#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BGDLBEFAJCE;
namespace System { class Action; }

#define BGDLBEFAJCE_LCPCOHANNBN_OGKFDLMCHAL_OFFSET UNITYSDK_OFFSET(0x14C41140)
#define BGDLBEFAJCE_LCPCOHANNBN__CTOR_OFFSET UNITYSDK_OFFSET(0x14C41130)

inline static constexpr unsigned int BGDLBEFAJCE_LCPCOHANNBN_TypeDefinitionIndex = 52503;

class BGDLBEFAJCE_LCPCOHANNBN : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::BGDLBEFAJCE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDLBEFAJCE_LCPCOHANNBN__CTOR_OFFSET))(this);
	}

	::System::Void OGKFDLMCHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDLBEFAJCE_LCPCOHANNBN_OGKFDLMCHAL_OFFSET))(this);
	}
};
