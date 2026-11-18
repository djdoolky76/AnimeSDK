#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCPFHFOLBFF.h"

namespace MoleMole { class UIBabeltowerTrickLevelRowWidgetController; }
namespace System { class String; }

#define KEBGFNECFJP_ALDDONDCCIB_OFFSET UNITYSDK_OFFSET(0x1860B3E0)
#define KEBGFNECFJP_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1860B450)
#define KEBGFNECFJP_EPFKHDJPDDN_OFFSET UNITYSDK_OFFSET(0x1860B500)
#define KEBGFNECFJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1860B3B0)

inline static constexpr unsigned int KEBGFNECFJP_TypeDefinitionIndex = 77665;

class KEBGFNECFJP
{
public:
	::System::Single EGEGIMGMJHN; // 0x28
	::DCPFHFOLBFF EGODKLPFBFF; // 0x2C

	::System::Void _ctor(::System::String* PDACHPLBKIE, ::DCPFHFOLBFF EGODKLPFBFF, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DCPFHFOLBFF, ::System::Single))((::PBYTE)hIl2Cpp + KEBGFNECFJP__CTOR_OFFSET))(this, PDACHPLBKIE, EGODKLPFBFF, EGEGIMGMJHN);
	}

	::System::Void ALDDONDCCIB(::MoleMole::UIBabeltowerTrickLevelRowWidgetController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickLevelRowWidgetController*))((::PBYTE)hIl2Cpp + KEBGFNECFJP_ALDDONDCCIB_OFFSET))(this, NCIMBHDKIJM);
	}

	static ::KEBGFNECFJP* COKNIICCODC(::DCPFHFOLBFF EGODKLPFBFF, ::System::Single EGEGIMGMJHN)
	{
		return ((::KEBGFNECFJP*(*)(::DCPFHFOLBFF, ::System::Single))((::PBYTE)hIl2Cpp + KEBGFNECFJP_COKNIICCODC_OFFSET))(EGODKLPFBFF, EGEGIMGMJHN);
	}

	::System::Void EPFKHDJPDDN(::MoleMole::UIBabeltowerTrickLevelRowWidgetController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickLevelRowWidgetController*))((::PBYTE)hIl2Cpp + KEBGFNECFJP_EPFKHDJPDDN_OFFSET))(this, MIALFKCCCPI);
	}
};
