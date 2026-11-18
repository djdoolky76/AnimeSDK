#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDLPJCBNIJE.h"
#include "unitysdk/MoleMole/BattleMapSubsystem_BattleCellInfo.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/FDIGBIBAMIJ.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigPointScoreCalculatePipe; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BATTLEMAPSUBSYSTEM_CALCULATESPAWNPOINTSCORE_OFFSET UNITYSDK_OFFSET(0x1650DEE0)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_DRAWINFO_OFFSET UNITYSDK_OFFSET(0x1650E0B0)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLINFOBYPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1650D650)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLINFOBYPOSITION_OFFSET UNITYSDK_OFFSET(0x1650D320)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLUNIQUEINDEX_OFFSET UNITYSDK_OFFSET(0x1650D090)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_GET_OFFSET UNITYSDK_OFFSET(0x1650D250)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_REGISTERSPAWNPOINTINFO_OFFSET UNITYSDK_OFFSET(0x1650D7D0)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_UNIQUEINDEX2POSITION_OFFSET UNITYSDK_OFFSET(0x1650D160)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM_UPDATEENTITYBOUNDS_OFFSET UNITYSDK_OFFSET(0x1650DA50)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1650E1D0)
#define MOLEMOLE_BATTLEMAPSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1650E0F0)

namespace MoleMole
{
	inline static constexpr unsigned int BattleMapSubsystem_TypeDefinitionIndex = 49645;

	class BattleMapSubsystem
	{
	public:
		static ::System::Boolean* StaticGet_EnableRandomByScore()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleMapSubsystem_TypeDefinitionIndex)->GetStaticField(0xE160);
		}
		static ::MoleMole::BattleMapSubsystem_BattleCellInfo* StaticGet_EmptyBattleCellInfo()
		{
			return (::MoleMole::BattleMapSubsystem_BattleCellInfo*)Il2CppClass::FromTypeDefinitionIndex(BattleMapSubsystem_TypeDefinitionIndex)->GetStaticField(0xE161);
		}
		static ::System::Boolean* StaticGet_EnableBattleMapSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleMapSubsystem_TypeDefinitionIndex)->GetStaticField(0xE164);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Object*>* _battleCellMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::DDLPJCBNIJE>* _battleMapEntityInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM__CCTOR_OFFSET))();
		}

		static ::FDIGBIBAMIJ GetCellUniqueIndex(::UnityEngine::Vector3 position)
		{
			return ((::FDIGBIBAMIJ(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLUNIQUEINDEX_OFFSET))(position);
		}

		static ::UnityEngine::Vector3 UniqueIndex2Position(::FDIGBIBAMIJ index)
		{
			return ((::UnityEngine::Vector3(*)(::FDIGBIBAMIJ))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_UNIQUEINDEX2POSITION_OFFSET))(index);
		}

		static ::MoleMole::BattleMapSubsystem* Get()
		{
			return ((::MoleMole::BattleMapSubsystem*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_GET_OFFSET))();
		}

		::MoleMole::BattleMapSubsystem_BattleCellInfo GetCellInfoByPosition(::UnityEngine::Vector3 position)
		{
			return ((::MoleMole::BattleMapSubsystem_BattleCellInfo(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLINFOBYPOSITION_OFFSET))(this, position);
		}

		::MoleMole::BattleMapSubsystem_BattleCellInfo GetCellInfoByPosition_1(::FDIGBIBAMIJ index)
		{
			return ((::MoleMole::BattleMapSubsystem_BattleCellInfo(*)(::PVOID, ::FDIGBIBAMIJ))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_GETCELLINFOBYPOSITION_1_OFFSET))(this, index);
		}

		::System::Void RegisterSpawnPointInfo(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_REGISTERSPAWNPOINTINFO_OFFSET))(this, position);
		}

		::System::Void UpdateEntityBounds(::MoleMole::EntityHandle entityHandle, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_UPDATEENTITYBOUNDS_OFFSET))(this, entityHandle, bounds);
		}

		::System::Int32 CalculateSpawnPointScore(::UnityEngine::Vector3 spawnPointPosition, ::MoleMole::ConfigPointScoreCalculatePipe* config)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::ConfigPointScoreCalculatePipe*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_CALCULATESPAWNPOINTSCORE_OFFSET))(this, spawnPointPosition, config);
		}

		::System::Void DrawInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_DRAWINFO_OFFSET))(this);
		}
	};
}
