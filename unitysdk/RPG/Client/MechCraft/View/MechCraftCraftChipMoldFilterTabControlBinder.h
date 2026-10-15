#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class AnimatorButton; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xD600C20)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABCONTROLBINDER_GET_BTNROOT_OFFSET UNITYSDK_OFFSET(0xD6008F0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftChipMoldFilterTabControlBinder_TypeDefinitionIndex = 79861;

	class MechCraftCraftChipMoldFilterTabControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::AnimatorButton* get_BtnRoot()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPMOLDFILTERTABCONTROLBINDER_GET_BTNROOT_OFFSET))(this);
		}

	};
}
