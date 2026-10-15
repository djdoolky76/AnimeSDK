#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class MNJKHKCHKLI;
namespace RPG::Client::MechCraft::View { class MechCraftExamStartControl; }
namespace System { class Action; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xD63C280)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW_GET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD63C1C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW_SET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD63C270)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD63C4B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xD63C870)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD63C370)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamStartWindow_TypeDefinitionIndex = 79966;

	class MechCraftExamStartWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::System::Action* _OnClosed; // 0x48
		::RPG::Client::MechCraft::View::MechCraftExamStartControl* _Control; // 0x50
		::System::Void _ctor(::MNJKHKCHKLI* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MNJKHKCHKLI*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW_CTOR_OFFSET))(this, a1, a2);
		}

		::MNJKHKCHKLI* get__TypedDataContext()
		{
			return ((::MNJKHKCHKLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW_GET__TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set__TypedDataContext(::MNJKHKCHKLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNJKHKCHKLI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW_SET__TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

	};
}
