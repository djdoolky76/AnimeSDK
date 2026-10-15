#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class MLINDDMKFFA;
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::MechCraft::View { class MechCraftExamDetailControlBinder; }
namespace Sofa { class ShortCutHintControl; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD6391B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD636EC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_GET_SHORTCUTHINTCONTROL_OFFSET UNITYSDK_OFFSET(0xD6378E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_JHACPHLPIIM_OFFSET UNITYSDK_OFFSET(0xD638A90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD636F60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_KBPDCJEKDDL_OFFSET UNITYSDK_OFFSET(0xD6384D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_OOCFBGHNPNP_OFFSET UNITYSDK_OFFSET(0xD637EA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_POFLHGIPFPJ_OFFSET UNITYSDK_OFFSET(0xD638DF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD636F00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHASSISTANTS_B__12_0_OFFSET UNITYSDK_OFFSET(0xD6391D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHASSISTANTS_B__12_1_OFFSET UNITYSDK_OFFSET(0xD6391E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHREQUIREMENTINFOS_B__10_0_OFFSET UNITYSDK_OFFSET(0xD6391C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamDetailControl_TypeDefinitionIndex = 79957;

	class MechCraftExamDetailControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MLINDDMKFFA* LFGMLJCCPCH; // 0x18
		::System::Boolean AOJBOBBEJLB; // 0x20
		::System::Boolean CPFCDHPNKPN; // 0x21
		::System::Byte _padding0[0x6];
		::RPG::Client::MechCraft::View::MechCraftExamDetailControlBinder* _Binder; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_CTOR_OFFSET))(this);
		}

		::MLINDDMKFFA* get_Content()
		{
			return ((::MLINDDMKFFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::MLINDDMKFFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLINDDMKFFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::Sofa::ShortCutHintControl* get_ShortCutHintControl()
		{
			return ((::Sofa::ShortCutHintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_GET_SHORTCUTHINTCONTROL_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::MLINDDMKFFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLINDDMKFFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void OOCFBGHNPNP(::MLINDDMKFFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLINDDMKFFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_OOCFBGHNPNP_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* JHACPHLPIIM(::RPG::Client::StaticListView* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_JHACPHLPIIM_OFFSET))(this, a1, a2);
		}

		::System::Void KBPDCJEKDDL(::MLINDDMKFFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLINDDMKFFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_KBPDCJEKDDL_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* POFLHGIPFPJ(::System::Int32 a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL_POFLHGIPFPJ_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* __RefreshRequirementInfos_b__10_0(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHREQUIREMENTINFOS_B__10_0_OFFSET))(this, a1, a2, a3);
		}

		::SuperScrollView::LoopGridViewItem* __RefreshAssistants_b__12_0(::XLua::LuaTable* a1, ::SuperScrollView::LoopGridView* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHASSISTANTS_B__12_0_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void __RefreshAssistants_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMDETAILCONTROL___REFRESHASSISTANTS_B__12_1_OFFSET))(this);
		}

	};
}
