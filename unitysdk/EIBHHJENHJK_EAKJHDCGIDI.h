#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIArcadePageController; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_EAKJHDCGIDI_LFPPCKPOLGB_OFFSET UNITYSDK_OFFSET(0x11A88020)
#define EIBHHJENHJK_EAKJHDCGIDI__CTOR_OFFSET UNITYSDK_OFFSET(0x11A84440)

inline static constexpr unsigned int EIBHHJENHJK_EAKJHDCGIDI_TypeDefinitionIndex = 71897;

class EIBHHJENHJK_EAKJHDCGIDI : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_EAKJHDCGIDI__CTOR_OFFSET))(this);
	}

	::System::Void LFPPCKPOLGB(::MoleMole::UIArcadePageController* DJNCALKEFCH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIArcadePageController*))((::PBYTE)hIl2Cpp + EIBHHJENHJK_EAKJHDCGIDI_LFPPCKPOLGB_OFFSET))(this, DJNCALKEFCH);
	}
};
