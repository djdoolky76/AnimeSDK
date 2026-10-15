#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class CELAKJDDDOH;
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::MechCraft::View { class MechCraftOrderMainTargetControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderMainTargetViewModel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_BOPPBLKOJEK_OFFSET UNITYSDK_OFFSET(0xD64F0F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD64F4C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_EHFDFKJGFBB_OFFSET UNITYSDK_OFFSET(0xD64F090)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD64EBD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_IOBAGLHFPKN_OFFSET UNITYSDK_OFFSET(0xD64F360)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_JFAKEMMEMHJ_OFFSET UNITYSDK_OFFSET(0xD64EDB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD64EEE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_MOIOMPLMGPF_OFFSET UNITYSDK_OFFSET(0xD64EC90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD64EC10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL___REFRESH_B__9_0_OFFSET UNITYSDK_OFFSET(0xD64F4D0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftOrderMainTargetControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* LFGMLJCCPCH; // 0x18
		::System::Boolean PHBCJPCHDHC; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::Client::MechCraft::View::MechCraftOrderMainTargetControlBinder* _Binder; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void JFAKEMMEMHJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_JFAKEMMEMHJ_OFFSET))(this, a1);
		}

		::System::Void MOIOMPLMGPF(::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_MOIOMPLMGPF_OFFSET))(this, a1);
		}

		::System::Void EHFDFKJGFBB(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_EHFDFKJGFBB_OFFSET))(this, a1, a2);
		}

		::System::Void KANMCJHEFJJ(::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderMainTargetViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void BOPPBLKOJEK(::System::Collections::Generic::IReadOnlyList_1<::CELAKJDDDOH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::CELAKJDDDOH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_BOPPBLKOJEK_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* IOBAGLHFPKN(::RPG::Client::StaticListView* a1, ::CELAKJDDDOH* a2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::RPG::Client::StaticListView*, ::CELAKJDDDOH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL_IOBAGLHFPKN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::StaticListViewItem* __Refresh_b__9_0(::XLua::LuaTable* a1, ::RPG::Client::StaticListView* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERMAINTARGETCONTROL___REFRESH_B__9_0_OFFSET))(this, a1, a2, a3);
		}

	};
}
