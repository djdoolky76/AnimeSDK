#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPPMPHICDEA_CEOFDFPDMCB;
namespace MoleMole { class UIGachaPerformanceContext; }

#define GPPMPHICDEA_FDBFLHOEJBB_GDMGEAMKPEI_OFFSET UNITYSDK_OFFSET(0x17A308E0)
#define GPPMPHICDEA_FDBFLHOEJBB__CTOR_OFFSET UNITYSDK_OFFSET(0x17A308D0)

inline static constexpr unsigned int GPPMPHICDEA_FDBFLHOEJBB_TypeDefinitionIndex = 42671;

class GPPMPHICDEA_FDBFLHOEJBB : public ::System::Object
{
public:
	::MoleMole::UIGachaPerformanceContext* AAOCANGHBDG; // 0x10
	::GPPMPHICDEA_CEOFDFPDMCB* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FDBFLHOEJBB__CTOR_OFFSET))(this);
	}

	::System::Void GDMGEAMKPEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_FDBFLHOEJBB_GDMGEAMKPEI_OFFSET))(this);
	}
};
