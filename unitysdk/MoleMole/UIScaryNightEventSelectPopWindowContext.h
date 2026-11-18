#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UISCARYNIGHTEVENTSELECTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18256E40)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightEventSelectPopWindowContext_TypeDefinitionIndex = 38897;

	class UIScaryNightEventSelectPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnShown; // 0x28
		::System::Action_2<::System::Int32, ::System::Action*>* OnEventSelected; // 0x30
		::System::Int32 SecondEventId; // 0x38
		::System::Int32 FirstEventId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTEVENTSELECTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
