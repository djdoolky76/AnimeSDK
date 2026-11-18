#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/BuffAttackPropertType.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class ConfigEntityUnderlyingAnimEvents; }
namespace System { class String; }

#define GHAEAIEPJBC_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x189FEC00)
#define GHAEAIEPJBC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x189FDE60)
#define GHAEAIEPJBC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x189FE810)
#define GHAEAIEPJBC_JLJCJLJIENH_OFFSET UNITYSDK_OFFSET(0x189FE430)
#define GHAEAIEPJBC_PEKDKDPBDMD_1_OFFSET UNITYSDK_OFFSET(0x189FE8E0)
#define GHAEAIEPJBC_PEKDKDPBDMD_OFFSET UNITYSDK_OFFSET(0x189FDFE0)
#define GHAEAIEPJBC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x189FDDC0)
#define GHAEAIEPJBC__CTOR_OFFSET UNITYSDK_OFFSET(0x189FDD30)

inline static constexpr unsigned int GHAEAIEPJBC_TypeDefinitionIndex = 57276;

class GHAEAIEPJBC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAEAIEPJBC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GHAEAIEPJBC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAEAIEPJBC_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigEntityAttackProperty* PEKDKDPBDMD(::MoleMole::Config::BuffGroupName EPIDDDEJJDE, ::MoleMole::Config::BuffAttackPropertType AEFOBFECABN, ::System::Int32 GBEDMEDDNOL)
	{
		return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::PVOID, ::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffAttackPropertType, ::System::Int32))((::PBYTE)hIl2Cpp + GHAEAIEPJBC_PEKDKDPBDMD_OFFSET))(this, EPIDDDEJJDE, AEFOBFECABN, GBEDMEDDNOL);
	}

	::MoleMole::Config::ConfigEntityAttackProperty* JLJCJLJIENH(::MoleMole::Config::BuffGroupName EPIDDDEJJDE, ::MoleMole::Config::BuffAttackPropertType AEFOBFECABN, ::System::Int32 GBEDMEDDNOL)
	{
		return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::PVOID, ::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffAttackPropertType, ::System::Int32))((::PBYTE)hIl2Cpp + GHAEAIEPJBC_JLJCJLJIENH_OFFSET))(this, EPIDDDEJJDE, AEFOBFECABN, GBEDMEDDNOL);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GHAEAIEPJBC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigEntityAttackProperty* PEKDKDPBDMD_1(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigEntityAttackProperty*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GHAEAIEPJBC_PEKDKDPBDMD_1_OFFSET))(this, MCOHLHMKLIP);
	}

	::MoleMole::Config::ConfigEntityUnderlyingAnimEvents* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAEAIEPJBC_COPIDBEMEIE_OFFSET))(this);
	}
};
