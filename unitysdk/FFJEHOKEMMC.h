#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFMOKAKOEEJ.h"
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define FFJEHOKEMMC_CTOR_OFFSET UNITYSDK_OFFSET(0x15738EE0)
#define FFJEHOKEMMC_FAPEGNBINEO_OFFSET UNITYSDK_OFFSET(0x15739010)
#define FFJEHOKEMMC_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x15738F10)

inline static constexpr unsigned int FFJEHOKEMMC_TypeDefinitionIndex = 65738;

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
