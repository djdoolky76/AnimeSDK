#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace System { class String; }

#define BLLPFNPCCML_ALDDONDCCIB_OFFSET UNITYSDK_OFFSET(0x1857C2A0)
#define BLLPFNPCCML_EPFKHDJPDDN_OFFSET UNITYSDK_OFFSET(0x1857C310)
#define BLLPFNPCCML__CTOR_OFFSET UNITYSDK_OFFSET(0x1857C270)

inline static constexpr unsigned int BLLPFNPCCML_TypeDefinitionIndex = 88787;

class BLLPFNPCCML
{
public:
	::System::String* ONOAGAPJNCG; // 0x28
	::System::Single HFAFFNLNAJE; // 0x30

	::System::Void _ctor(::System::String* PDACHPLBKIE, ::System::String* ONOAGAPJNCG, ::System::Single HFAFFNLNAJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + BLLPFNPCCML__CTOR_OFFSET))(this, PDACHPLBKIE, ONOAGAPJNCG, HFAFFNLNAJE);
	}

	::System::Void ALDDONDCCIB(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + BLLPFNPCCML_ALDDONDCCIB_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void EPFKHDJPDDN(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + BLLPFNPCCML_EPFKHDJPDDN_OFFSET))(this, MIALFKCCCPI);
	}
};
