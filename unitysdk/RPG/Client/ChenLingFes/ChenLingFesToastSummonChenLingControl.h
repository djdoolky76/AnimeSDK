#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastItemControl.h"
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD42E6D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0xD42E620)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD42E470)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD42E3D0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastSummonChenLingControl_TypeDefinitionIndex = 84143;

	class ChenLingFesToastSummonChenLingControl : public ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl
	{
	public:
		::UnityEngine::RectTransform* _NodeRoot; // 0x58
		::UnityEngine::UI::Text* _Text; // 0x60
		// static const ::System::String* PREFAB_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Single GetHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSUMMONCHENLINGCONTROL_GETHEIGHT_OFFSET))(this);
		}

	};
}
