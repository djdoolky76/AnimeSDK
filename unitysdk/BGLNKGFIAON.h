#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigMisc; }

#define BGLNKGFIAON_CREATEOP_OFFSET UNITYSDK_OFFSET(0x10DD9320)
#define BGLNKGFIAON__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD9290)

inline static constexpr unsigned int BGLNKGFIAON_TypeDefinitionIndex = 45254;

class BGLNKGFIAON
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNKGFIAON__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMisc*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMisc*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNKGFIAON_CREATEOP_OFFSET))(this);
	}
};
