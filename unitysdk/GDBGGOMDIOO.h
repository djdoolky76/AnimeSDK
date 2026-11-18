#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigInspireZoneOperation; }
namespace MoleMole::Config { class ConfigTeamInspireZone; }
namespace System { class String; }

#define GDBGGOMDIOO_CREATEOP_OFFSET UNITYSDK_OFFSET(0x181323E0)
#define GDBGGOMDIOO_FINJCMEHLCC_OFFSET UNITYSDK_OFFSET(0x18132880)
#define GDBGGOMDIOO_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x18132AB0)
#define GDBGGOMDIOO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x18132620)
#define GDBGGOMDIOO_PLDLNEAIIGP_OFFSET UNITYSDK_OFFSET(0x18132720)
#define GDBGGOMDIOO_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18132340)
#define GDBGGOMDIOO__CTOR_OFFSET UNITYSDK_OFFSET(0x181322B0)

inline static constexpr unsigned int GDBGGOMDIOO_TypeDefinitionIndex = 72496;

class GDBGGOMDIOO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBGGOMDIOO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GDBGGOMDIOO_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTeamInspireZone*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTeamInspireZone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBGGOMDIOO_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTeamInspireZone* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigTeamInspireZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBGGOMDIOO_KGNEJKNNODJ_OFFSET))(this);
	}

	::MoleMole::Config::ConfigInspireZoneOperation* PLDLNEAIIGP(::MoleMole::Battle::InspireZoneOperationType DHMKAMPCAAE)
	{
		return ((::MoleMole::Config::ConfigInspireZoneOperation*(*)(::PVOID, ::MoleMole::Battle::InspireZoneOperationType))((::PBYTE)hIl2Cpp + GDBGGOMDIOO_PLDLNEAIIGP_OFFSET))(this, DHMKAMPCAAE);
	}

	::System::String* FINJCMEHLCC(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDBGGOMDIOO_FINJCMEHLCC_OFFSET))(this, ABHBKFJKINO);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GDBGGOMDIOO_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
