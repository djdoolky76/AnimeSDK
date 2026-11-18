#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigScaleCameraZ; }
namespace MoleMole::Config { class ConfigScaleCameraZPattern; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIPHOLCDAHC_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0xFB90850)
#define OIPHOLCDAHC_CREATEOP_OFFSET UNITYSDK_OFFSET(0xFB90270)
#define OIPHOLCDAHC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0xFB90780)
#define OIPHOLCDAHC_NNENLNPCIKD_OFFSET UNITYSDK_OFFSET(0xFB904E0)
#define OIPHOLCDAHC_NPAHAPEAPPP_OFFSET UNITYSDK_OFFSET(0xFB904F0)
#define OIPHOLCDAHC_PDLHOEIJANK_OFFSET UNITYSDK_OFFSET(0xFB90A40)
#define OIPHOLCDAHC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0xFB901D0)
#define OIPHOLCDAHC__CTOR_OFFSET UNITYSDK_OFFSET(0xFB900E0)

inline static constexpr unsigned int OIPHOLCDAHC_TypeDefinitionIndex = 44412;

class OIPHOLCDAHC
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigScaleCameraZPattern*>* DPLEOCHBCKN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPHOLCDAHC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OIPHOLCDAHC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigScaleCameraZ*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigScaleCameraZ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPHOLCDAHC_CREATEOP_OFFSET))(this);
	}

	::System::Void NNENLNPCIKD(::MoleMole::Config::ConfigScaleCameraZ* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigScaleCameraZ*))((::PBYTE)hIl2Cpp + OIPHOLCDAHC_NNENLNPCIKD_OFFSET))(this, DFMKILICPFB);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OIPHOLCDAHC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPHOLCDAHC_BJHHNNGACFN_OFFSET))(this);
	}

	::System::Void NPAHAPEAPPP(::MoleMole::Config::ConfigScaleCameraZ* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigScaleCameraZ*))((::PBYTE)hIl2Cpp + OIPHOLCDAHC_NPAHAPEAPPP_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean PDLHOEIJANK(::System::Int32 BKCJBPPJCEL, ::MoleMole::Config::ConfigScaleCameraZPattern*& DJCNCELJPOM, ::System::Boolean JENMPJJHNHE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::Config::ConfigScaleCameraZPattern*&, ::System::Boolean))((::PBYTE)hIl2Cpp + OIPHOLCDAHC_PDLHOEIJANK_OFFSET))(this, BKCJBPPJCEL, DJCNCELJPOM, JENMPJJHNHE);
	}
};
