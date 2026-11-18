#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class IKFPLFGLFHF;

#define HCGJEADKACC_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x16F23830)
#define HCGJEADKACC__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int HCGJEADKACC_TypeDefinitionIndex = 49876;

struct alignas(8) HCGJEADKACC
{
	::IKFPLFGLFHF* EHFBAPOFEDN; // 0x10

	::System::Void _ctor(::IKFPLFGLFHF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::IKFPLFGLFHF*))((::PBYTE)hIl2Cpp + HCGJEADKACC__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	/*
	static ::HCGJEADKACC COKNIICCODC(::IKFPLFGLFHF* AAOCANGHBDG)
	{
		return ((::HCGJEADKACC(*)(::IKFPLFGLFHF*))((::PBYTE)hIl2Cpp + HCGJEADKACC_COKNIICCODC_OFFSET))(AAOCANGHBDG);
	}
	*/
};
