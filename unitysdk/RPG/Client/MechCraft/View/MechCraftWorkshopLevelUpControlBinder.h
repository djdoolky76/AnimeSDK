#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoAnimationTrigger; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90B050)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_ANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0x1E90A970)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNBACK_OFFSET UNITYSDK_OFFSET(0x1E90AAD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNCONFIRM_OFFSET UNITYSDK_OFFSET(0x1E90AA20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNCONTINUE_OFFSET UNITYSDK_OFFSET(0x1E90AB80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0x1E90AC30)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftWorkshopLevelUpControlBinder_TypeDefinitionIndex = 82854;

	class MechCraftWorkshopLevelUpControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnBack()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNBACK_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnContinue()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNCONTINUE_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnConfirm()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_BTNCONFIRM_OFFSET))(this);
		}

		::RPG::Client::MonoAnimationTrigger* get_AnimTrigger()
		{
			return ((::RPG::Client::MonoAnimationTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROLBINDER_GET_ANIMTRIGGER_OFFSET))(this);
		}

	};
}
