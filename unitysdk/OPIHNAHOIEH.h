#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEPIOIMOEBB.h"
#include "unitysdk/BHAEBOGLLME.h"

class KGBFLHNJHHN;
class MFNIIMAONKA;

#define OPIHNAHOIEH_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D3F5560)
#define OPIHNAHOIEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F5550)

inline static constexpr unsigned int OPIHNAHOIEH_TypeDefinitionIndex = 94332;

class OPIHNAHOIEH : public ::IEPIOIMOEBB
{
public:
	::System::Void _ctor(::BHAEBOGLLME LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BHAEBOGLLME, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OPIHNAHOIEH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::MFNIIMAONKA* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MFNIIMAONKA*))((::PBYTE)hIl2Cpp + OPIHNAHOIEH_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
