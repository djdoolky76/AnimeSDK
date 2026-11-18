#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_MIGMENJKNHE_FBFCCEICJKG_OFFSET UNITYSDK_OFFSET(0x16BE8F40)
#define EIBHHJENHJK_MIGMENJKNHE__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE8F30)

inline static constexpr unsigned int EIBHHJENHJK_MIGMENJKNHE_TypeDefinitionIndex = 71911;

class EIBHHJENHJK_MIGMENJKNHE : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x10
	::MoleMole::UIControllerContextBase* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_MIGMENJKNHE__CTOR_OFFSET))(this);
	}

	::System::Void FBFCCEICJKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_MIGMENJKNHE_FBFCCEICJKG_OFFSET))(this);
	}
};
