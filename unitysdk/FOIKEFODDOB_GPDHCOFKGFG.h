#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUIScriptableAnimSpecialNum; }

#define FOIKEFODDOB_GPDHCOFKGFG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x179C1DB0)
#define FOIKEFODDOB_GPDHCOFKGFG__CTOR_OFFSET UNITYSDK_OFFSET(0x179C1D20)

inline static constexpr unsigned int FOIKEFODDOB_GPDHCOFKGFG_TypeDefinitionIndex = 66545;

class FOIKEFODDOB_GPDHCOFKGFG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_GPDHCOFKGFG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_GPDHCOFKGFG_CREATEOP_OFFSET))(this);
	}
};
