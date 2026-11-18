#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigEnvironmentSound; }

#define LINHOKHHALD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12567CC0)
#define LINHOKHHALD__CTOR_OFFSET UNITYSDK_OFFSET(0x12567C30)

inline static constexpr unsigned int LINHOKHHALD_TypeDefinitionIndex = 92403;

class LINHOKHHALD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINHOKHHALD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigEnvironmentSound*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigEnvironmentSound*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LINHOKHHALD_CREATEOP_OFFSET))(this);
	}
};
