#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigBubbleGroup; }

#define IPHCIHMBCKP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1988DBF0)
#define IPHCIHMBCKP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1988DF30)
#define IPHCIHMBCKP_JGBAEAFDKJB_OFFSET UNITYSDK_OFFSET(0x1988DE30)
#define IPHCIHMBCKP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1988DB50)
#define IPHCIHMBCKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1988DAC0)

inline static constexpr unsigned int IPHCIHMBCKP_TypeDefinitionIndex = 48007;

class IPHCIHMBCKP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHCIHMBCKP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IPHCIHMBCKP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigBubbleGroup*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigBubbleGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHCIHMBCKP_CREATEOP_OFFSET))(this);
	}

	::MoleMole::ConfigBubbleGroup* JGBAEAFDKJB()
	{
		return ((::MoleMole::ConfigBubbleGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHCIHMBCKP_JGBAEAFDKJB_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IPHCIHMBCKP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
