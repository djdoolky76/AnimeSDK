#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFMOKAKOEEJ.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define MKPNBONJIOI_CTOR_OFFSET UNITYSDK_OFFSET(0xC25F950)
#define MKPNBONJIOI_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xC25F980)
#define MKPNBONJIOI_ICOAJPNNGPA_OFFSET UNITYSDK_OFFSET(0xC25FA80)

inline static constexpr unsigned int MKPNBONJIOI_TypeDefinitionIndex = 67662;

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
