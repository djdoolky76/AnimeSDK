#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPNPHHIBPEK.h"

#define DNKNAMNAFEH_AGHABIKPPNO_OFFSET UNITYSDK_OFFSET(0x11FCEB00)
#define DNKNAMNAFEH_CTOR_OFFSET UNITYSDK_OFFSET(0x11FCED30)
#define DNKNAMNAFEH_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x11FCEC00)
#define DNKNAMNAFEH_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0x11FCEC50)
#define DNKNAMNAFEH_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0x11FCE960)

inline static constexpr unsigned int DNKNAMNAFEH_TypeDefinitionIndex = 72422;

	class DNKNAMNAFEH : public ::JPNPHHIBPEK
	{
	public:
		::System::Single OCONDDLOJAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKNAMNAFEH_CTOR_OFFSET))(this);
		}

		::System::Void NPOFEKBLAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKNAMNAFEH_NPOFEKBLAIH_OFFSET))(this);
		}

		::System::Void AGHABIKPPNO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNKNAMNAFEH_AGHABIKPPNO_OFFSET))(this, a1);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNKNAMNAFEH_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void KPAOCJEJCNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNKNAMNAFEH_KPAOCJEJCNA_OFFSET))(this, a1);
		}

	};
