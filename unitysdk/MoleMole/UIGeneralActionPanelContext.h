#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

class GBPFFFGHDIM;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALACTIONPANELCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18373720)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActionPanelContext_TypeDefinitionIndex = 66723;

	class UIGeneralActionPanelContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Transform* LocateLD; // 0x28
		::UnityEngine::Transform* LocateRT; // 0x30
		::UnityEngine::Transform* LocateRD; // 0x38
		::UnityEngine::Transform* LocateLT; // 0x40
		::System::Collections::Generic::List_1<::GBPFFFGHDIM*>* ButtonContexts; // 0x48
		::UnityEngine::RectTransform* AutoAnchorCanvas; // 0x50
		::MoleMole::InputLogicEventType CloseEventType; // 0x58
		::System::Boolean AutoAnchor; // 0x5C
		::System::Byte _padding0[0x3];
		::UnityEngine::TextAnchor AnchorMode; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIONPANELCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
