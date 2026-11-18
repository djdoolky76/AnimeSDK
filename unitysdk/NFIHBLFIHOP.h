#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigTeleportSelection3C; }
namespace MoleMole::Config { class ConfigTeleportSelections; }

#define NFIHBLFIHOP_CIPCJDNLLLM_OFFSET UNITYSDK_OFFSET(0xE5785B0)
#define NFIHBLFIHOP_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0xE5784F0)
#define NFIHBLFIHOP_CREATEOP_OFFSET UNITYSDK_OFFSET(0xE5782F0)
#define NFIHBLFIHOP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0xE578420)
#define NFIHBLFIHOP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0xE578250)
#define NFIHBLFIHOP__CTOR_OFFSET UNITYSDK_OFFSET(0xE5781C0)

inline static constexpr unsigned int NFIHBLFIHOP_TypeDefinitionIndex = 73264;

class NFIHBLFIHOP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHBLFIHOP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NFIHBLFIHOP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTeleportSelections*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTeleportSelections*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHBLFIHOP_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NFIHBLFIHOP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigTeleportSelections* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigTeleportSelections*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIHBLFIHOP_COPIDBEMEIE_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTeleportSelection3C* CIPCJDNLLLM(::MoleMole::Config::TeleportSelectionType OBNIAHNMHPF)
	{
		return ((::MoleMole::Config::ConfigTeleportSelection3C*(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType))((::PBYTE)hIl2Cpp + NFIHBLFIHOP_CIPCJDNLLLM_OFFSET))(this, OBNIAHNMHPF);
	}
};
