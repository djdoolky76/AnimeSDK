#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define AIPFOJGCGLH_CTOR_OFFSET UNITYSDK_OFFSET(0x12CAA6E0)
#define AIPFOJGCGLH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x12CAA740)
#define AIPFOJGCGLH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x12CAA6F0)

inline static constexpr unsigned int AIPFOJGCGLH_TypeDefinitionIndex = 56666;

	class AIPFOJGCGLH : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* HACANPHIJGN; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AIPFOJGCGLH_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFOJGCGLH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPFOJGCGLH_GETEVENTTYPE_OFFSET))(this);
		}

	};
