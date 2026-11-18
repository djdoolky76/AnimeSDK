#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigLockTargetMisc; }

#define HAAGMMMCPDB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16CDD4A0)
#define HAAGMMMCPDB__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDD410)

inline static constexpr unsigned int HAAGMMMCPDB_TypeDefinitionIndex = 63337;

class HAAGMMMCPDB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAAGMMMCPDB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigLockTargetMisc*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigLockTargetMisc*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAAGMMMCPDB_CREATEOP_OFFSET))(this);
	}
};
