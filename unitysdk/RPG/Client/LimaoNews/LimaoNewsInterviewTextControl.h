#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTEXTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xDDE7140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTEXTCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDDE7060)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTEXTCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDDE6FE0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewTextControl_TypeDefinitionIndex = 83160;

	class LimaoNewsInterviewTextControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Text* _Text; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTEXTCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTEXTCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWTEXTCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

	};
}
