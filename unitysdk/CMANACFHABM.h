#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define CMANACFHABM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA1CF30)
#define CMANACFHABM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xDA1CF90)
#define CMANACFHABM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xDA1CF40)

inline static constexpr unsigned int CMANACFHABM_TypeDefinitionIndex = 56657;

	class CMANACFHABM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* FKMOKGOBEHJ; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CMANACFHABM_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMANACFHABM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CMANACFHABM_GETEVENTTYPE_OFFSET))(this);
		}

	};
