#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LHJIFCEDHAP_NDCJAJHGHCO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameLevelObjectRefConfig; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipArriveTo; }
namespace System { class String; }

#define GNEKFLLFOMO_CTOR_OFFSET UNITYSDK_OFFSET(0x15AFF3E0)
#define GNEKFLLFOMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AFF3F0)
#define GNEKFLLFOMO_DMOHPMAIMEE_OFFSET UNITYSDK_OFFSET(0x15AFF920)
#define GNEKFLLFOMO_INMFMFPMMOC_OFFSET UNITYSDK_OFFSET(0x15AFFBF0)
#define GNEKFLLFOMO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AFF490)
#define GNEKFLLFOMO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AFFBA0)
#define GNEKFLLFOMO_TICK_OFFSET UNITYSDK_OFFSET(0x15AFF430)

inline static constexpr unsigned int GNEKFLLFOMO_TypeDefinitionIndex = 53433;

	class GNEKFLLFOMO : public ::GELIALJDFBL
	{
	public:
		::System::String* IJMGEMMNNPI; // 0x18
		::LHJIFCEDHAP_NDCJAJHGHCO* MBOEDFCNCJF; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x30
		::RPG::GameCore::TravelShipArriveTo* OFKGLJOAMLD; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipArriveTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipArriveTo*))((::PBYTE)hIl2Cpp + GNEKFLLFOMO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEKFLLFOMO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNEKFLLFOMO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEKFLLFOMO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEKFLLFOMO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void INMFMFPMMOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNEKFLLFOMO_INMFMFPMMOC_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelCurveInstance* DMOHPMAIMEE(::RPG::GameCore::GameLevelObjectRefConfig* a1)
		{
			return ((::RPG::GameCore::LevelCurveInstance*(*)(::PVOID, ::RPG::GameCore::GameLevelObjectRefConfig*))((::PBYTE)hIl2Cpp + GNEKFLLFOMO_DMOHPMAIMEE_OFFSET))(this, a1);
		}

	};
