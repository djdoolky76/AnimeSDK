#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KADNINAMKGA;
class MOAKENFIBPE;
class OKKELKCLAGE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define OKKELKCLAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBEDC1E0)
#define OKKELKCLAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBEDC190)
#define OKKELKCLAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBEDC140)
#define OKKELKCLAGE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBEDC090)

	class OKKELKCLAGE : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x18
		::KADNINAMKGA* GNHAPABLMDF; // 0x20
		::RPG::GameCore::GameEntity* DOCIPOEABOM; // 0x28
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x30
		::MOAKENFIBPE* NEACMLNOEIL; // 0x38
		::RPG::GameCore::FixPoint OLKJAKJOJLP; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKELKCLAGE_CTOR_OFFSET))(this);
		}

		::OKKELKCLAGE* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3, ::KADNINAMKGA* a4, ::MOAKENFIBPE* a5, ::RPG::GameCore::FixPoint a6)
		{
			return ((::OKKELKCLAGE*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::KADNINAMKGA*, ::MOAKENFIBPE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OKKELKCLAGE_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKELKCLAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKELKCLAGE_GETEVENTTYPE_OFFSET))(this);
		}

	};
