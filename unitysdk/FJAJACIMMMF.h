#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPNPHHIBPEK.h"

#define FJAJACIMMMF_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0x157AA800)
#define FJAJACIMMMF_CTOR_OFFSET UNITYSDK_OFFSET(0x157AA980)
#define FJAJACIMMMF_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0x157AA690)

inline static constexpr unsigned int FJAJACIMMMF_TypeDefinitionIndex = 72431;

	class FJAJACIMMMF : public ::JPNPHHIBPEK
	{
	public:
		::System::Boolean PPOMEPFFDNP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAJACIMMMF_CTOR_OFFSET))(this);
		}

		::System::Void NPOFEKBLAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAJACIMMMF_NPOFEKBLAIH_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJAJACIMMMF_AGHABIKPPNO_OFFSET))(this, a1);
		}

	};
