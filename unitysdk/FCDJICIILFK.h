#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class ConfigTextureColor;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }

#define FCDJICIILFK_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11ABE590)
#define FCDJICIILFK_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x11ABE7C0)
#define FCDJICIILFK_MOFHFLAOBHI_OFFSET UNITYSDK_OFFSET(0x11ABE6C0)
#define FCDJICIILFK_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x11ABE4F0)
#define FCDJICIILFK__CTOR_OFFSET UNITYSDK_OFFSET(0x11ABE460)

inline static constexpr unsigned int FCDJICIILFK_TypeDefinitionIndex = 89898;

class FCDJICIILFK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDJICIILFK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FCDJICIILFK_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::ConfigTextureColor*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::ConfigTextureColor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDJICIILFK_CREATEOP_OFFSET))(this);
	}

	::ConfigTextureColor* MOFHFLAOBHI()
	{
		return ((::ConfigTextureColor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDJICIILFK_MOFHFLAOBHI_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FCDJICIILFK_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
