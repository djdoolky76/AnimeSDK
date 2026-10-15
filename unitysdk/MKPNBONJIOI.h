#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFMOKAKOEEJ.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define MKPNBONJIOI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A48C0)
#define MKPNBONJIOI_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xB9A48F0)
#define MKPNBONJIOI_ICOAJPNNGPA_OFFSET UNITYSDK_OFFSET(0xB9A49F0)

	class MKPNBONJIOI : public ::JFMOKAKOEEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + MKPNBONJIOI_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GNADABFLEFM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKPNBONJIOI_GNADABFLEFM_OFFSET))(this, a1);
		}

		::RPG::GameCore::ItemRarity ICOAJPNNGPA()
		{
			return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + MKPNBONJIOI_ICOAJPNNGPA_OFFSET))(this);
		}

	};
