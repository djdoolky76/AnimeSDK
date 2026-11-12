#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class LocalizedText; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE0F3F50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROLBINDER_GET_TEXTNAME_OFFSET UNITYSDK_OFFSET(0xE0F3E90)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleProductSummaryControlBinder_TypeDefinitionIndex = 82823;

	class MechCraftSettleProductSummaryControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* get_TextName()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEPRODUCTSUMMARYCONTROLBINDER_GET_TEXTNAME_OFFSET))(this);
		}

	};
}
