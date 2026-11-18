#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HPPBDGPEHKI;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISELECTPROTOCOLDATACONTEXT_ADDPROTOCOLROWITEM_OFFSET UNITYSDK_OFFSET(0x19C83D60)
#define MOLEMOLE_UISELECTPROTOCOLDATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C83E30)

namespace MoleMole
{
	inline static constexpr unsigned int UISelectProtocolDataContext_TypeDefinitionIndex = 83718;

	class UISelectProtocolDataContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::HPPBDGPEHKI*>* protocolList; // 0x28
		::GBJMDNJNIBO switchState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTPROTOCOLDATACONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void AddProtocolRowItem(::System::String* elementText, ::System::Action* callbackAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISELECTPROTOCOLDATACONTEXT_ADDPROTOCOLROWITEM_OFFSET))(this, elementText, callbackAction);
		}
	};
}
