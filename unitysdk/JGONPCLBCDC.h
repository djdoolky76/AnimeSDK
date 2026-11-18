#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define JGONPCLBCDC_GHBLPPMCJLB_OFFSET UNITYSDK_OFFSET(0x18A13FE0)
#define JGONPCLBCDC_ICOJFFHDOMA_OFFSET UNITYSDK_OFFSET(0x18A13F50)
#define JGONPCLBCDC_ICPMADMLEMI_OFFSET UNITYSDK_OFFSET(0x18A14050)
#define JGONPCLBCDC_LJPBLJDADAA_OFFSET UNITYSDK_OFFSET(0x18A13F10)
#define JGONPCLBCDC__CTOR_OFFSET UNITYSDK_OFFSET(0x18A13F00)

inline static constexpr unsigned int JGONPCLBCDC_TypeDefinitionIndex = 72591;

class JGONPCLBCDC : public ::BAPNBOCDBHM
{
public:
	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + JGONPCLBCDC__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Boolean LJPBLJDADAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGONPCLBCDC_LJPBLJDADAA_OFFSET))(this);
	}

	::System::Void ICOJFFHDOMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGONPCLBCDC_ICOJFFHDOMA_OFFSET))(this);
	}

	::System::Void GHBLPPMCJLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGONPCLBCDC_GHBLPPMCJLB_OFFSET))(this);
	}

	::System::Boolean ICPMADMLEMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGONPCLBCDC_ICPMADMLEMI_OFFSET))(this);
	}
};
