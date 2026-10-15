#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipFollowTo; }

#define DBDOLJCEEGC_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD3290)
#define DBDOLJCEEGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFD32A0)
#define DBDOLJCEEGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFD3340)
#define DBDOLJCEEGC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDFD3410)
#define DBDOLJCEEGC_TICK_OFFSET UNITYSDK_OFFSET(0xDFD32E0)

inline static constexpr unsigned int DBDOLJCEEGC_TypeDefinitionIndex = 53435;

	class DBDOLJCEEGC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::TravelShipFollowTo* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipFollowTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipFollowTo*))((::PBYTE)hIl2Cpp + DBDOLJCEEGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOLJCEEGC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DBDOLJCEEGC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOLJCEEGC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOLJCEEGC_ONTASKRESET_OFFSET))(this);
		}

	};
