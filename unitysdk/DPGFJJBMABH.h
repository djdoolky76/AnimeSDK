#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace System { class String; }

#define DPGFJJBMABH_ALDDONDCCIB_OFFSET UNITYSDK_OFFSET(0x10613520)
#define DPGFJJBMABH_EPFKHDJPDDN_OFFSET UNITYSDK_OFFSET(0x10613580)
#define DPGFJJBMABH__CTOR_OFFSET UNITYSDK_OFFSET(0x106134F0)

inline static constexpr unsigned int DPGFJJBMABH_TypeDefinitionIndex = 63674;

class DPGFJJBMABH
{
public:
	::System::Int32 CFPGGDCDLIN; // 0x28

	::System::Void _ctor(::System::String* PDACHPLBKIE, ::System::Int32 CFPGGDCDLIN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DPGFJJBMABH__CTOR_OFFSET))(this, PDACHPLBKIE, CFPGGDCDLIN);
	}

	::System::Void ALDDONDCCIB(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + DPGFJJBMABH_ALDDONDCCIB_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void EPFKHDJPDDN(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + DPGFJJBMABH_EPFKHDJPDDN_OFFSET))(this, MIALFKCCCPI);
	}
};
