#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
class EKFMIDBJDIA;
class HGLDNPONBAM;
namespace RPG::GameCore { class BattleRogueMagicData_Scepter; }
namespace RPG::GameCore { class PVEGameStatistics; }

#define IKGIHLGAPJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1647F170)
#define IKGIHLGAPJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1647F030)
#define IKGIHLGAPJD_DKILLLKOOCB_OFFSET UNITYSDK_OFFSET(0x1647F0D0)
#define IKGIHLGAPJD_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1647EBA0)
#define IKGIHLGAPJD_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x1647E5C0)
#define IKGIHLGAPJD_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0x1647E5D0)
#define IKGIHLGAPJD_PCPLPHBALOJ_OFFSET UNITYSDK_OFFSET(0x1647E8A0)

inline static constexpr unsigned int IKGIHLGAPJD_TypeDefinitionIndex = 56014;

	class IKGIHLGAPJD : public ::LHHEGNEBMLN
	{
	public:
		::HGLDNPONBAM* GPKLLCNNDHF; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGIHLGAPJD_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGIHLGAPJD_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void OnMazeBuffBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGIHLGAPJD_ONMAZEBUFFBINDING_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + IKGIHLGAPJD_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKGIHLGAPJD_DISPOSE_OFFSET))(this);
		}

		::System::Void DKILLLKOOCB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + IKGIHLGAPJD_DKILLLKOOCB_OFFSET))(this, a1);
		}

		::System::Boolean PCPLPHBALOJ(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + IKGIHLGAPJD_PCPLPHBALOJ_OFFSET))(this, a1);
		}

	};
