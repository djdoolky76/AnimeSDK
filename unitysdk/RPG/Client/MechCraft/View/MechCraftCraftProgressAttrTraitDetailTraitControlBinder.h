#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILTRAITCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6FE190)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILTRAITCONTROLBINDER_GET_HINTISTARGET_OFFSET UNITYSDK_OFFSET(0x1C6FE020)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILTRAITCONTROLBINDER_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x1C6FE0D0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrTraitDetailTraitControlBinder_TypeDefinitionIndex = 82703;

	class MechCraftCraftProgressAttrTraitDetailTraitControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILTRAITCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HintIsTarget()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILTRAITCONTROLBINDER_GET_HINTISTARGET_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_Text()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTRAITDETAILTRAITCONTROLBINDER_GET_TEXT_OFFSET))(this);
		}

	};
}
