#pragma once
#include "unitysdk/unitysdk.h"
class CAALFIDBNMJ;
class HIKAAGHELPH;
class MLJMOGJMJEB;
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::UINavigation { class UINavigationArea; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace System { class Object; }
namespace UnityEngine { class CanvasGroup; }

#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE412940)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE412020)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0xE412780)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xE4128E0)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___BINDING_B__5_2_OFFSET UNITYSDK_OFFSET(0xE412980)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int UINavigationFocusSampleControl_TypeDefinitionIndex = 73471;

	class UINavigationFocusSampleControl
	{
	public:
		::RPG::UINavigation::UINavigationButton* _NavigationButton; // 0x70
		::RPG::UINavigation::UINavigationArea* _NavigationArea; // 0x78
		::UnityEngine::CanvasGroup* _CanvasGroup; // 0x80
		::RPG::Client::LocalizedText* _StatusText; // 0x88
		::RPG::Client::LocalizedText* _FocusCountText; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Boolean _OnBackPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__ONBACKPRESSED_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimEnd(::System::Object* a1, ::MLJMOGJMJEB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MLJMOGJMJEB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__ONENTRANCEANIMEND_OFFSET))(this, a1, a2);
		}

		::R3::Observable_1<::System::Single>* __Binding_b__5_2(::CAALFIDBNMJ* a1)
		{
			return ((::R3::Observable_1<::System::Single>*(*)(::PVOID, ::CAALFIDBNMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___BINDING_B__5_2_OFFSET))(this, a1);
		}

	};
}
