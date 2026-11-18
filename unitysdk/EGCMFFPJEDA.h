#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigDynamicAccessories; }
namespace MoleMole::Config { class ConfigDynamicAccessoryData; }
namespace System { class String; }

#define EGCMFFPJEDA_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16BDC2D0)
#define EGCMFFPJEDA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16BDC1A0)
#define EGCMFFPJEDA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16BDC670)
#define EGCMFFPJEDA_OPHDJLAAIJL_OFFSET UNITYSDK_OFFSET(0x16BDC390)
#define EGCMFFPJEDA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16BDC100)
#define EGCMFFPJEDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16BDC070)

inline static constexpr unsigned int EGCMFFPJEDA_TypeDefinitionIndex = 43881;

class EGCMFFPJEDA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCMFFPJEDA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EGCMFFPJEDA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigDynamicAccessories*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigDynamicAccessories*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCMFFPJEDA_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigDynamicAccessories* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigDynamicAccessories*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCMFFPJEDA_COPIDBEMEIE_OFFSET))(this);
	}

	::MoleMole::Config::ConfigDynamicAccessoryData* OPHDJLAAIJL(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigDynamicAccessoryData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EGCMFFPJEDA_OPHDJLAAIJL_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EGCMFFPJEDA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
