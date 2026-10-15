#pragma once
#include "unitysdk/unitysdk.h"

#define EILIGOHHBNI_CTOR_OFFSET UNITYSDK_OFFSET(0x154D04A0)
#define EILIGOHHBNI_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x154CFF00)
#define EILIGOHHBNI_LBMGICALIOL_OFFSET UNITYSDK_OFFSET(0x154CFEC0)
#define EILIGOHHBNI_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x154D01A0)

	class EILIGOHHBNI
	{
	public:
		::System::Single PDLCENKDNGO; // 0x28
		::System::Int32 GAGEBMIOEGN; // 0x2C
		::System::Single NMPFPCFOGMB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILIGOHHBNI_CTOR_OFFSET))(this);
		}

		::System::Void LBMGICALIOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILIGOHHBNI_LBMGICALIOL_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILIGOHHBNI_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EILIGOHHBNI_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
