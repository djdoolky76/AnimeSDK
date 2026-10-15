#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastItemControl.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xCAC9010)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCAC86D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCAC8630)

namespace RPG::Client::ChenLingFes
{
	class ChenLingFesToastFeverAddControl : public ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl
	{
	public:
		::UnityEngine::Transform* _NodeEnd; // 0x58
		::UnityEngine::Animation* _Animation; // 0x60
		::UnityEngine::UI::Text* _TextValue; // 0x68
		// static const ::System::String* PREFAB_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTFEVERADDCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

	};
}
