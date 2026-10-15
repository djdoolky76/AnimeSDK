#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class BEIDFMBKNAK;
class FKMJKOLGEHJ;
class MAPIIGHJKEK;
class OBJANKHLNGO;
namespace RPG::Client::PixAir { class PixAirBattleViewModel; }
namespace RPG::Client::PixAir { class PixAirEquipInfoControl; }
namespace RPG::Client::PixAir { class PixAirJumpTextMessage; }
namespace RPG::Client::PixAir { class PixAirPlaneStatusControl; }
namespace RPG::Client::PixAir { class PixAirPlayerEquipOverviewControl; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xDB35860)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB35CF0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONBATTLECLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xDB36350)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDB35DA0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEQUIPINFOCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xDB36820)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEQUIPINFOREQUESTMESSAGE_OFFSET UNITYSDK_OFFSET(0xDB36600)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xDB362F0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xDB35950)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONJUMPTEXTMESSAGE_OFFSET UNITYSDK_OFFSET(0xDB363E0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__SPAWNJUMPTEXT_OFFSET UNITYSDK_OFFSET(0xDB36430)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__SUBSCRIBEMESSAGES_OFFSET UNITYSDK_OFFSET(0xDB36140)

namespace RPG::Client::PixAir
{
	class PixAirBattleWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::PixAir::PixAirPlaneStatusControl* _EnemyPlaneStatusControl; // 0x48
		::UnityEngine::UI::Button* _ExitBtn; // 0x50
		::RPG::Client::PixAir::PixAirPlayerEquipOverviewControl* _PlayerEquipOverviewControl; // 0x58
		::RPG::Client::PixAir::PixAirPlaneStatusControl* _PlayerPlaneStatusControl; // 0x60
		::RPG::Client::PixAir::PixAirPlayerEquipOverviewControl* _EnemyEquipOverviewControl; // 0x68
		::UnityEngine::Transform* _JumpTextRoot; // 0x70
		::RPG::Client::PixAir::PixAirEquipInfoControl* _EquipInfoControl; // 0x78
		::OBJANKHLNGO* _Messenger; // 0x80
		::System::Void _ctor(::RPG::Client::PixAir::PixAirBattleViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirBattleViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__SUBSCRIBEMESSAGES_OFFSET))(this);
		}

		::System::Void _OnBattleCloseMessage(::BEIDFMBKNAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEIDFMBKNAK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONBATTLECLOSEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnJumpTextMessage(::RPG::Client::PixAir::PixAirJumpTextMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONJUMPTEXTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _SpawnJumpText(::RPG::Client::PixAir::PixAirJumpTextMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__SPAWNJUMPTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnEquipInfoRequestMessage(::FKMJKOLGEHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKMJKOLGEHJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEQUIPINFOREQUESTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _OnEquipInfoCloseMessage(::MAPIIGHJKEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAPIIGHJKEK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW__ONEQUIPINFOCLOSEMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirBattleViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirBattleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
