#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B119830)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B10BE40)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL__GETCARPARTIMAGE_OFFSET UNITYSDK_OFFSET(0x1B119750)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL__GETCARPARTSMOOTHMASKIMAGE_OFFSET UNITYSDK_OFFSET(0x1B1197C0)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B119580)
#define RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL__PARTTYPETOSTATENAME_OFFSET UNITYSDK_OFFSET(0x1B1196C0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarTargetPartIconControl_TypeDefinitionIndex = 84599;

	class B51RacingCarTargetPartIconControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _CarStateCtrl; // 0x40
		::UnityEngine::UI::Image* _HeadImage; // 0x48
		::UnityEngine::UI::Image* _BodyImage; // 0x50
		::UnityEngine::UI::Image* _WingImage; // 0x58
		::UnityEngine::UI::SmoothMask* _HeadSmoothMaskImage; // 0x60
		::UnityEngine::UI::SmoothMask* _BodySmoothMaskImage; // 0x68
		::UnityEngine::UI::SmoothMask* _WingSmoothMaskImage; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::UnityEngine::UI::Image* _GetCarPartImage(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID, ::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL__GETCARPARTIMAGE_OFFSET))(this, a1);
		}

		::UnityEngine::UI::SmoothMask* _GetCarPartSmoothMaskImage(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::UnityEngine::UI::SmoothMask*(*)(::PVOID, ::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL__GETCARPARTSMOOTHMASKIMAGE_OFFSET))(this, a1);
		}

		static ::System::String* _PartTypeToStateName(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARTARGETPARTICONCONTROL__PARTTYPETOSTATENAME_OFFSET))(a1);
		}

	};
}
