#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class MonoClickOutsideDetect; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemDetailViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemPlaceGridRowControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemTagControl; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC884B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC869B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL_ONTICK_OFFSET UNITYSDK_OFFSET(0x1CC84A00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__CHECKANDPLAYVISIBLESWITCH_OFFSET UNITYSDK_OFFSET(0x1CC86670)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC86A60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__ONCLICKOUTSIDE_OFFSET UNITYSDK_OFFSET(0x1CC86850)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1CC870C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CC86440)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__REFRESHTEXT_OFFSET UNITYSDK_OFFSET(0x1CC873E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__REFRESHVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CC86D00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__SETUPGRIDS_OFFSET UNITYSDK_OFFSET(0x1CC876D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__SETUPRARITY_OFFSET UNITYSDK_OFFSET(0x1CC88160)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__SETUPTAGS_OFFSET UNITYSDK_OFFSET(0x1CC87C70)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemDetailControl_TypeDefinitionIndex = 84117;

	class ChenLingFesItemDetailControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* _TextName; // 0x40
		::UnityEngine::UI::Text* _TextDesc; // 0x48
		::UnityEngine::UI::Image* _ImageIcon; // 0x50
		::RPG::Client::PrefabLoadMeta* _GridRowLoadMeta; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemPlaceGridRowControl*>* _GridRows; // 0x60
		::RPG::Client::PrefabLoadMeta* _TagLoadMeta; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesItemTagControl*>* _Tags; // 0x70
		::RPG::Client::MonoClickOutsideDetect* _ClickOutsideDetect; // 0x78
		::UnityEngine::Animation* _AnimSwitch; // 0x80
		::RPG::Client::UIStateCtrl* _UIStateCtrl; // 0x88
		::System::Boolean _ShowVisible; // 0x90
		// static const ::System::String* PrefabPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL_ONTICK_OFFSET))(this);
		}

		::System::Void _OnClickOutside(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__ONCLICKOUTSIDE_OFFSET))(this, a1);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__REFRESHVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _CheckAndPlayVisibleSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__CHECKANDPLAYVISIBLESWITCH_OFFSET))(this);
		}

		::System::Void _RefreshText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__REFRESHTEXT_OFFSET))(this);
		}

		::System::Void _SetupRarity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__SETUPRARITY_OFFSET))(this);
		}

		::System::Void _SetupGrids()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__SETUPGRIDS_OFFSET))(this);
		}

		::System::Void _SetupTags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL__SETUPTAGS_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesItemDetailViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesItemDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDETAILCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
