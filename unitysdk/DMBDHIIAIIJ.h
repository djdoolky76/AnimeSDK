#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigLevelSound; }

#define DMBDHIIAIIJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12BB9DE0)
#define DMBDHIIAIIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB9D50)

inline static constexpr unsigned int DMBDHIIAIIJ_TypeDefinitionIndex = 62921;

class DMBDHIIAIIJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBDHIIAIIJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigLevelSound*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigLevelSound*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBDHIIAIIJ_CREATEOP_OFFSET))(this);
	}
};
