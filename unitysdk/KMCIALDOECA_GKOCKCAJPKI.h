#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define KMCIALDOECA_GKOCKCAJPKI_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB53E230)
#define KMCIALDOECA_GKOCKCAJPKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB53D380)
#define KMCIALDOECA_GKOCKCAJPKI_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xB53E1B0)
#define KMCIALDOECA_GKOCKCAJPKI_JFFFIIAOKPI_OFFSET UNITYSDK_OFFSET(0xB53E160)
#define KMCIALDOECA_GKOCKCAJPKI_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0xB53E0E0)

	class KMCIALDOECA_GKOCKCAJPKI : public ::System::Object
	{
	public:
		// static const ::System::Object BCAELBBBNDD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_GKOCKCAJPKI_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_GKOCKCAJPKI_JJNFOPNOPBF_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_GKOCKCAJPKI_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::UInt32 ACMKLFOMPFC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCIALDOECA_GKOCKCAJPKI_ACMKLFOMPFC_OFFSET))(this);
		}

		::RPG::CustomRP::Quality JFFFIIAOKPI(::System::UInt32 a1)
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMCIALDOECA_GKOCKCAJPKI_JFFFIIAOKPI_OFFSET))(this, a1);
		}

	};
