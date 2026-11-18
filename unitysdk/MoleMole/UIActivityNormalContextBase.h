#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KHOGENJCAEJ;
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x19B94030)
#define MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B940F0)
#define MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x19B94150)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityNormalContextBase_TypeDefinitionIndex = 62400;

	class UIActivityNormalContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KHOGENJCAEJ* widgetPageData; // 0x28
		::System::Action* OnCloseAction; // 0x30
		::System::Int32 ActivityID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE__CTOR_OFFSET))(this);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNORMALCONTEXTBASE___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
