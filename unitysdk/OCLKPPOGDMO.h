#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }

#define OCLKPPOGDMO_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1B774420)
#define OCLKPPOGDMO_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1B774870)
#define OCLKPPOGDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7743E0)

inline static constexpr unsigned int OCLKPPOGDMO_TypeDefinitionIndex = 79427;

class OCLKPPOGDMO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKPPOGDMO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKPPOGDMO_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + OCLKPPOGDMO_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};
