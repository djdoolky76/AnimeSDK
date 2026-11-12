#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
class IDCOJJANCCK;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconLiteControl; }

#define RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD07A390)
#define RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xD079EB0)
#define RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL__GETWINDOWSERVICE_OFFSET UNITYSDK_OFFSET(0xD07A2E0)
#define RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD079DF0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingBuffDetailItemControl_TypeDefinitionIndex = 84577;

	class B51RacingBuffDetailItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconLiteControl* _Icon; // 0x40
		::RPG::Client::LocalizedText* _NameText; // 0x48
		::RPG::Client::LocalizedText* _DescText; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::IDCOJJANCCK* _GetWindowService()
		{
			return ((::IDCOJJANCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGBUFFDETAILITEMCONTROL__GETWINDOWSERVICE_OFFSET))(this);
		}

	};
}
