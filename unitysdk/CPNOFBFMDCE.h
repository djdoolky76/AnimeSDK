#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class AtmosphereData; }
namespace MoleMole::Config { class ConfigHollowChessboardAtmosphere; }
namespace System { class String; }

#define CPNOFBFMDCE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12B926E0)
#define CPNOFBFMDCE_GHDOGFLABGD_OFFSET UNITYSDK_OFFSET(0x12B92D70)
#define CPNOFBFMDCE_HKOJEDHHHIK_OFFSET UNITYSDK_OFFSET(0x12B92E70)
#define CPNOFBFMDCE_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12B93090)
#define CPNOFBFMDCE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x12B92B50)
#define CPNOFBFMDCE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12B92640)
#define CPNOFBFMDCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B925B0)

inline static constexpr unsigned int CPNOFBFMDCE_TypeDefinitionIndex = 82201;

class CPNOFBFMDCE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNOFBFMDCE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CPNOFBFMDCE_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboardAtmosphere*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboardAtmosphere*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNOFBFMDCE_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::AtmosphereData* KGNEJKNNODJ(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::AtmosphereData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPNOFBFMDCE_KGNEJKNNODJ_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::Config::ConfigHollowChessboardAtmosphere* GHDOGFLABGD()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardAtmosphere*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNOFBFMDCE_GHDOGFLABGD_OFFSET))(this);
	}

	::MoleMole::Config::AtmosphereData* HKOJEDHHHIK(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::AtmosphereData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPNOFBFMDCE_HKOJEDHHHIK_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CPNOFBFMDCE_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
