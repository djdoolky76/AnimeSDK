#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BICOIIAPJKC;
class EFBJOPGBJNG;
class OBJANKHLNGO;

#define EEDCAKNHIMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1334AB20)
#define EEDCAKNHIMM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1334ABB0)
#define EEDCAKNHIMM_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1334AC10)

inline static constexpr unsigned int EEDCAKNHIMM_TypeDefinitionIndex = 79648;

	class EEDCAKNHIMM : public ::System::Object
	{
	public:
		::BICOIIAPJKC* INDNOJDKNJM; // 0x10
		::OBJANKHLNGO* GJALMBBNNOF; // 0x18
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
