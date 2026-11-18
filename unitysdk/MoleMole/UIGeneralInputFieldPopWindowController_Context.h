#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/PKAJCPBEMLH.h"
#include "unitysdk/System/Nullable_1.h"

class AJKEHBEHDPC;
class JDAHJPLCIFN;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIGENERALINPUTFIELDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17843A30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralInputFieldPopWindowController_Context_TypeDefinitionIndex = 66031;

	class UIGeneralInputFieldPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::AJKEHBEHDPC* StringLimitChecker; // 0x28
		::System::String* Text; // 0x30
		::System::Action_2<::System::Object*, ::System::String*>* OnCloseAction; // 0x38
		::System::String* BottomTipsText; // 0x40
		::System::String* OKButtonTextKey; // 0x48
		::JDAHJPLCIFN* TextValidate; // 0x50
		::System::String* TitleEnText; // 0x58
		::System::String* PlaceHolderText; // 0x60
		::System::String* TitleText; // 0x68
		::System::String* TipsText; // 0x70
		::System::String* CancelButtonTextKey; // 0x78
		::System::Nullable_1<::PKAJCPBEMLH> SensitiveTextType; // 0x80
		::System::Boolean EnableCancelButton; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALINPUTFIELDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
