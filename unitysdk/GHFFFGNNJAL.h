#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipNavigateTo; }

#define GHFFFGNNJAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15A19720)
#define GHFFFGNNJAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A19730)
#define GHFFFGNNJAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A19840)
#define GHFFFGNNJAL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A19BB0)
#define GHFFFGNNJAL_TICK_OFFSET UNITYSDK_OFFSET(0x15A19770)

inline static constexpr unsigned int GHFFFGNNJAL_TypeDefinitionIndex = 53439;

	class GHFFFGNNJAL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TravelShipNavigateTo* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::UnityEngine::Vector3 MAJNABOELDH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipNavigateTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipNavigateTo*))((::PBYTE)hIl2Cpp + GHFFFGNNJAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFFFGNNJAL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHFFFGNNJAL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFFFGNNJAL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFFFGNNJAL_ONTASKRESET_OFFSET))(this);
		}

	};
