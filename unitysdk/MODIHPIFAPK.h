#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNHEPGLMAFE.h"
class DMNNACMBAJC;
class FPBFICAFCDO;

#define MODIHPIFAPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C750250)
#define MODIHPIFAPK_IANODFCEKBK_OFFSET UNITYSDK_OFFSET(0x1C750260)

inline static constexpr unsigned int MODIHPIFAPK_TypeDefinitionIndex = 37189;

	class MODIHPIFAPK : public ::JNHEPGLMAFE
	{
	public:
		::System::Void _ctor(::DMNNACMBAJC* a1, ::FPBFICAFCDO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DMNNACMBAJC*, ::FPBFICAFCDO*))((::PBYTE)hIl2Cpp + MODIHPIFAPK_CTOR_OFFSET))(this, a1, a2);
		}

		::DMNNACMBAJC* IANODFCEKBK()
		{
			return ((::DMNNACMBAJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIHPIFAPK_IANODFCEKBK_OFFSET))(this);
		}

	};
