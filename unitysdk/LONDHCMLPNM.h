#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigOnGoingTypeDurationData; }

#define LONDHCMLPNM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12D4A400)
#define LONDHCMLPNM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12D4A920)
#define LONDHCMLPNM_OOCNMINHDCA_OFFSET UNITYSDK_OFFSET(0x12D4A9F0)
#define LONDHCMLPNM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12D4A360)
#define LONDHCMLPNM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4A2D0)

inline static constexpr unsigned int LONDHCMLPNM_TypeDefinitionIndex = 72828;

class LONDHCMLPNM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONDHCMLPNM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LONDHCMLPNM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigOnGoingTypeDurationData*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigOnGoingTypeDurationData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LONDHCMLPNM_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LONDHCMLPNM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OOCNMINHDCA(::System::Int32& KIADGHJNLAC, ::System::Int32& KHMMANBNPII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + LONDHCMLPNM_OOCNMINHDCA_OFFSET))(this, KIADGHJNLAC, KHMMANBNPII);
	}
};
