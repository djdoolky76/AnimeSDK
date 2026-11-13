#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMFOPIJNNDI.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }

#define KPKDOJOAIDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1912B5B0)
#define KPKDOJOAIDJ_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1912B5C0)
#define KPKDOJOAIDJ_GET_TRACKINDEX_OFFSET UNITYSDK_OFFSET(0x1912B610)

inline static constexpr unsigned int KPKDOJOAIDJ_TypeDefinitionIndex = 57865;

	class KPKDOJOAIDJ : public ::HMFOPIJNNDI
	{
	public:
		::System::Int32 _TrackIndex_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + KPKDOJOAIDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDOJOAIDJ_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Int32 get_TrackIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPKDOJOAIDJ_GET_TRACKINDEX_OFFSET))(this);
		}

	};
