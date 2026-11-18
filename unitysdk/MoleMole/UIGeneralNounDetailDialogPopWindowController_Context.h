#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/UI/Extension/LinkClickInfo.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALNOUNDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_DEFAULTLINKID_OFFSET UNITYSDK_OFFSET(0x199BB650)
#define MOLEMOLE_UIGENERALNOUNDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_FIRSTLINKID_OFFSET UNITYSDK_OFFSET(0x199BB6F0)
#define MOLEMOLE_UIGENERALNOUNDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199BB7A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNounDetailDialogPopWindowController_Context_TypeDefinitionIndex = 77961;

	class UIGeneralNounDetailDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::UnityEngine::UI::Extension::LinkClickInfo> DefaultClickInfo; // 0x28
		::System::Byte _padding0[0x20];
		::System::Collections::Generic::List_1<::System::String*>* TermTextList; // 0x50
		::System::Int32 DefaultTextIndex; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNOUNDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::String* get_DefaultLinkId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNOUNDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_DEFAULTLINKID_OFFSET))(this);
		}

		::System::String* get_FirstLinkId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNOUNDETAILDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_FIRSTLINKID_OFFSET))(this);
		}
	};
}
