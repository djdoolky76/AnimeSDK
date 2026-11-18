#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class OverlayOutlineCollectionConfig; }
namespace System { class Action; }

#define MDIPILFGOAC_BPEHEDEPICB_HOLADCNCPND_OFFSET UNITYSDK_OFFSET(0x14D66240)
#define MDIPILFGOAC_BPEHEDEPICB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D66230)

inline static constexpr unsigned int MDIPILFGOAC_BPEHEDEPICB_TypeDefinitionIndex = 75726;

class MDIPILFGOAC_BPEHEDEPICB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIPILFGOAC_BPEHEDEPICB__CTOR_OFFSET))(this);
	}

	::System::Void HOLADCNCPND(::MoleMole::Config::OverlayOutlineCollectionConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::OverlayOutlineCollectionConfig*))((::PBYTE)hIl2Cpp + MDIPILFGOAC_BPEHEDEPICB_HOLADCNCPND_OFFSET))(this, DFMKILICPFB);
	}
};
