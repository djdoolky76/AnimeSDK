#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class MNJKHKCHKLI;
namespace RPG::Client::MechCraft::View { class MechCraftExamItemControl; }
namespace RPG::Client::MechCraft::View { class MechCraftExamStartControlBinder; }
namespace Sofa { class ShortCutHintControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD644970)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD6433D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_GET_SHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0xD6443B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD643470)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD643410)

namespace RPG::Client::MechCraft::View
{
	class MechCraftExamStartControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MNJKHKCHKLI* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftExamStartControlBinder* _Binder; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftExamItemControl*>* _Items; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_CTOR_OFFSET))(this);
		}

		::MNJKHKCHKLI* get_Content()
		{
			return ((::MNJKHKCHKLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::MNJKHKCHKLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNJKHKCHKLI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHint()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_GET_SHORTCUTHINT_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::MNJKHKCHKLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNJKHKCHKLI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
