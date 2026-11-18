#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigTrainingRoom; }

#define LNOCBGKGKLC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15E0D220)
#define LNOCBGKGKLC__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0D190)

inline static constexpr unsigned int LNOCBGKGKLC_TypeDefinitionIndex = 49216;

class LNOCBGKGKLC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOCBGKGKLC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTrainingRoom*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTrainingRoom*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNOCBGKGKLC_CREATEOP_OFFSET))(this);
	}
};
