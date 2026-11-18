#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GODBIOEFPJB;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147E32A0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieguidePopularTeamPopWindowController_Context_TypeDefinitionIndex = 84931;

	class UINewbieguidePopularTeamPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GODBIOEFPJB* CurrentSelection; // 0x28
		::System::Action_1<::GODBIOEFPJB*>* OnApplyCallback; // 0x30
		::System::Collections::Generic::List_1<::GODBIOEFPJB*>* TeamSelections; // 0x38
		::System::Action_1<::GODBIOEFPJB*>* OnCloseCallback; // 0x40
		::System::Int32 ClaimedAvatarId; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPOPULARTEAMPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
