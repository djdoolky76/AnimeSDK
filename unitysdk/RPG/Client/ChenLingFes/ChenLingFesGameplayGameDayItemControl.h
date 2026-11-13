#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayGameDayItemViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28A3D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E28A030)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E289E70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E28A2F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E28A1E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1E289DD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL__REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1E28A0E0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayGameDayItemControl_TypeDefinitionIndex = 84096;

	class ChenLingFesGameplayGameDayItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _NodeFinished; // 0x40
		::UnityEngine::Transform* _NodeCurrent; // 0x48
		::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel* _BindedViewModel; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL__REFRESHSTATE_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYGAMEDAYITEMCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
