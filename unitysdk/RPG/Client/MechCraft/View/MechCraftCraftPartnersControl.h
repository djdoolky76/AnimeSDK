#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class DBHGOLFACFL;
namespace RPG::Client::MechCraft::View { class MechCraftCraftPartnersControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentedPartnerHeadControl; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD626780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD625710)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD625750)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_LNDAAFAKJIK_OFFSET UNITYSDK_OFFSET(0xD625EF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD610BF0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftCraftPartnersControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DBHGOLFACFL* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftCraftPartnersControlBinder* _Binder; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*>* BMCFBDNOCFE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_CTOR_OFFSET))(this);
		}

		::DBHGOLFACFL* get_Content()
		{
			return ((::DBHGOLFACFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::DBHGOLFACFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBHGOLFACFL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*>* LNDAAFAKJIK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_LNDAAFAKJIK_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ(::DBHGOLFACFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBHGOLFACFL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
