#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class DitherConfig; }
namespace MoleMole { class DitherConfigSeparate; }
namespace System { class String; }

#define KCBGFCMHOMG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x130A9920)
#define KCBGFCMHOMG_DHCAPILEHNN_OFFSET UNITYSDK_OFFSET(0x130A9D30)
#define KCBGFCMHOMG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x130A9C60)
#define KCBGFCMHOMG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x130A9B60)
#define KCBGFCMHOMG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x130A9880)
#define KCBGFCMHOMG__CTOR_OFFSET UNITYSDK_OFFSET(0x130A97F0)

inline static constexpr unsigned int KCBGFCMHOMG_TypeDefinitionIndex = 55016;

class KCBGFCMHOMG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBGFCMHOMG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KCBGFCMHOMG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::DitherConfigSeparate*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::DitherConfigSeparate*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBGFCMHOMG_CREATEOP_OFFSET))(this);
	}

	::MoleMole::DitherConfigSeparate* KGNEJKNNODJ()
	{
		return ((::MoleMole::DitherConfigSeparate*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCBGFCMHOMG_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KCBGFCMHOMG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::DitherConfig* DHCAPILEHNN(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::DitherConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KCBGFCMHOMG_DHCAPILEHNN_OFFSET))(this, MCOHLHMKLIP);
	}
};
