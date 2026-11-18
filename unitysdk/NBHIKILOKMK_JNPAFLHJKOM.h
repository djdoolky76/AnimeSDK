#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }

#define NBHIKILOKMK_JNPAFLHJKOM_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x12887BE0)
#define NBHIKILOKMK_JNPAFLHJKOM_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x12887DE0)
#define NBHIKILOKMK_JNPAFLHJKOM__CTOR_OFFSET UNITYSDK_OFFSET(0x12887BA0)

inline static constexpr unsigned int NBHIKILOKMK_JNPAFLHJKOM_TypeDefinitionIndex = 80329;

class NBHIKILOKMK_JNPAFLHJKOM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK_JNPAFLHJKOM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK_JNPAFLHJKOM_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NBHIKILOKMK_JNPAFLHJKOM_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};
