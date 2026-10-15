#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class BNCLJLOOLBN;
namespace RPG::GameCore { class GameEntity; }

#define BNCLJLOOLBN_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC43E0)
#define BNCLJLOOLBN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBDC4390)
#define BNCLJLOOLBN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBDC4340)
#define BNCLJLOOLBN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBDC42D0)

inline static constexpr unsigned int BNCLJLOOLBN_TypeDefinitionIndex = 54075;

	class BNCLJLOOLBN : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x18
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x20
		::System::Boolean BPBNAOEHNFP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCLJLOOLBN_CTOR_OFFSET))(this);
		}

		::BNCLJLOOLBN* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::BNCLJLOOLBN*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNCLJLOOLBN_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCLJLOOLBN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + BNCLJLOOLBN_GETEVENTTYPE_OFFSET))(this);
		}

	};
