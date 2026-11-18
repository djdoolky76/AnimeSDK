#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }

#define ENLPLJLDIHN_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1724DBA0)
#define ENLPLJLDIHN_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1724DD30)
#define ENLPLJLDIHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1724DB60)

inline static constexpr unsigned int ENLPLJLDIHN_TypeDefinitionIndex = 43111;

class ENLPLJLDIHN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLPLJLDIHN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLPLJLDIHN_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + ENLPLJLDIHN_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};
