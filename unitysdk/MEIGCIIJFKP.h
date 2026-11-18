#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadAssetOp_1; }
namespace Foundation { class MultiVersionDiffConfig; }

#define MEIGCIIJFKP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x11F45120)
#define MEIGCIIJFKP_LDOKDICGHFA_OFFSET UNITYSDK_OFFSET(0x11F451F0)
#define MEIGCIIJFKP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x11F45080)
#define MEIGCIIJFKP__CTOR_OFFSET UNITYSDK_OFFSET(0x11F44ED0)

inline static constexpr unsigned int MEIGCIIJFKP_TypeDefinitionIndex = 76490;

class MEIGCIIJFKP
{
public:
	::ConfigModuleLib::Runtime::LoadAssetOp_1<::Foundation::MultiVersionDiffConfig*>* GNKCCEHFAPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEIGCIIJFKP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MEIGCIIJFKP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MEIGCIIJFKP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LDOKDICGHFA(::Foundation::MultiVersionDiffConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::MultiVersionDiffConfig*))((::PBYTE)hIl2Cpp + MEIGCIIJFKP_LDOKDICGHFA_OFFSET))(this, DFMKILICPFB);
	}
};
