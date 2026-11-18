#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class PFNPCHIOAMJ;
namespace MoleMole { class ConfigBulletTracingData; }

#define PFNPCHIOAMJ_FLIDOODBGFM_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x15538440)
#define PFNPCHIOAMJ_FLIDOODBGFM__CTOR_OFFSET UNITYSDK_OFFSET(0x15538430)

inline static constexpr unsigned int PFNPCHIOAMJ_FLIDOODBGFM_TypeDefinitionIndex = 83204;

class PFNPCHIOAMJ_FLIDOODBGFM : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::PFNPCHIOAMJ* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNPCHIOAMJ_FLIDOODBGFM__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::ConfigBulletTracingData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBulletTracingData*))((::PBYTE)hIl2Cpp + PFNPCHIOAMJ_FLIDOODBGFM_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
