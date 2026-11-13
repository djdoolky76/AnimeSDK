#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B119970)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B103430)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B119860)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL__PARTTYPETOSTATENAME_OFFSET UNITYSDK_OFFSET(0x1B1198E0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarTargetPartIconLiteControl_TypeDefinitionIndex = 84600;

	class B51RacingCarTargetPartIconLiteControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _CarStateCtrl; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL_SETUPVIEW_OFFSET))(this);
		}

		static ::System::String* _PartTypeToStateName(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONLITECONTROL__PARTTYPETOSTATENAME_OFFSET))(a1);
		}

	};
}
