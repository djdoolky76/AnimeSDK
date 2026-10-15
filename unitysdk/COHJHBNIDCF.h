#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define COHJHBNIDCF_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB08C0)
#define COHJHBNIDCF_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xDCB0920)
#define COHJHBNIDCF_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xDCB08D0)

inline static constexpr unsigned int COHJHBNIDCF_TypeDefinitionIndex = 56664;

	class COHJHBNIDCF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x10
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + COHJHBNIDCF_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + COHJHBNIDCF_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + COHJHBNIDCF_GETEVENTTYPE_OFFSET))(this);
		}

	};
