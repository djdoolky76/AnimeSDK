#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class OBJANKHLNGO;
namespace RPG::Client::ChenLingFes { class ChenLingFesGamePhaseToastViewModel; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xCA84E80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCA85400)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCA85090)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xCA854B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCA84F70)

namespace RPG::Client::ChenLingFes
{
	class ChenLingFesGamePhaseToastWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::UnityEngine::UI::Text* _Text; // 0x48
		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
