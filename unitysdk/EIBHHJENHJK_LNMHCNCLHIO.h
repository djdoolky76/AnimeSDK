#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_LNMHCNCLHIO_BAPFGNPAGPO_OFFSET UNITYSDK_OFFSET(0x1354C1B0)
#define EIBHHJENHJK_LNMHCNCLHIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1354C1A0)

inline static constexpr unsigned int EIBHHJENHJK_LNMHCNCLHIO_TypeDefinitionIndex = 71905;

class EIBHHJENHJK_LNMHCNCLHIO : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x10
	::MoleMole::UIControllerContextBase* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LNMHCNCLHIO__CTOR_OFFSET))(this);
	}

	::System::Void BAPFGNPAGPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_LNMHCNCLHIO_BAPFGNPAGPO_OFFSET))(this);
	}
};
