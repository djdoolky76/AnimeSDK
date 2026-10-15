#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define FDAILGELHBA_CTOR_OFFSET UNITYSDK_OFFSET(0x156D0F70)
#define FDAILGELHBA_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x156D0FD0)
#define FDAILGELHBA_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x156D0F80)

inline static constexpr unsigned int FDAILGELHBA_TypeDefinitionIndex = 56663;

	class FDAILGELHBA : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FDAILGELHBA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDAILGELHBA_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + FDAILGELHBA_GETEVENTTYPE_OFFSET))(this);
		}

	};
