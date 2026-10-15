#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipFollowTo; }

#define DBDOLJCEEGC_CTOR_OFFSET UNITYSDK_OFFSET(0xDFDCF60)
#define DBDOLJCEEGC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFDCF70)
#define DBDOLJCEEGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFDD010)
#define DBDOLJCEEGC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDFDD0E0)
#define DBDOLJCEEGC_TICK_OFFSET UNITYSDK_OFFSET(0xDFDCFB0)

	class DBDOLJCEEGC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TravelShipFollowTo* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
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
