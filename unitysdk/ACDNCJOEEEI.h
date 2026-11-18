#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigHollowPlayer; }

#define ACDNCJOEEEI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x181E78B0)
#define ACDNCJOEEEI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x181E7D20)
#define ACDNCJOEEEI_LCJMMAGEKDA_OFFSET UNITYSDK_OFFSET(0x181E7DF0)
#define ACDNCJOEEEI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x181E7810)
#define ACDNCJOEEEI__CTOR_OFFSET UNITYSDK_OFFSET(0x181E7780)

inline static constexpr unsigned int ACDNCJOEEEI_TypeDefinitionIndex = 61816;

class ACDNCJOEEEI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDNCJOEEEI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ACDNCJOEEEI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowPlayer*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowPlayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDNCJOEEEI_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ACDNCJOEEEI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigHollowPlayer* LCJMMAGEKDA()
	{
		return ((::MoleMole::Config::ConfigHollowPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDNCJOEEEI_LCJMMAGEKDA_OFFSET))(this);
	}
};
