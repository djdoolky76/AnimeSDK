#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingFes/ChenLingFesToastItemControl.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL_CCTOR_OFFSET UNITYSDK_OFFSET(0xCACA9A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xCACA970)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCACA520)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCACA420)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesToastScoreAddControl_TypeDefinitionIndex = 81361;

	class ChenLingFesToastScoreAddControl : public ::RPG::Client::ChenLingFes::ChenLingFesToastItemControl
	{
	public:
		::UnityEngine::UI::Text* _Text; // 0x58
		::UnityEngine::Animation* _Animation; // 0x60
		::UnityEngine::UI::ContentSizeFitter* _ContentSizeFitter; // 0x68
		::UnityEngine::UI::HorizontalLayoutGroup* _HorizontalLayoutGroup; // 0x70
		::UnityEngine::RectTransform* _ContentRect; // 0x78
		static ::UnityEngine::Color* StaticGet__NumInitialColor()
		{
			return (::UnityEngine::Color*)UnitySDK::FromName("RPG.Client.ChenLingFes", "ChenLingFesToastScoreAddControl")->GetStaticField(0x157F0);
		}

		// static const ::System::String* PREFAB_PATH; // 0x0
		// static const ::System::Object Duration; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL_CCTOR_OFFSET))();
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESTOASTSCOREADDCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

	};
}
