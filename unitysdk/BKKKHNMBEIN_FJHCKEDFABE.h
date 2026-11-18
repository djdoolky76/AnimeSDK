#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOnlineBottomBarWidgetController; }

#define BKKKHNMBEIN_FJHCKEDFABE_COAADKBEKOL_OFFSET UNITYSDK_OFFSET(0x113EEF90)
#define BKKKHNMBEIN_FJHCKEDFABE__CTOR_OFFSET UNITYSDK_OFFSET(0x113EEF80)

inline static constexpr unsigned int BKKKHNMBEIN_FJHCKEDFABE_TypeDefinitionIndex = 41302;

class BKKKHNMBEIN_FJHCKEDFABE : public ::System::Object
{
public:
	::MoleMole::UIOnlineBottomBarWidgetController* JOLDOMEIKEF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKKHNMBEIN_FJHCKEDFABE__CTOR_OFFSET))(this);
	}

	::System::Void COAADKBEKOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKKHNMBEIN_FJHCKEDFABE_COAADKBEKOL_OFFSET))(this);
	}
};
