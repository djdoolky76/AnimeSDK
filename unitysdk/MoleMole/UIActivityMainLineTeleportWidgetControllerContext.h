#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYMAINLINETELEPORTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D41F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMainLineTeleportWidgetControllerContext_TypeDefinitionIndex = 75989;

	class UIActivityMainLineTeleportWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TextTitle; // 0x28
		::System::String* TextBtnText; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* ItemInfos; // 0x38
		::System::Action* OnClickBtn; // 0x40
		::System::Boolean BtnInteractable; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 AccessID; // 0x4C
		::System::Int32 BindActivityId; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINLINETELEPORTWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
