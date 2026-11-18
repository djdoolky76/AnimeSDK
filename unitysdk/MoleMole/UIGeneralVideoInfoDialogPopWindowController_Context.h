#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GPOCDKHHGFG;
namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENTTITLE_OFFSET UNITYSDK_OFFSET(0x19767D00)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x19767D10)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_DIALOGTITLE_OFFSET UNITYSDK_OFFSET(0x19767CF0)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_VIDEOPATH_OFFSET UNITYSDK_OFFSET(0x19767CE0)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19768080)
#define MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19767D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralVideoInfoDialogPopWindowController_Context_TypeDefinitionIndex = 81644;

	class UIGeneralVideoInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LJHFMILANJA_1<::System::String*>* _Content_k__BackingField; // 0x28
		::LJHFMILANJA_1<::System::String*>* _DialogTitle_k__BackingField; // 0x30
		::LJHFMILANJA_1<::System::String*>* _VideoPath_k__BackingField; // 0x38
		::GPOCDKHHGFG* _propertyAllocateHelper; // 0x40
		::LJHFMILANJA_1<::System::String*>* _ContentTitle_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* dialogTitle, ::System::String* contentTitle, ::System::String* content, ::System::String* videoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_1_OFFSET))(this, dialogTitle, contentTitle, content, videoPath);
		}

		::LJHFMILANJA_1<::System::String*>* get_VideoPath()
		{
			return ((::LJHFMILANJA_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_VIDEOPATH_OFFSET))(this);
		}

		::LJHFMILANJA_1<::System::String*>* get_DialogTitle()
		{
			return ((::LJHFMILANJA_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_DIALOGTITLE_OFFSET))(this);
		}

		::LJHFMILANJA_1<::System::String*>* get_ContentTitle()
		{
			return ((::LJHFMILANJA_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENTTITLE_OFFSET))(this);
		}

		::LJHFMILANJA_1<::System::String*>* get_Content()
		{
			return ((::LJHFMILANJA_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALVIDEOINFODIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_CONTENT_OFFSET))(this);
		}
	};
}
