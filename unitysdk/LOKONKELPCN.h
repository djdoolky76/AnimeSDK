#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define LOKONKELPCN_CTOR_OFFSET UNITYSDK_OFFSET(0xB80B5C0)
#define LOKONKELPCN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB80B620)
#define LOKONKELPCN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB80B5D0)

inline static constexpr unsigned int LOKONKELPCN_TypeDefinitionIndex = 56658;

	class LOKONKELPCN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KEHGBOEDKAB; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LOKONKELPCN_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKONKELPCN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKONKELPCN_GETEVENTTYPE_OFFSET))(this);
		}

	};
