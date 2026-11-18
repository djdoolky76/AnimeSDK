#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSceneSound; }
namespace System { class String; }

#define CPOIBLAOEBI_BEHKHDHPPNJ_OFFSET UNITYSDK_OFFSET(0x19A25260)
#define CPOIBLAOEBI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x19A25070)
#define CPOIBLAOEBI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x19A25750)
#define CPOIBLAOEBI_JFGNAICJJAC_OFFSET UNITYSDK_OFFSET(0x19A251A0)
#define CPOIBLAOEBI_NKLPDEBMBEG_OFFSET UNITYSDK_OFFSET(0x19A25570)
#define CPOIBLAOEBI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x19A24FD0)
#define CPOIBLAOEBI__CTOR_OFFSET UNITYSDK_OFFSET(0x19A24F40)

inline static constexpr unsigned int CPOIBLAOEBI_TypeDefinitionIndex = 87255;

class CPOIBLAOEBI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOIBLAOEBI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CPOIBLAOEBI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSceneSound*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSceneSound*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOIBLAOEBI_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSceneSound* JFGNAICJJAC()
	{
		return ((::MoleMole::Config::ConfigSceneSound*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOIBLAOEBI_JFGNAICJJAC_OFFSET))(this);
	}

	::System::Single BEHKHDHPPNJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOIBLAOEBI_BEHKHDHPPNJ_OFFSET))(this);
	}

	::System::String* NKLPDEBMBEG(::System::String* JNEPCCIHBMB)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPOIBLAOEBI_NKLPDEBMBEG_OFFSET))(this, JNEPCCIHBMB);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CPOIBLAOEBI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
