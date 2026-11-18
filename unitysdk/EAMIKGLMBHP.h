#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Level { class LevelConfig; }

#define EAMIKGLMBHP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16986C80)
#define EAMIKGLMBHP__CTOR_OFFSET UNITYSDK_OFFSET(0x16986BF0)

inline static constexpr unsigned int EAMIKGLMBHP_TypeDefinitionIndex = 71800;

class EAMIKGLMBHP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMIKGLMBHP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Level::LevelConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Level::LevelConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAMIKGLMBHP_CREATEOP_OFFSET))(this);
	}
};
