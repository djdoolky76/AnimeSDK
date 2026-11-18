#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define KGNKIODMIMC_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12999E10)
#define KGNKIODMIMC_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12999D80)
#define KGNKIODMIMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12999D00)
#define KGNKIODMIMC__CTOR_OFFSET UNITYSDK_OFFSET(0x12999D70)

inline static constexpr unsigned int KGNKIODMIMC_TypeDefinitionIndex = 88561;

class KGNKIODMIMC : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x145; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGNKIODMIMC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNKIODMIMC__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNKIODMIMC_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNKIODMIMC_FIGPAOKNJLN_OFFSET))(this);
	}
};
