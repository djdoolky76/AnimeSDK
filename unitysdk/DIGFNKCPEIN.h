#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigDigibooNewbie; }

#define DIGFNKCPEIN_CREATEOP_OFFSET UNITYSDK_OFFSET(0xFDBB5A0)
#define DIGFNKCPEIN_IHBIGOGKFAH_OFFSET UNITYSDK_OFFSET(0xFDBB7A0)
#define DIGFNKCPEIN_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0xFDBB6D0)
#define DIGFNKCPEIN_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0xFDBB500)
#define DIGFNKCPEIN__CTOR_OFFSET UNITYSDK_OFFSET(0xFDBB470)

inline static constexpr unsigned int DIGFNKCPEIN_TypeDefinitionIndex = 46817;

class DIGFNKCPEIN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGFNKCPEIN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DIGFNKCPEIN_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigDigibooNewbie*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigDigibooNewbie*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGFNKCPEIN_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DIGFNKCPEIN_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::ConfigDigibooNewbie* IHBIGOGKFAH()
	{
		return ((::MoleMole::ConfigDigibooNewbie*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGFNKCPEIN_IHBIGOGKFAH_OFFSET))(this);
	}
};
