#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define HEDBINICPKK_CTOR_OFFSET UNITYSDK_OFFSET(0x16B8D3E0)
#define HEDBINICPKK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x16B8D440)
#define HEDBINICPKK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16B8D3F0)

inline static constexpr unsigned int HEDBINICPKK_TypeDefinitionIndex = 57902;

	class HEDBINICPKK : public ::System::Object
	{
	public:
		::System::String* DHMDAEKJENF; // 0x10
		::RPG::GameCore::GameEntity* KGMHHAKOMLO; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + HEDBINICPKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDBINICPKK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDBINICPKK_GETEVENTTYPE_OFFSET))(this);
		}

	};
