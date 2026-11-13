#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define EIKBBAPBBAB_CTOR_OFFSET UNITYSDK_OFFSET(0x19A9DD30)
#define EIKBBAPBBAB_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19A9DD90)
#define EIKBBAPBBAB_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x19A9DD40)

inline static constexpr unsigned int EIKBBAPBBAB_TypeDefinitionIndex = 58060;

	class EIKBBAPBBAB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x10
		::System::UInt32 CDOHKOFPDCG; // 0x18
		::System::UInt32 EAAAEJLJDDE; // 0x1C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EIKBBAPBBAB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKBBAPBBAB_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + EIKBBAPBBAB_GETEVENTTYPE_OFFSET))(this);
		}

	};
