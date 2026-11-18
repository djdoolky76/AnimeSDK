#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUIAvatarShowSettingsIndex; }

#define CEDBLIJGCNH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x139A6320)
#define CEDBLIJGCNH__CTOR_OFFSET UNITYSDK_OFFSET(0x139A6290)

inline static constexpr unsigned int CEDBLIJGCNH_TypeDefinitionIndex = 63534;

class CEDBLIJGCNH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDBLIJGCNH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIAvatarShowSettingsIndex*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIAvatarShowSettingsIndex*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDBLIJGCNH_CREATEOP_OFFSET))(this);
	}
};
