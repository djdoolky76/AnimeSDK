#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyTypeData; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE040B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE03FB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE03E00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDE03D40)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyTypeControl_TypeDefinitionIndex = 83139;

	class LimaoNewsOfficeSurveyTypeControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _Node; // 0x40
		::UnityEngine::UI::Image* _Icon; // 0x48
		::UnityEngine::UI::Text* _Text; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
