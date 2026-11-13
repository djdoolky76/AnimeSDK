#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED1660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER_GET_IMGCURRENCY_OFFSET UNITYSDK_OFFSET(0x1DED14F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER_GET_TEXTNUM_OFFSET UNITYSDK_OFFSET(0x1DED15A0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCurrencyControlBinder_TypeDefinitionIndex = 82592;

	class MechCraftCurrencyControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgCurrency()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER_GET_IMGCURRENCY_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextNum()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCURRENCYCONTROLBINDER_GET_TEXTNUM_OFFSET))(this);
		}

	};
}
