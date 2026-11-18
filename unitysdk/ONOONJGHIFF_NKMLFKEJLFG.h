#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ONOONJGHIFF_BEKENFBOOJM.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }

#define ONOONJGHIFF_NKMLFKEJLFG_CJPGBDMDBEF_OFFSET UNITYSDK_OFFSET(0x18458430)
#define ONOONJGHIFF_NKMLFKEJLFG__CTOR_OFFSET UNITYSDK_OFFSET(0x18458420)

inline static constexpr unsigned int ONOONJGHIFF_NKMLFKEJLFG_TypeDefinitionIndex = 41458;

class ONOONJGHIFF_NKMLFKEJLFG : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOONJGHIFF_NKMLFKEJLFG__CTOR_OFFSET))(this);
	}

	::System::Void CJPGBDMDBEF(::ONOONJGHIFF_BEKENFBOOJM OIFAGALBPHC)
	{
		return ((::System::Void(*)(::PVOID, ::ONOONJGHIFF_BEKENFBOOJM))((::PBYTE)hIl2Cpp + ONOONJGHIFF_NKMLFKEJLFG_CJPGBDMDBEF_OFFSET))(this, OIFAGALBPHC);
	}
};
