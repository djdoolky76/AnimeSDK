#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconLiteControl; }

#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILBUFFSKILLITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD07CFC0)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILBUFFSKILLITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xD07CD00)
#define RPG_CLIENT_B51RACING_B51RACINGCARDETAILBUFFSKILLITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD07CC40)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarDetailBuffSkillItemControl_TypeDefinitionIndex = 84578;

	class B51RacingCarDetailBuffSkillItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconLiteControl* _Icon; // 0x40
		::RPG::Client::LocalizedText* _NameText; // 0x48
		::RPG::Client::LocalizedText* _DescText; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILBUFFSKILLITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILBUFFSKILLITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARDETAILBUFFSKILLITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

	};
}
