#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigShootingGround; }
namespace MoleMole::Config { class ConfigShootingGroundScriptableObject; }
namespace System { class String; }

#define EGLPCNCIDMO_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17109700)
#define EGLPCNCIDMO_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17109BD0)
#define EGLPCNCIDMO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x17109940)
#define EGLPCNCIDMO_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x17109660)
#define EGLPCNCIDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x171095D0)

inline static constexpr unsigned int EGLPCNCIDMO_TypeDefinitionIndex = 39129;

class EGLPCNCIDMO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLPCNCIDMO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EGLPCNCIDMO_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigShootingGroundScriptableObject*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigShootingGroundScriptableObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLPCNCIDMO_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigShootingGround* KGNEJKNNODJ(::System::String* MGMDLMBEDJF)
	{
		return ((::MoleMole::Config::ConfigShootingGround*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EGLPCNCIDMO_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EGLPCNCIDMO_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
