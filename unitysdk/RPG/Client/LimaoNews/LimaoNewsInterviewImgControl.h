#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWIMGCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF06500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWIMGCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CF06430)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWIMGCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CF063B0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewImgControl_TypeDefinitionIndex = 83156;

	class LimaoNewsInterviewImgControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* _Image; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWIMGCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWIMGCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWIMGCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

	};
}
