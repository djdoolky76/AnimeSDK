#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearManager; }

#define BCPPGEJPIKM_CTOR_OFFSET UNITYSDK_OFFSET(0x19D87840)
#define BCPPGEJPIKM_GET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0x19D87820)
#define BCPPGEJPIKM_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0x19D877D0)
#define BCPPGEJPIKM_SET_SORTLISTS_OFFSET UNITYSDK_OFFSET(0x19D87830)

inline static constexpr unsigned int BCPPGEJPIKM_TypeDefinitionIndex = 54739;

	class BCPPGEJPIKM : public ::System::Object
	{
	public:
		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* _SortLists_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPPGEJPIKM_CTOR_OFFSET))(this);
		}

		::System::Void LNGKNPJIOML(::RPG::GameCore::EvolveBuildGearManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + BCPPGEJPIKM_LNGKNPJIOML_OFFSET))(this, a1);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortLists()
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPPGEJPIKM_GET_SORTLISTS_OFFSET))(this);
		}

		::System::Void set_SortLists(::RPG::Client::SortedEvolveBuildGearEquipInfoLists* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SortedEvolveBuildGearEquipInfoLists*))((::PBYTE)hIl2Cpp + BCPPGEJPIKM_SET_SORTLISTS_OFFSET))(this, a1);
		}

	};
