#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_DOHMNJACNEF_GNEMNIHKIGL_OFFSET UNITYSDK_OFFSET(0x14151DC0)
#define EIBHHJENHJK_DOHMNJACNEF__CTOR_OFFSET UNITYSDK_OFFSET(0x14151DB0)

inline static constexpr unsigned int EIBHHJENHJK_DOHMNJACNEF_TypeDefinitionIndex = 71889;

class EIBHHJENHJK_DOHMNJACNEF : public ::System::Object
{
public:
	::MoleMole::UIControllerContextBase* AAOCANGHBDG; // 0x10
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_DOHMNJACNEF__CTOR_OFFSET))(this);
	}

	::System::Void GNEMNIHKIGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_DOHMNJACNEF_GNEMNIHKIGL_OFFSET))(this);
	}
};
