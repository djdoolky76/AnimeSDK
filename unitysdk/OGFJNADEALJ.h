#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OGFJNADEALJ_IFFOOJLDLCO_1_OFFSET UNITYSDK_OFFSET(0x16F766B0)
#define OGFJNADEALJ_IFFOOJLDLCO_OFFSET UNITYSDK_OFFSET(0x16F76510)
#define OGFJNADEALJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16F76500)

inline static constexpr unsigned int OGFJNADEALJ_TypeDefinitionIndex = 80671;

class OGFJNADEALJ : public ::System::Object
{
public:
	::System::Single DFOFFFIJIBL; // 0x10
	::System::Single MKFJHAMCDEF; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGFJNADEALJ__CTOR_OFFSET))(this);
	}

	::System::Single IFFOOJLDLCO(::System::Single PPELJIHKBBD, ::System::Single GLJHHHKILHO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OGFJNADEALJ_IFFOOJLDLCO_OFFSET))(this, PPELJIHKBBD, GLJHHHKILHO);
	}

	::System::Single IFFOOJLDLCO_1(::System::Single EHPAJFODHIP, ::System::Single PPELJIHKBBD, ::System::Single GLJHHHKILHO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OGFJNADEALJ_IFFOOJLDLCO_1_OFFSET))(this, EHPAJFODHIP, PPELJIHKBBD, GLJHHHKILHO);
	}
};
