#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }

#define APDAIKOBAKC_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x134ED2B0)
#define APDAIKOBAKC_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x134ED700)
#define APDAIKOBAKC__CTOR_OFFSET UNITYSDK_OFFSET(0x134ED270)

inline static constexpr unsigned int APDAIKOBAKC_TypeDefinitionIndex = 89011;

class APDAIKOBAKC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDAIKOBAKC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + APDAIKOBAKC_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + APDAIKOBAKC_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}
};
