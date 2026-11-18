#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILBPMCDODGN;
class NKNMLILPDON;

#define DADCGCNPEAD_GPIAGAMGLCE_OFFSET UNITYSDK_OFFSET(0x1FDBA200)
#define DADCGCNPEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBA1F0)

inline static constexpr unsigned int DADCGCNPEAD_TypeDefinitionIndex = 28302;

class DADCGCNPEAD : public ::System::Object
{
public:
	::ILBPMCDODGN* OAMCPEJPHLP; // 0x10
	::NKNMLILPDON* OJFACCOMEIK; // 0x18

	::System::Void _ctor(::ILBPMCDODGN* OAMCPEJPHLP)
	{
		return ((::System::Void(*)(::PVOID, ::ILBPMCDODGN*))((::PBYTE)hIl2Cpp + DADCGCNPEAD__CTOR_OFFSET))(this, OAMCPEJPHLP);
	}

	::NKNMLILPDON* GPIAGAMGLCE()
	{
		return ((::NKNMLILPDON*(*)(::PVOID))((::PBYTE)hIl2Cpp + DADCGCNPEAD_GPIAGAMGLCE_OFFSET))(this);
	}
};
