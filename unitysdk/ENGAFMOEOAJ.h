#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OONCPLAHLKE.h"

#define ENGAFMOEOAJ_ALBLOIGEJIA_OFFSET UNITYSDK_OFFSET(0x1724D760)
#define ENGAFMOEOAJ_ICIJODCEIGJ_OFFSET UNITYSDK_OFFSET(0x1724D570)
#define ENGAFMOEOAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1724D650)

inline static constexpr unsigned int ENGAFMOEOAJ_TypeDefinitionIndex = 47358;

class ENGAFMOEOAJ : public ::OONCPLAHLKE
{
public:
	::System::Single MIJNDINNGCP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGAFMOEOAJ__CTOR_OFFSET))(this);
	}

	::System::Void ICIJODCEIGJ(::System::Single KGGJCGPMAIH, ::System::Single& BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + ENGAFMOEOAJ_ICIJODCEIGJ_OFFSET))(this, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void ALBLOIGEJIA(::System::Single MIALFKCCCPI, ::System::Single& KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + ENGAFMOEOAJ_ALBLOIGEJIA_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
