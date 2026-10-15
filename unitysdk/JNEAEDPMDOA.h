#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class JNEAEDPMDOA;
namespace RPG::GameCore { class GameEntity; }

#define JNEAEDPMDOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB27BFE0)
#define JNEAEDPMDOA_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB27BF90)
#define JNEAEDPMDOA_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB27BF40)
#define JNEAEDPMDOA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB27BED0)

inline static constexpr unsigned int JNEAEDPMDOA_TypeDefinitionIndex = 54083;

	class JNEAEDPMDOA : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x18
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
		::RPG::GameCore::FixPoint IMKHIDEBGEB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEAEDPMDOA_CTOR_OFFSET))(this);
		}

		::JNEAEDPMDOA* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::JNEAEDPMDOA*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JNEAEDPMDOA_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEAEDPMDOA_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEAEDPMDOA_GETEVENTTYPE_OFFSET))(this);
		}

	};
