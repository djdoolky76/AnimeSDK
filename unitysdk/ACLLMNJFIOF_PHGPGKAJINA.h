#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ACLLMNJFIOF;

#define ACLLMNJFIOF_PHGPGKAJINA_ABENONEFPLF_OFFSET UNITYSDK_OFFSET(0x17CB6D50)
#define ACLLMNJFIOF_PHGPGKAJINA__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB6D40)

inline static constexpr unsigned int ACLLMNJFIOF_PHGPGKAJINA_TypeDefinitionIndex = 79850;

class ACLLMNJFIOF_PHGPGKAJINA : public ::System::Object
{
public:
	::ACLLMNJFIOF* KLHPEBKNIFB; // 0x10
	::System::UInt32 DKBGLBIECBN; // 0x18
	::System::UInt32 JOPKCFMMFBL; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLLMNJFIOF_PHGPGKAJINA__CTOR_OFFSET))(this);
	}

	::System::Void ABENONEFPLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLLMNJFIOF_PHGPGKAJINA_ABENONEFPLF_OFFSET))(this);
	}
};
