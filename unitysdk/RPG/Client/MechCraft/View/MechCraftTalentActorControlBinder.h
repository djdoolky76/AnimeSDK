#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE0F5330)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_IMGICON_OFFSET UNITYSDK_OFFSET(0xE0F5110)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_TEXTDESC_OFFSET UNITYSDK_OFFSET(0xE0F5270)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_TEXTNAME_OFFSET UNITYSDK_OFFSET(0xE0F51C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentActorControlBinder_TypeDefinitionIndex = 82840;

	class MechCraftTalentActorControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgIcon()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_IMGICON_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextName()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_TEXTNAME_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextDesc()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTACTORCONTROLBINDER_GET_TEXTDESC_OFFSET))(this);
		}

	};
}
