#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/Config/LanguageFontSizeConfig.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUIFontSize; }
namespace System { class String; }

#define CIHJDFPCGNI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15336B30)
#define CIHJDFPCGNI_IOLEBAABNCO_OFFSET UNITYSDK_OFFSET(0x15336D30)
#define CIHJDFPCGNI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15336C60)
#define CIHJDFPCGNI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15336A90)
#define CIHJDFPCGNI__CTOR_OFFSET UNITYSDK_OFFSET(0x15336A00)

inline static constexpr unsigned int CIHJDFPCGNI_TypeDefinitionIndex = 87609;

class CIHJDFPCGNI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHJDFPCGNI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CIHJDFPCGNI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIFontSize*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIFontSize*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHJDFPCGNI_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CIHJDFPCGNI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean IOLEBAABNCO(::System::String* MGMDLMBEDJF, ::MoleMole::LanguageType CBMOOALPNHB, ::MoleMole::Config::LanguageFontSizeConfig& IGAAKDOIPNN, ::System::Boolean& PBMGAKFGNFJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::LanguageType, ::MoleMole::Config::LanguageFontSizeConfig&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CIHJDFPCGNI_IOLEBAABNCO_OFFSET))(this, MGMDLMBEDJF, CBMOOALPNHB, IGAAKDOIPNN, PBMGAKFGNFJ);
	}
};
