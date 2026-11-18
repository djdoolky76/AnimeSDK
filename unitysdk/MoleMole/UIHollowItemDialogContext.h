#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOGDMPPJHIG.h"
#include "unitysdk/KGAIJJGMCEC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIHOLLOWITEMDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A40A5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemDialogContext_TypeDefinitionIndex = 74999;

	class UIHollowItemDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* closeCallback; // 0x28
		::System::Action_2<::KGAIJJGMCEC, ::System::Int32>* chooseCallback; // 0x30
		::System::Int32 newItemID; // 0x38
		::BOGDMPPJHIG type; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
