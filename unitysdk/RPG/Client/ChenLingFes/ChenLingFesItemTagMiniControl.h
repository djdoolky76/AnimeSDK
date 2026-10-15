#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::Client::ChenLingFes { class ChenLingFesItemTagViewModel; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xCAC1C60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAC1BB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAC1900)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCAC1860)

namespace RPG::Client::ChenLingFes
{
	class ChenLingFesItemTagMiniControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* _Text; // 0x40
		::UnityEngine::UI::Image* _Icon; // 0x48
		::RPG::Client::MonoUIColorSwitcher* _ColorSwitcher; // 0x50
		// static const ::System::String* PrefabPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesItemTagViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMTAGMINICONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
