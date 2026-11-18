#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }

#define NBHIKILOKMK_GIKMLPGGDFD_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x120F1170)
#define NBHIKILOKMK_GIKMLPGGDFD_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x120F1370)
#define NBHIKILOKMK_GIKMLPGGDFD__CTOR_OFFSET UNITYSDK_OFFSET(0x120F1130)

inline static constexpr unsigned int NBHIKILOKMK_GIKMLPGGDFD_TypeDefinitionIndex = 80326;

class NBHIKILOKMK_GIKMLPGGDFD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK_GIKMLPGGDFD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHIKILOKMK_GIKMLPGGDFD_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NBHIKILOKMK_GIKMLPGGDFD_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};
