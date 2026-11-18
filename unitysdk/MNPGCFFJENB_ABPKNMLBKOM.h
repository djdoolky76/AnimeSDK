#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MNPGCFFJENB;

#define MNPGCFFJENB_ABPKNMLBKOM_NPNAHHMEIMO_OFFSET UNITYSDK_OFFSET(0xFA79D80)
#define MNPGCFFJENB_ABPKNMLBKOM__CTOR_OFFSET UNITYSDK_OFFSET(0xFA79D70)

inline static constexpr unsigned int MNPGCFFJENB_ABPKNMLBKOM_TypeDefinitionIndex = 78018;

class MNPGCFFJENB_ABPKNMLBKOM : public ::System::Object
{
public:
	::MNPGCFFJENB* KLHPEBKNIFB; // 0x10
	::System::Int32 ENGOODIPBKN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGCFFJENB_ABPKNMLBKOM__CTOR_OFFSET))(this);
	}

	::System::Void NPNAHHMEIMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGCFFJENB_ABPKNMLBKOM_NPNAHHMEIMO_OFFSET))(this);
	}
};
