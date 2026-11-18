#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole { class ConfigBulletTracingData; }

#define PFNPCHIOAMJ_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x18468F50)
#define PFNPCHIOAMJ_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x184690B0)
#define PFNPCHIOAMJ_MAKDEBMAGKI_OFFSET UNITYSDK_OFFSET(0x184691A0)
#define PFNPCHIOAMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18468F10)

inline static constexpr unsigned int PFNPCHIOAMJ_TypeDefinitionIndex = 83203;

class PFNPCHIOAMJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNPCHIOAMJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNPCHIOAMJ_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + PFNPCHIOAMJ_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void MAKDEBMAGKI(::MoleMole::ConfigBulletTracingData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBulletTracingData*))((::PBYTE)hIl2Cpp + PFNPCHIOAMJ_MAKDEBMAGKI_OFFSET))(this, DFMKILICPFB);
	}
};
