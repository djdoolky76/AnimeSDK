#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigBuddyUISetting; }

#define ICHKJFKMDHP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16A91C70)
#define ICHKJFKMDHP_EHEMAJCJFFH_OFFSET UNITYSDK_OFFSET(0x16A91DA0)
#define ICHKJFKMDHP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16A91EA0)
#define ICHKJFKMDHP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16A91BD0)
#define ICHKJFKMDHP__CTOR_OFFSET UNITYSDK_OFFSET(0x16A91B40)

inline static constexpr unsigned int ICHKJFKMDHP_TypeDefinitionIndex = 57343;

class ICHKJFKMDHP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHKJFKMDHP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ICHKJFKMDHP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigBuddyUISetting*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigBuddyUISetting*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHKJFKMDHP_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigBuddyUISetting* EHEMAJCJFFH()
	{
		return ((::MoleMole::ConfigBuddyUISetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHKJFKMDHP_EHEMAJCJFFH_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ICHKJFKMDHP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
