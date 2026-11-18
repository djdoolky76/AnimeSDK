#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigCameraPitchPolars; }

#define KCAHHNLCIHA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x130A96C0)
#define KCAHHNLCIHA__CTOR_OFFSET UNITYSDK_OFFSET(0x130A9630)

inline static constexpr unsigned int KCAHHNLCIHA_TypeDefinitionIndex = 84269;

class KCAHHNLCIHA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAHHNLCIHA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigCameraPitchPolars*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigCameraPitchPolars*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAHHNLCIHA_CREATEOP_OFFSET))(this);
	}
};
