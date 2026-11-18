#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class ANBNGBCILPB;
class KDFKNJCECCD;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A5AE70)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A5AF00)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A5AE10)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_PLAYINTERKNOTMESSAGEROWFADEINANIM_OFFSET UNITYSDK_OFFSET(0x19A5BA00)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x19A5B4E0)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19A5AF80)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A5BB20)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A5BA70)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A5BB60)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A5BBF0)
#define MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A5BC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMessageRowWidgetController_TypeDefinitionIndex = 43506;

	class UIInterKnotMessageRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::String** StaticGet_NFJIFDNPNGD()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMessageRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x4C450);
		}
		static ::System::String** StaticGet_FFADNMEAFMO()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotMessageRowWidgetController_TypeDefinitionIndex)->GetStaticField(0x4C458);
		}
		::KDFKNJCECCD* _view; // 0x2C8
		::System::String* ECLPKJNEANG; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* reply, ::System::Int32 floor)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, reply, floor);
		}

		::System::Void RefreshView_1(::ANBNGBCILPB* template_, ::System::Int32 customFloor, ::System::Boolean replyAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::ANBNGBCILPB*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, template_, customFloor, replyAnimation);
		}

		::System::Void PlayInterKnotMessageRowFadeInAnim(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER_PLAYINTERKNOTMESSAGEROWFADEINANIM_OFFSET))(this, callback);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMESSAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
