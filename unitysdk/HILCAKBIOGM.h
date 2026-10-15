#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesItemUseType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class PlanetFesUseItemRow; }

#define HILCAKBIOGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF6680)
#define HILCAKBIOGM_DGDJPPGAHNA_OFFSET UNITYSDK_OFFSET(0x15CF65B0)
#define HILCAKBIOGM_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x15CF6600)
#define HILCAKBIOGM_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x15CF6560)
#define HILCAKBIOGM_IALMFPJLFMG_OFFSET UNITYSDK_OFFSET(0x15CF6510)
#define HILCAKBIOGM_NEIFJFDPBOP_OFFSET UNITYSDK_OFFSET(0x15CF6610)

	class HILCAKBIOGM : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x10
		::RPG::GameCore::PlanetFesUseItemRow* IBPBJBOKKMF; // 0x18
		::System::Void _ctor(::RPG::GameCore::PlanetFesUseItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesUseItemRow*))((::PBYTE)hIl2Cpp + HILCAKBIOGM_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::PlanetFesItemUseType IALMFPJLFMG()
		{
			return ((::RPG::GameCore::PlanetFesItemUseType(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCAKBIOGM_IALMFPJLFMG_OFFSET))(this);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCAKBIOGM_HIDEJDELEEB_OFFSET))(this);
		}

		::System::UInt32 DGDJPPGAHNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCAKBIOGM_DGDJPPGAHNA_OFFSET))(this);
		}

		::RPG::Client::ItemData* get_ItemData()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCAKBIOGM_GET_ITEMDATA_OFFSET))(this);
		}

		::System::UInt32 NEIFJFDPBOP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HILCAKBIOGM_NEIFJFDPBOP_OFFSET))(this);
		}

	};
