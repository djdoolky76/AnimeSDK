#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class IALELFFHPGO;
class OBJANKHLNGO;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameAwardInfoControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesWeekSettleInfoViewModel; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC94AF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC95240)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC94DC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CC95630)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1CC955D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CC94BE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SETUPENDLESSMODE_OFFSET UNITYSDK_OFFSET(0x1CC953B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SETUPNORMALMODE_OFFSET UNITYSDK_OFFSET(0x1CC95490)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SUBSCRIBEMESSAGES_OFFSET UNITYSDK_OFFSET(0x1CC952F0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesWeekSettleInfoWindow_TypeDefinitionIndex = 84128;

	class ChenLingFesWeekSettleInfoWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::OBJANKHLNGO* _Messenger; // 0x48
		::RPG::Client::ChenLingFes::ChenLingFesGameAwardInfoControl* _AwardInfoControl; // 0x50
		::RPG::Client::UIStateCtrl* _ModeStateCtrl; // 0x58
		::RPG::Client::AnimatorButton* _BtnClose; // 0x60
		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SUBSCRIBEMESSAGES_OFFSET))(this);
		}

		::System::Void _OnCloseMessage(::IALELFFHPGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IALELFFHPGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONCLOSEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _SetupNormalMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SETUPNORMALMODE_OFFSET))(this);
		}

		::System::Void _SetupEndlessMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SETUPENDLESSMODE_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
