#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFMOKAKOEEJ.h"
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define FFJEHOKEMMC_CTOR_OFFSET UNITYSDK_OFFSET(0x157447B0)
#define FFJEHOKEMMC_FAPEGNBINEO_OFFSET UNITYSDK_OFFSET(0x157448E0)
#define FFJEHOKEMMC_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x157447E0)

	class FFJEHOKEMMC : public ::JFMOKAKOEEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + FFJEHOKEMMC_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GNADABFLEFM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFJEHOKEMMC_GNADABFLEFM_OFFSET))(this, a1);
		}

		::System::UInt32 FAPEGNBINEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJEHOKEMMC_FAPEGNBINEO_OFFSET))(this);
		}

	};
