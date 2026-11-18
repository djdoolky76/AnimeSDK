#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class PNDIFMAINIM;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigMonsterAlerts; }
namespace System { class String; }

#define DMFLBONOFGG_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x13E59E60)
#define DMFLBONOFGG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13E59A90)
#define DMFLBONOFGG_ECIGHMMFFHE_OFFSET UNITYSDK_OFFSET(0x13E59BC0)
#define DMFLBONOFGG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13E59F20)
#define DMFLBONOFGG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13E599F0)
#define DMFLBONOFGG__CTOR_OFFSET UNITYSDK_OFFSET(0x13E59960)

inline static constexpr unsigned int DMFLBONOFGG_TypeDefinitionIndex = 48267;

class DMFLBONOFGG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFLBONOFGG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DMFLBONOFGG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMonsterAlerts*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMonsterAlerts*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFLBONOFGG_CREATEOP_OFFSET))(this);
	}

	::PNDIFMAINIM* ECIGHMMFFHE(::System::String* MCOHLHMKLIP)
	{
		return ((::PNDIFMAINIM*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DMFLBONOFGG_ECIGHMMFFHE_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::Config::ConfigMonsterAlerts* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigMonsterAlerts*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFLBONOFGG_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DMFLBONOFGG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
