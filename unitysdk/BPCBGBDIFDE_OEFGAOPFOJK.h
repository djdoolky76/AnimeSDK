#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPCBGBDIFDE_CAECBEOLPPL;

#define BPCBGBDIFDE_OEFGAOPFOJK_NMKDKAFHHLN_OFFSET UNITYSDK_OFFSET(0x1858BFA0)
#define BPCBGBDIFDE_OEFGAOPFOJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1858BF90)

inline static constexpr unsigned int BPCBGBDIFDE_OEFGAOPFOJK_TypeDefinitionIndex = 78660;

class BPCBGBDIFDE_OEFGAOPFOJK : public ::System::Object
{
public:
	::BPCBGBDIFDE_CAECBEOLPPL* FGBNBFHOKAA; // 0x10
	::System::Int32 JCGDJMANPLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OEFGAOPFOJK__CTOR_OFFSET))(this);
	}

	::System::Void NMKDKAFHHLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OEFGAOPFOJK_NMKDKAFHHLN_OFFSET))(this);
	}
};
