#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class FeverConfig; }
namespace MoleMole::Config { class ConfigInspireZoneOperation; }

#define IONJGJNBGJI_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16AB6BE0)
#define IONJGJNBGJI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16AB69A0)
#define IONJGJNBGJI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16AB6E50)
#define IONJGJNBGJI_PLDLNEAIIGP_OFFSET UNITYSDK_OFFSET(0x16AB6CA0)
#define IONJGJNBGJI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16AB6900)
#define IONJGJNBGJI__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB6870)

inline static constexpr unsigned int IONJGJNBGJI_TypeDefinitionIndex = 44966;

class IONJGJNBGJI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJGJNBGJI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IONJGJNBGJI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::FeverConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::FeverConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJGJNBGJI_CREATEOP_OFFSET))(this);
	}

	::MoleMole::FeverConfig* COPIDBEMEIE()
	{
		return ((::MoleMole::FeverConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJGJNBGJI_COPIDBEMEIE_OFFSET))(this);
	}

	::MoleMole::Config::ConfigInspireZoneOperation* PLDLNEAIIGP(::MoleMole::Battle::InspireZoneOperationType OBNIAHNMHPF)
	{
		return ((::MoleMole::Config::ConfigInspireZoneOperation*(*)(::PVOID, ::MoleMole::Battle::InspireZoneOperationType))((::PBYTE)hIl2Cpp + IONJGJNBGJI_PLDLNEAIIGP_OFFSET))(this, OBNIAHNMHPF);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IONJGJNBGJI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
