#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class PKJHLEOADGL;
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipMoldFilterTabControl; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftChipMoldFilterTabsControlBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_CKBIDFALIDG_OFFSET UNITYSDK_OFFSET(0xD601B90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD601D50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD600C70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD600CB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD5FA480)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftChipMoldFilterTabsControl_TypeDefinitionIndex = 79862;

	class MechCraftCraftChipMoldFilterTabsControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::PKJHLEOADGL* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCraftChipMoldFilterTabsControlBinder* _Binder; // 0x20
		::System::String* _AnimNameSwitchTab; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::View::MechCraftCraftChipMoldFilterTabControl*>* JPJPEAMHMHK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_CTOR_OFFSET))(this);
		}

		::PKJHLEOADGL* get_Content()
		{
			return ((::PKJHLEOADGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::PKJHLEOADGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKJHLEOADGL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::PKJHLEOADGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKJHLEOADGL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void CKBIDFALIDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABSCONTROL_CKBIDFALIDG_OFFSET))(this);
		}

	};
}
