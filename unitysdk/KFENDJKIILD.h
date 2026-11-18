#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigPinball; }

#define KFENDJKIILD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x176499E0)
#define KFENDJKIILD_ENIAFKKBBPI_OFFSET UNITYSDK_OFFSET(0x17649FB0)
#define KFENDJKIILD_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1764A190)
#define KFENDJKIILD_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x17649EB0)
#define KFENDJKIILD_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x17649940)
#define KFENDJKIILD__CTOR_OFFSET UNITYSDK_OFFSET(0x176498B0)

inline static constexpr unsigned int KFENDJKIILD_TypeDefinitionIndex = 50959;

class KFENDJKIILD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFENDJKIILD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KFENDJKIILD_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigPinball*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigPinball*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFENDJKIILD_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigPinball* KGNEJKNNODJ()
	{
		return ((::MoleMole::ConfigPinball*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFENDJKIILD_KGNEJKNNODJ_OFFSET))(this);
	}

	::MoleMole::ConfigPinball* ENIAFKKBBPI()
	{
		return ((::MoleMole::ConfigPinball*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFENDJKIILD_ENIAFKKBBPI_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KFENDJKIILD_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
