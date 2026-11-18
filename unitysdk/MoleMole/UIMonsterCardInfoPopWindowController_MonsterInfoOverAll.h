#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CALIGLPABNP;
namespace MoleMole { class UIMonsterCardInfoPopWindowController_MonsterInfoExt; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTERINFOOVERALL__CTOR_OFFSET UNITYSDK_OFFSET(0x14CA51E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_MonsterInfoOverAll_TypeDefinitionIndex = 86427;

	class UIMonsterCardInfoPopWindowController_MonsterInfoOverAll : public ::System::Object
	{
	public:
		::CALIGLPABNP* m_cfg; // 0x10
		::MoleMole::UIMonsterCardInfoPopWindowController_MonsterInfoExt* m_extInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTERINFOOVERALL__CTOR_OFFSET))(this);
		}
	};
}
