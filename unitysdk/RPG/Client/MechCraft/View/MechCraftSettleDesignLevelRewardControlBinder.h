#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace SuperScrollView { class LoopGridView; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEDESIGNLEVELREWARDCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE0F18E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEDESIGNLEVELREWARDCONTROLBINDER_GET_SLIDER_OFFSET UNITYSDK_OFFSET(0xE0F16D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEDESIGNLEVELREWARDCONTROLBINDER_GET_TEXTDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0xE0F1620)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEDESIGNLEVELREWARDCONTROLBINDER_GET_UNLOCKCHIPGRIDLIST_OFFSET UNITYSDK_OFFSET(0xE0F1780)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEDESIGNLEVELREWARDCONTROLBINDER_GET_VALUECHANGEANIM_OFFSET UNITYSDK_OFFSET(0xE0F1830)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleDesignLevelRewardControlBinder_TypeDefinitionIndex = 82807;

	class MechCraftSettleDesignLevelRewardControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEDESIGNLEVELREWARDCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesignLevel()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEDESIGNLEVELREWARDCONTROLBINDER_GET_TEXTDESIGNLEVEL_OFFSET))(this);
		}

		::UnityEngine::UI::Slider* get_Slider()
		{
			return ((::UnityEngine::UI::Slider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEDESIGNLEVELREWARDCONTROLBINDER_GET_SLIDER_OFFSET))(this);
		}

		::SuperScrollView::LoopGridView* get_UnlockChipGridList()
		{
			return ((::SuperScrollView::LoopGridView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEDESIGNLEVELREWARDCONTROLBINDER_GET_UNLOCKCHIPGRIDLIST_OFFSET))(this);
		}

		::RPG::Client::UIValueChangeAnimation* get_ValueChangeAnim()
		{
			return ((::RPG::Client::UIValueChangeAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEDESIGNLEVELREWARDCONTROLBINDER_GET_VALUECHANGEANIM_OFFSET))(this);
		}

	};
}
