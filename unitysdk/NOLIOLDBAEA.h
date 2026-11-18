#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class LevelAddOnConfig; }

#define NOLIOLDBAEA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11F8ECA0)
#define NOLIOLDBAEA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8EC10)

inline static constexpr unsigned int NOLIOLDBAEA_TypeDefinitionIndex = 75429;

class NOLIOLDBAEA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLIOLDBAEA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::LevelAddOnConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::LevelAddOnConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOLIOLDBAEA_CREATEOP_OFFSET))(this);
	}
};
