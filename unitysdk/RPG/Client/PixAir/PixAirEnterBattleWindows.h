#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class IHACDDGPDIA;
class OBJANKHLNGO;
namespace RPG::Client::PixAir { class PixAirEnterBattleRewardItemControl; }
namespace RPG::Client::PixAir { class PixAirEnterBattleViewModel; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E352D70)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E353170)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E353220)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1E353430)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1E352E60)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONPIXAIRENTERBATTLEVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E353490)
#define RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E353370)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEnterBattleWindows_TypeDefinitionIndex = 82017;

	class PixAirEnterBattleWindows : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::PixAir::PixAirEnterBattleRewardItemControl* _RewardItem1; // 0x48
		::RPG::Client::PixAir::PixAirEnterBattleRewardItemControl* _RewardItem2; // 0x50
		::UnityEngine::UI::Button* _EnterBattleBtn; // 0x58
		::UnityEngine::UI::Button* _ExitBtn; // 0x60
		::UnityEngine::UI::Image* _EnemyCardImg; // 0x68
		::OBJANKHLNGO* _Messenger; // 0x70
		::System::Void _ctor(::RPG::Client::PixAir::PixAirEnterBattleViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEnterBattleViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnPixAirEnterBattleViewMessage(::IHACDDGPDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHACDDGPDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS__ONPIXAIRENTERBATTLEVIEWMESSAGE_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEnterBattleViewModel* get__ViewModel()
		{
			return ((::RPG::Client::PixAir::PixAirEnterBattleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRENTERBATTLEWINDOWS_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
