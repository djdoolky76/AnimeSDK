#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDEMPHFNLOD.h"
#include "unitysdk/KGPAGGILINE_1.h"
#include "unitysdk/System/ValueType.h"

#define OHLDPHIBMFK_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x5955B0)
#define OHLDPHIBMFK__CTOR_OFFSET UNITYSDK_OFFSET(0x595500)

inline static constexpr unsigned int OHLDPHIBMFK_TypeDefinitionIndex = 49446;

struct alignas(8) OHLDPHIBMFK
{
	::System::Single ODAMAMPFFOA; // 0x10
	::KGPAGGILINE_1<::System::Boolean> KKMBKOPIPAH; // 0x14
	::KGPAGGILINE_1<::EDEMPHFNLOD> ADIJLOJCEHE; // 0x1C

	::System::Void _ctor(::System::Single EJAOAGGJHHA, ::KGPAGGILINE_1<::System::Boolean> BLLIHNJOMDH, ::KGPAGGILINE_1<::EDEMPHFNLOD> NEHBLFAJKAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::KGPAGGILINE_1<::System::Boolean>, ::KGPAGGILINE_1<::EDEMPHFNLOD>))((::PBYTE)hIl2Cpp + OHLDPHIBMFK__CTOR_OFFSET))(this, EJAOAGGJHHA, BLLIHNJOMDH, NEHBLFAJKAI);
	}

	::System::Void GPKMPDHNCGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLDPHIBMFK_GPKMPDHNCGL_OFFSET))(this);
	}
};
