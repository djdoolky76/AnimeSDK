#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

class BHNJJIFLGDB;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALDROPDOWNACTIONSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184CC750)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralDropDownActionsContext_TypeDefinitionIndex = 77823;

	class UIGeneralDropDownActionsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::RectTransform* AutoAnchorCanvas; // 0x28
		::UnityEngine::Transform* LocateLT; // 0x30
		::UnityEngine::Transform* LocateRD; // 0x38
		::UnityEngine::Transform* LocateLD; // 0x40
		::System::Collections::Generic::IReadOnlyList_1<::BHNJJIFLGDB*>* ButtonContexts; // 0x48
		::UnityEngine::Transform* LocateRT; // 0x50
		::MoleMole::InputLogicEventType CloseEventType; // 0x58
		::UnityEngine::TextAnchor AnchorMode; // 0x5C
		::System::Boolean AutoAnchor; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALDROPDOWNACTIONSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
