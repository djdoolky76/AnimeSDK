#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMFOPIJNNDI.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }

#define DEANFFGMGOC_CTOR_OFFSET UNITYSDK_OFFSET(0xEE3AB50)
#define DEANFFGMGOC_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xEE3AB60)
#define DEANFFGMGOC_GET_TRACKINDEX_OFFSET UNITYSDK_OFFSET(0xEE3ABB0)

inline static constexpr unsigned int DEANFFGMGOC_TypeDefinitionIndex = 57864;

	class DEANFFGMGOC : public ::HMFOPIJNNDI
	{
	public:
		::System::Int32 _TrackIndex_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + DEANFFGMGOC_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + DEANFFGMGOC_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Int32 get_TrackIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEANFFGMGOC_GET_TRACKINDEX_OFFSET))(this);
		}

	};
