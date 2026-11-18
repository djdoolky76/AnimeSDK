#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSystemSetting; }

#define MLKLOBCCHNH_KDCAOFFAKJG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x151EB330)
#define MLKLOBCCHNH_KDCAOFFAKJG__CTOR_OFFSET UNITYSDK_OFFSET(0x151EB2A0)

inline static constexpr unsigned int MLKLOBCCHNH_KDCAOFFAKJG_TypeDefinitionIndex = 55568;

class MLKLOBCCHNH_KDCAOFFAKJG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_KDCAOFFAKJG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSystemSetting*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSystemSetting*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLKLOBCCHNH_KDCAOFFAKJG_CREATEOP_OFFSET))(this);
	}
};
