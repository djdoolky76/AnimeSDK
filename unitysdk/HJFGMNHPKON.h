#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/RtBattleUltraInsertPhase.h"
class HJFGMNHPKON;

#define HJFGMNHPKON_CTOR_OFFSET UNITYSDK_OFFSET(0x182105C0)
#define HJFGMNHPKON_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18210570)
#define HJFGMNHPKON_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18210520)
#define HJFGMNHPKON_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x182104D0)

inline static constexpr unsigned int HJFGMNHPKON_TypeDefinitionIndex = 55380;

	class HJFGMNHPKON : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::RtBattleUltraInsertPhase COEPLOMIKJG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFGMNHPKON_CTOR_OFFSET))(this);
		}

		::HJFGMNHPKON* KPJGDHLENIP(::RPG::GameCore::RtBattleUltraInsertPhase a1)
		{
			return ((::HJFGMNHPKON*(*)(::PVOID, ::RPG::GameCore::RtBattleUltraInsertPhase))((::PBYTE)hIl2Cpp + HJFGMNHPKON_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFGMNHPKON_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFGMNHPKON_GETEVENTTYPE_OFFSET))(this);
		}

	};
