#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigLightbarPreset; }

#define ABIMAOCNBGI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1349FAA0)
#define ABIMAOCNBGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1349FA10)

inline static constexpr unsigned int ABIMAOCNBGI_TypeDefinitionIndex = 63872;

class ABIMAOCNBGI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIMAOCNBGI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigLightbarPreset*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigLightbarPreset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIMAOCNBGI_CREATEOP_OFFSET))(this);
	}
};
