#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class BBAAOCLHKGH;
class OBJANKHLNGO;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::CatGod { class CatGodViewModel; }

#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xC93B810)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC93BBE0)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONCATGODINTERACTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0xC93C1E0)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xC93BB80)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC93B8F0)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__SUBSCRIBEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC93BAC0)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodGetShelfWindow_TypeDefinitionIndex = 81654;

	class CatGodGetShelfWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::AnimatorButton* _BtnStay; // 0x48
		::RPG::Client::AnimatorButton* _BtnGo; // 0x50
		::OBJANKHLNGO* _Messenger; // 0x58
		::System::Void _ctor(::RPG::Client::CatGod::CatGodViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CatGod::CatGodViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SubscribeMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__SUBSCRIBEMESSAGE_OFFSET))(this);
		}

		::System::Void _OnCatGodInteractionMessage(::BBAAOCLHKGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBAAOCLHKGH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW__ONCATGODINTERACTIONMESSAGE_OFFSET))(this, a1);
		}

	};
}
