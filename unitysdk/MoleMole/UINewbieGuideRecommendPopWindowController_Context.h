#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GODBIOEFPJB;
namespace MoleMole { class UINewbieGuideRoleChoose02WidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWBIEGUIDERECOMMENDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D565A0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideRecommendPopWindowController_Context_TypeDefinitionIndex = 47570;

	class UINewbieGuideRecommendPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::GODBIOEFPJB*>* OnConfirmCallback; // 0x28
		::System::Collections::Generic::List_1<::GODBIOEFPJB*>* TeamSelections; // 0x30
		::GODBIOEFPJB* CurrentSelection; // 0x38
		::MoleMole::UINewbieGuideRoleChoose02WidgetController* roleWidget; // 0x40
		::System::Int32 ClaimedAvatarId; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDERECOMMENDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
