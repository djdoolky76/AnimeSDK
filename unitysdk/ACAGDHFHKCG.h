#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournTitanFloorType.h"
namespace RPG::GameCore { class LevelGlobalActionDelayChanged; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACAGDHFHKCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB110D90)
#define ACAGDHFHKCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1107C0)
#define ACAGDHFHKCG_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB110860)
#define ACAGDHFHKCG_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xB1107B0)
#define ACAGDHFHKCG_GET_DISABLETITANBLESS_OFFSET UNITYSDK_OFFSET(0xB110D70)
#define ACAGDHFHKCG_GET_TITANFLOORTYPE_OFFSET UNITYSDK_OFFSET(0xB110D50)
#define ACAGDHFHKCG_HDJNIGPCMGN_OFFSET UNITYSDK_OFFSET(0xB110CF0)
#define ACAGDHFHKCG_NALKDEOGKHE_OFFSET UNITYSDK_OFFSET(0xB110C30)
#define ACAGDHFHKCG_PCCMMCHLCCO_OFFSET UNITYSDK_OFFSET(0xB110900)
#define ACAGDHFHKCG_PEOBGIIJEHH_OFFSET UNITYSDK_OFFSET(0xB110A20)
#define ACAGDHFHKCG_PKDALFAHKIE_OFFSET UNITYSDK_OFFSET(0xB1109C0)
#define ACAGDHFHKCG_SET_DISABLETITANBLESS_OFFSET UNITYSDK_OFFSET(0xB110D80)
#define ACAGDHFHKCG_SET_TITANFLOORTYPE_OFFSET UNITYSDK_OFFSET(0xB110D60)

inline static constexpr unsigned int ACAGDHFHKCG_TypeDefinitionIndex = 56017;

	class ACAGDHFHKCG : public ::LHHEGNEBMLN
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _DisableTitanBless_k__BackingField; // 0x38
		::System::UInt32 NCMJALDNBOH; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint DCAMMMJCOHG; // 0x48
		::RPG::GameCore::RogueTournTitanFloorType _TitanFloorType_k__BackingField; // 0x50
		::System::UInt32 OJHOGLKAHGM; // 0x54
		::RPG::GameCore::FixPoint AHKOBNBJBCC; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_DISPOSE_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void PCCMMCHLCCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_PCCMMCHLCCO_OFFSET))(this);
		}

		::System::Void PKDALFAHKIE(::RPG::GameCore::RogueTournTitanFloorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournTitanFloorType))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_PKDALFAHKIE_OFFSET))(this, a1);
		}

		::System::Void PEOBGIIJEHH(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_PEOBGIIJEHH_OFFSET))(this, a1, a2);
		}

		::System::Boolean NALKDEOGKHE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_NALKDEOGKHE_OFFSET))(this, a1);
		}

		::System::Void HDJNIGPCMGN(::RPG::GameCore::LevelGlobalActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGlobalActionDelayChanged*))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_HDJNIGPCMGN_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournTitanFloorType get_TitanFloorType()
		{
			return ((::RPG::GameCore::RogueTournTitanFloorType(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_GET_TITANFLOORTYPE_OFFSET))(this);
		}

		::System::Void set_TitanFloorType(::RPG::GameCore::RogueTournTitanFloorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournTitanFloorType))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_SET_TITANFLOORTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DisableTitanBless()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_GET_DISABLETITANBLESS_OFFSET))(this);
		}

		::System::Void set_DisableTitanBless(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ACAGDHFHKCG_SET_DISABLETITANBLESS_OFFSET))(this, a1);
		}

	};
