#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconControl; }
namespace RPG::Client::B51Racing { class B51RacingCarTargetPartIconLiteControl; }
namespace RPG::Client::B51Racing { class LuaControllerHandle; }
namespace System { class String; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1284E0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0x1B128420)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_SETCHECKED_OFFSET UNITYSDK_OFFSET(0x1B1283C0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B128050)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__GETBRIDGEHANDLE_OFFSET UNITYSDK_OFFSET(0x1B127FB0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B127E40)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B127D60)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__SETUPCARICON_OFFSET UNITYSDK_OFFSET(0x1B1282F0)
#define RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__SETUPPARTTYPEICON_OFFSET UNITYSDK_OFFSET(0x1B128230)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYPartEquipStatusItemControl_TypeDefinitionIndex = 84562;

	class B51RacingDIYPartEquipStatusItemControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _EquipStateCtrl; // 0x40
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconLiteControl* _PartTypeIconControl; // 0x48
		::RPG::Client::LocalizedText* _PartTypeNameText; // 0x50
		::RPG::Client::B51Racing::B51RacingCarTargetPartIconControl* _CarPartIconControl; // 0x58
		::RPG::Client::AnimatorButton* _AnimatorButton; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::LuaControllerHandle* _GetBridgeHandle()
		{
			return ((::RPG::Client::B51Racing::LuaControllerHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__GETBRIDGEHANDLE_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_SETUPVIEW_OFFSET))(this);
		}

		::System::Void SetChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_SETCHECKED_OFFSET))(this, a1);
		}

		::System::Void OnItemClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL_ONITEMCLICK_OFFSET))(this);
		}

		::System::Void _SetupCarIcon(::RPG::GameCore::B51RacingPartType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__SETUPCARICON_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupPartTypeIcon(::RPG::GameCore::B51RacingPartType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::B51RacingPartType))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYPARTEQUIPSTATUSITEMCONTROL__SETUPPARTTYPEICON_OFFSET))(this, a1);
		}

	};
}
