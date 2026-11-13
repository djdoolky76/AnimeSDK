#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KAACOOMAGLH;
class KADNINAMKGA;
class MOAKENFIBPE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define KAACOOMAGLH_CTOR_OFFSET UNITYSDK_OFFSET(0x19DA5400)
#define KAACOOMAGLH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19DA53B0)
#define KAACOOMAGLH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19DA5360)
#define KAACOOMAGLH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19DA52B0)

inline static constexpr unsigned int KAACOOMAGLH_TypeDefinitionIndex = 55245;

	class KAACOOMAGLH : public ::CMPGEAFHHDC
	{
	public:
		::KADNINAMKGA* GNHAPABLMDF; // 0x18
		::MOAKENFIBPE* NEACMLNOEIL; // 0x20
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x28
		::RPG::GameCore::GameEntity* DOCIPOEABOM; // 0x30
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x38
		::RPG::GameCore::FixPoint OLKJAKJOJLP; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAACOOMAGLH_CTOR_OFFSET))(this);
		}

		::KAACOOMAGLH* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3, ::KADNINAMKGA* a4, ::MOAKENFIBPE* a5, ::RPG::GameCore::FixPoint a6)
		{
			return ((::KAACOOMAGLH*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::KADNINAMKGA*, ::MOAKENFIBPE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KAACOOMAGLH_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAACOOMAGLH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + KAACOOMAGLH_GETEVENTTYPE_OFFSET))(this);
		}

	};
