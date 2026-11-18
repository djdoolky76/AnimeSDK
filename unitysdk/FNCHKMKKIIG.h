#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class MGCFCPMJJBM;
class NBIJDOENMGD;
namespace System { class Action; }

#define FNCHKMKKIIG_ANPGEJGJFAD_OFFSET UNITYSDK_OFFSET(0x1322A4E0)
#define FNCHKMKKIIG_DMPPOALHGIL_OFFSET UNITYSDK_OFFSET(0x1322A460)
#define FNCHKMKKIIG_IHFLDIGOAAN_OFFSET UNITYSDK_OFFSET(0x1322A780)
#define FNCHKMKKIIG_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x1322A3B0)
#define FNCHKMKKIIG_ONSTART_OFFSET UNITYSDK_OFFSET(0x1322A370)
#define FNCHKMKKIIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1322A450)

inline static constexpr unsigned int FNCHKMKKIIG_TypeDefinitionIndex = 59358;

class FNCHKMKKIIG : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCHKMKKIIG__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCHKMKKIIG_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCHKMKKIIG_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void DMPPOALHGIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCHKMKKIIG_DMPPOALHGIL_OFFSET))(this);
	}

	::System::Void ANPGEJGJFAD(::NBIJDOENMGD* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::NBIJDOENMGD*))((::PBYTE)hIl2Cpp + FNCHKMKKIIG_ANPGEJGJFAD_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void IHFLDIGOAAN(::MGCFCPMJJBM* LJGALBKBEKP, ::System::Action* LPFMDKKFMBA, ::System::Action* COFINDNEAHE)
	{
		return ((::System::Void(*)(::PVOID, ::MGCFCPMJJBM*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FNCHKMKKIIG_IHFLDIGOAAN_OFFSET))(this, LJGALBKBEKP, LPFMDKKFMBA, COFINDNEAHE);
	}
};
