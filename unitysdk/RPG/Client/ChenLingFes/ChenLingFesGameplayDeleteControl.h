#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayDeleteViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2849B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E284320)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL_ISSCREENPOINTINDELETEAREA_OFFSET UNITYSDK_OFFSET(0x1E284780)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E283DE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E284630)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1E283D40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL__REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1E2845F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL__REFRESHVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E2843D0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayDeleteControl_TypeDefinitionIndex = 84087;

	class ChenLingFesGameplayDeleteControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::AnimatorButton* _BtnDelete; // 0x40
		::UnityEngine::UI::Text* _TextHint; // 0x48
		// static const ::System::String* _TextID_PC; // 0x0
		// static const ::System::String* _TextID_Gamepad; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL__REFRESHVISIBLE_OFFSET))(this);
		}

		::System::Void _RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL__REFRESHSTATE_OFFSET))(this);
		}

		::System::Boolean IsScreenPointInDeleteArea(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL_ISSCREENPOINTINDELETEAREA_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayDeleteViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayDeleteViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYDELETECONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
