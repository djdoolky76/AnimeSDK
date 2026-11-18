#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigStealthMonster; }

#define IANMBCCGMLG_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x181A0760)
#define IANMBCCGMLG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x181A0630)
#define IANMBCCGMLG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x181A0820)
#define IANMBCCGMLG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x181A0590)
#define IANMBCCGMLG__CTOR_OFFSET UNITYSDK_OFFSET(0x181A0500)

inline static constexpr unsigned int IANMBCCGMLG_TypeDefinitionIndex = 82582;

class IANMBCCGMLG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANMBCCGMLG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IANMBCCGMLG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigStealthMonster*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigStealthMonster*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANMBCCGMLG_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigStealthMonster* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigStealthMonster*(*)(::PVOID))((::PBYTE)hIl2Cpp + IANMBCCGMLG_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IANMBCCGMLG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
