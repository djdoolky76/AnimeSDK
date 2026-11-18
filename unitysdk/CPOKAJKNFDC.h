#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKKDCFLLIOF;
namespace System { class Action; }

#define CPOKAJKNFDC_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x13E1EDD0)
#define CPOKAJKNFDC_FIAHOKIKNPI_OFFSET UNITYSDK_OFFSET(0x13E1EDC0)
#define CPOKAJKNFDC_GFNEJOJAMKF_OFFSET UNITYSDK_OFFSET(0x13E1EBF0)
#define CPOKAJKNFDC_HONDPMGLADB_OFFSET UNITYSDK_OFFSET(0x13E1EC30)
#define CPOKAJKNFDC_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x13E1EC80)
#define CPOKAJKNFDC_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x13E1ECF0)
#define CPOKAJKNFDC_PJFPEPHIEGE_OFFSET UNITYSDK_OFFSET(0x13E1ED60)
#define CPOKAJKNFDC__CTOR_OFFSET UNITYSDK_OFFSET(0x13E1EC70)

inline static constexpr unsigned int CPOKAJKNFDC_TypeDefinitionIndex = 86465;

class CPOKAJKNFDC : public ::System::Object
{
public:
	::IKKDCFLLIOF* FNFFDCJOEEJ; // 0x10
	::System::Action* PLEJMLIFFHG; // 0x18
	::System::Boolean NCKCKOHHMOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOKAJKNFDC__CTOR_OFFSET))(this);
	}

	::System::Void GFNEJOJAMKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOKAJKNFDC_GFNEJOJAMKF_OFFSET))(this);
	}

	::System::Void HONDPMGLADB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOKAJKNFDC_HONDPMGLADB_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG(::IKKDCFLLIOF* OFJCKDMPPFO, ::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::IKKDCFLLIOF*, ::System::Action*))((::PBYTE)hIl2Cpp + CPOKAJKNFDC_LCJEELHBNHG_OFFSET))(this, OFJCKDMPPFO, PABLEDCGDGM);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOKAJKNFDC_OKLLFEIJKHN_OFFSET))(this);
	}

	::System::Void PJFPEPHIEGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOKAJKNFDC_PJFPEPHIEGE_OFFSET))(this);
	}

	::IKKDCFLLIOF* FIAHOKIKNPI()
	{
		return ((::IKKDCFLLIOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOKAJKNFDC_FIAHOKIKNPI_OFFSET))(this);
	}

	::System::Boolean DOCGMAIMGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOKAJKNFDC_DOCGMAIMGNJ_OFFSET))(this);
	}
};
