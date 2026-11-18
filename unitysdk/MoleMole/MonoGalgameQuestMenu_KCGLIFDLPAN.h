#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGalgameQuestMenu; }

#define MOLEMOLE_MONOGALGAMEQUESTMENU_KCGLIFDLPAN_HNNOAOBAHPC_OFFSET UNITYSDK_OFFSET(0x1193AEE0)
#define MOLEMOLE_MONOGALGAMEQUESTMENU_KCGLIFDLPAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1193AED0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGalgameQuestMenu_KCGLIFDLPAN_TypeDefinitionIndex = 86389;

	class MonoGalgameQuestMenu_KCGLIFDLPAN : public ::System::Object
	{
	public:
		::MoleMole::MonoGalgameQuestMenu* KLHPEBKNIFB; // 0x10
		::System::Int32 ABHBKFJKINO; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU_KCGLIFDLPAN__CTOR_OFFSET))(this);
		}

		::System::Void HNNOAOBAHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGALGAMEQUESTMENU_KCGLIFDLPAN_HNNOAOBAHPC_OFFSET))(this);
		}
	};
}
