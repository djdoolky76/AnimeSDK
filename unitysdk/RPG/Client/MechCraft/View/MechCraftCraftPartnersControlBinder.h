#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client::MechCraft::View { class MechCraftTalentedPartnerHeadControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F4390)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_BTNDETAIL_OFFSET UNITYSDK_OFFSET(0x1C6F4180)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER1_OFFSET UNITYSDK_OFFSET(0x1C6F3EB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER2_OFFSET UNITYSDK_OFFSET(0x1C6F3F60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER3_OFFSET UNITYSDK_OFFSET(0x1C6F4010)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER4_OFFSET UNITYSDK_OFFSET(0x1C6F40C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftPartnersControlBinder_TypeDefinitionIndex = 82686;

	class MechCraftCraftPartnersControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnDetail()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_BTNDETAIL_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl* get_Partner1()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER1_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl* get_Partner2()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER2_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl* get_Partner3()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER3_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl* get_Partner4()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftTalentedPartnerHeadControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPARTNERSCONTROLBINDER_GET_PARTNER4_OFFSET))(this);
		}

	};
}
