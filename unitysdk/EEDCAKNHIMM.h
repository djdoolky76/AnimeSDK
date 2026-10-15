#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BICOIIAPJKC;
class EFBJOPGBJNG;
class OBJANKHLNGO;

#define EEDCAKNHIMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1334F730)
#define EEDCAKNHIMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1334F7C0)
#define EEDCAKNHIMM_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1334F820)

inline static constexpr unsigned int EEDCAKNHIMM_TypeDefinitionIndex = 79649;

	class EEDCAKNHIMM : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::BICOIIAPJKC* INDNOJDKNJM; // 0x18
		::System::Void _ctor(::OBJANKHLNGO* a1, ::BICOIIAPJKC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::BICOIIAPJKC*))((::PBYTE)hIl2Cpp + EEDCAKNHIMM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDCAKNHIMM_DISPOSE_OFFSET))(this);
		}

		::System::Void NMPLHCJKEOI(::EFBJOPGBJNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFBJOPGBJNG*))((::PBYTE)hIl2Cpp + EEDCAKNHIMM_NMPLHCJKEOI_OFFSET))(this, a1);
		}

	};
