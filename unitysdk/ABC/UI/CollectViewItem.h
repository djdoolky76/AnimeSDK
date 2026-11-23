#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/ABA09D021CD08194.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class PlatformItem; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define ABC_UI_COLLECTVIEWITEM_TRYGETCOMPONENTBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x1F756D0)

namespace ABC::UI
{
	inline static constexpr unsigned int CollectViewItem_TypeDefinitionIndex = 7898;

	class CollectViewItem : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::GameObject* View; // 0x18
		::System::Type* ViewType; // 0x20
		::UnityEngine::Component* Comp; // 0x28
		::System::Collections::Generic::List_1<::ABC::UI::PlatformItem*>* PlatformItems; // 0x30
		::System::Collections::Generic::Dictionary_2<::B39AAAD1233537D7::ABA09D021CD08194, ::UnityEngine::Component*>* _platViewMap; // 0x38

		::UnityEngine::Component* TryGetComponentByPlatform(::B39AAAD1233537D7::ABA09D021CD08194 E6F4A2DF23827909)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::B39AAAD1233537D7::ABA09D021CD08194))((::PBYTE)hIl2Cpp + ABC_UI_COLLECTVIEWITEM_TRYGETCOMPONENTBYPLATFORM_OFFSET))(this, E6F4A2DF23827909);
		}
	};
}
