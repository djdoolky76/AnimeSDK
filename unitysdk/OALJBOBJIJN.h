#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OALJBOBJIJN;
namespace RPG::GameCore { class GameEntity; }

#define OALJBOBJIJN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD24300)
#define OALJBOBJIJN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBD242B0)
#define OALJBOBJIJN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBD24260)
#define OALJBOBJIJN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBD241F0)

inline static constexpr unsigned int OALJBOBJIJN_TypeDefinitionIndex = 55977;

	class OALJBOBJIJN : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x18
		::RPG::GameCore::GameEntity* DOCIPOEABOM; // 0x20
		::RPG::GameCore::FixPoint KEINOBNBHDO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OALJBOBJIJN_CTOR_OFFSET))(this);
		}

		::OALJBOBJIJN* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::OALJBOBJIJN*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OALJBOBJIJN_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OALJBOBJIJN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + OALJBOBJIJN_GETEVENTTYPE_OFFSET))(this);
		}

	};
