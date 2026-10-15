#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FJIJGGEANOH;
namespace RPG::Client::MechCraft::View { class MechCraftOrderListControlBinder; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftOrderItemViewModel; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace SuperScrollView { class LoopGridViewItem; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD645C80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0xD645300)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD645360)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0xD6452C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_OONIHNALDIG_OFFSET UNITYSDK_OFFSET(0xD645910)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftOrderListControl_TypeDefinitionIndex = 80016;

	class MechCraftOrderListControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FJIJGGEANOH* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftOrderListControlBinder* _Binder; // 0x20
		::RPG::UINavigation::UINavigationZoneManager* _ZoneManager; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_CTOR_OFFSET))(this);
		}

		::FJIJGGEANOH* KCEDLPGDJLN()
		{
			return ((::FJIJGGEANOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::FJIJGGEANOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJIJGGEANOH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::FJIJGGEANOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJIJGGEANOH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopGridViewItem* OONIHNALDIG(::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel* a1)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftOrderItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTORDERLISTCONTROL_OONIHNALDIG_OFFSET))(this, a1);
		}

	};
}
