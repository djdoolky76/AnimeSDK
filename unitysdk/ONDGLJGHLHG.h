#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipResetState; }

#define ONDGLJGHLHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF47E70)
#define ONDGLJGHLHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF47E80)
#define ONDGLJGHLHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF47F20)
#define ONDGLJGHLHG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF47FA0)
#define ONDGLJGHLHG_TICK_OFFSET UNITYSDK_OFFSET(0xBF47EC0)

inline static constexpr unsigned int ONDGLJGHLHG_TypeDefinitionIndex = 53441;

	class ONDGLJGHLHG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::TravelShipResetState* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipResetState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipResetState*))((::PBYTE)hIl2Cpp + ONDGLJGHLHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDGLJGHLHG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ONDGLJGHLHG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDGLJGHLHG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDGLJGHLHG_ONTASKRESET_OFFSET))(this);
		}

	};
