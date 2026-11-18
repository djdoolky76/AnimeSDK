#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigLinkZone; }

#define DKNACHDGPAA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x18348580)
#define DKNACHDGPAA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x183488C0)
#define DKNACHDGPAA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x183487C0)
#define DKNACHDGPAA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x183484E0)
#define DKNACHDGPAA__CTOR_OFFSET UNITYSDK_OFFSET(0x18348450)

inline static constexpr unsigned int DKNACHDGPAA_TypeDefinitionIndex = 59740;

class DKNACHDGPAA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNACHDGPAA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DKNACHDGPAA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigLinkZone*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigLinkZone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNACHDGPAA_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLinkZone* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigLinkZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNACHDGPAA_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DKNACHDGPAA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
