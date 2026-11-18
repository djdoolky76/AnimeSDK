#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEOOCBFJOOH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_GENERALDETAILCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14325410)
#define MOLEMOLE_GENERALDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x143253B0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralDetailContext_TypeDefinitionIndex = 92834;

	class GeneralDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* close_cb; // 0x28
		::System::String* cancel_text; // 0x30
		::System::Action* ok_cb; // 0x38
		::System::String* dialog_subTitle; // 0x40
		::System::String* ImagePath01; // 0x48
		::System::String* dialog_title; // 0x50
		::System::Action_2<::System::Boolean, ::System::Boolean>* close_cb_with_param; // 0x58
		::System::String* ImageNameTextKey02; // 0x60
		::System::String* ImageNameTextKey03; // 0x68
		::System::String* ImagePath03; // 0x70
		::System::String* content_title; // 0x78
		::System::String* ImagePath02; // 0x80
		::System::String* ok_text; // 0x88
		::System::Action* cancel_cb; // 0x90
		::System::String* ImageNameTextKey01; // 0x98
		::System::String* content_subTitle; // 0xA0
		::System::String* content; // 0xA8
		::CEOOCBFJOOH cancel_state; // 0xB0
		::System::Boolean isShowRichText; // 0xB4
		::System::Boolean show_close; // 0xB5
		::System::Byte _padding0[0x2];
		::CEOOCBFJOOH ok_state; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALDETAILCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* dialogTitle, ::System::String* contentTitle, ::System::String* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALDETAILCONTEXT__CTOR_1_OFFSET))(this, dialogTitle, contentTitle, content);
		}
	};
}
