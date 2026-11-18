#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GPENEFDLKHI;

#define HCAJMGAPEAJ_AIKBKPGPEGP_OFFSET UNITYSDK_OFFSET(0x17E2D350)
#define HCAJMGAPEAJ_DCDNGIOFFCD_OFFSET UNITYSDK_OFFSET(0x17E2D1E0)
#define HCAJMGAPEAJ_DOHHJDBIFNF_OFFSET UNITYSDK_OFFSET(0x17E2D1D0)
#define HCAJMGAPEAJ_EAKJJJOEAGD_OFFSET UNITYSDK_OFFSET(0x17E2D240)
#define HCAJMGAPEAJ_HHIFOEGOPPA_1_OFFSET UNITYSDK_OFFSET(0x17E2D300)
#define HCAJMGAPEAJ_HHIFOEGOPPA_OFFSET UNITYSDK_OFFSET(0x17E2D1F0)
#define HCAJMGAPEAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2D110)

inline static constexpr unsigned int HCAJMGAPEAJ_TypeDefinitionIndex = 88190;

class HCAJMGAPEAJ : public ::System::Object
{
public:
	::MoleMole::Config::SceneConfigRuntimeDataArea FMEIJAIILDB; // 0x10
	::GPENEFDLKHI* FDCGKHJOHPE; // 0x58
	::System::Int32 KMOHKCADPNA; // 0x60

	::System::Void _ctor(::GPENEFDLKHI* DFMKILICPFB, ::MoleMole::Config::SceneConfigRuntimeDataArea JGIJNCEPIPK)
	{
		return ((::System::Void(*)(::PVOID, ::GPENEFDLKHI*, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + HCAJMGAPEAJ__CTOR_OFFSET))(this, DFMKILICPFB, JGIJNCEPIPK);
	}

	::GPENEFDLKHI* DOHHJDBIFNF()
	{
		return ((::GPENEFDLKHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAJMGAPEAJ_DOHHJDBIFNF_OFFSET))(this);
	}

	::System::Int32 DCDNGIOFFCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAJMGAPEAJ_DCDNGIOFFCD_OFFSET))(this);
	}

	::System::Boolean HHIFOEGOPPA(::System::Byte HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + HCAJMGAPEAJ_HHIFOEGOPPA_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Boolean EAKJJJOEAGD(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Byte KMOHKCADPNA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Byte))((::PBYTE)hIl2Cpp + HCAJMGAPEAJ_EAKJJJOEAGD_OFFSET))(this, CKPGOKHECCH, KMOHKCADPNA);
	}

	::System::Boolean HHIFOEGOPPA_1(::System::Int32 HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HCAJMGAPEAJ_HHIFOEGOPPA_1_OFFSET))(this, HODAIDNDKHD);
	}

	::MoleMole::Config::SceneConfigRuntimeDataArea AIKBKPGPEGP()
	{
		return ((::MoleMole::Config::SceneConfigRuntimeDataArea(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAJMGAPEAJ_AIKBKPGPEGP_OFFSET))(this);
	}
};
