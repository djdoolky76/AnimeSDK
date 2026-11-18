#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BGLGHFCNCGA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18562510)
#define BGLGHFCNCGA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18562480)
#define BGLGHFCNCGA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18562400)
#define BGLGHFCNCGA__CTOR_OFFSET UNITYSDK_OFFSET(0x18562470)

inline static constexpr unsigned int BGLGHFCNCGA_TypeDefinitionIndex = 75547;

class BGLGHFCNCGA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x133; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLGHFCNCGA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLGHFCNCGA__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLGHFCNCGA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLGHFCNCGA_FIGPAOKNJLN_OFFSET))(this);
	}
};
