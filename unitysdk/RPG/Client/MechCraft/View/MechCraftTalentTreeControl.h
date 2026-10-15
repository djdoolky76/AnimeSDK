#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FOHGGGFAGNK;
namespace RPG::Client::MechCraft::View { class MechCraftTalentActorIconControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPathControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentPointPhaseControl; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentTreeControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_COIPJIENKPJ_OFFSET UNITYSDK_OFFSET(0xD66FB80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD670690)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD66DE00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_GET_FADEINPROTECTSECONDS_OFFSET UNITYSDK_OFFSET(0xD66F3C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_HCIGJHIHGFA_OFFSET UNITYSDK_OFFSET(0xD66FDA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_IAOEPEKCFJB_OFFSET UNITYSDK_OFFSET(0xD66F7A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_ILFPGBKFCPA_OFFSET UNITYSDK_OFFSET(0xD670280)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD66DEA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_LDIBNACEKGI_OFFSET UNITYSDK_OFFSET(0xD670450)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD66DE40)

namespace RPG::Client::MechCraft::View
{
	class MechCraftTalentTreeControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FOHGGGFAGNK* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftTalentTreeControlBinder* _Binder; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftTalentPathControl*>* _PathControls; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftTalentActorIconControl*>* _ActorControls; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftTalentPointPhaseControl*>* _PhaseControls; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_CTOR_OFFSET))(this);
		}

		::FOHGGGFAGNK* get_Content()
		{
			return ((::FOHGGGFAGNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::FOHGGGFAGNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOHGGGFAGNK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Single get_FadeInProtectSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_GET_FADEINPROTECTSECONDS_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::FOHGGGFAGNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOHGGGFAGNK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void COIPJIENKPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_COIPJIENKPJ_OFFSET))(this);
		}

		::System::Void IAOEPEKCFJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_IAOEPEKCFJB_OFFSET))(this);
		}

		::System::Void HCIGJHIHGFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_HCIGJHIHGFA_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentPointControl* ILFPGBKFCPA(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentPointControl*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_ILFPGBKFCPA_OFFSET))(this, a1);
		}

		::System::Void LDIBNACEKGI(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTTREECONTROL_LDIBNACEKGI_OFFSET))(this, a1);
		}

	};
}
