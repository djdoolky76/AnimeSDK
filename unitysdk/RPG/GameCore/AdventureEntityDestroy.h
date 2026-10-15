#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AdventureEntityDestroy; }

#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_CTOR_OFFSET UNITYSDK_OFFSET(0xE565FE0)
#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE565F30)
#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE565F80)
#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xE565FC0)
#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_INIT_OFFSET UNITYSDK_OFFSET(0xE565EE0)
#define RPG_GAMECORE_ADVENTUREENTITYDESTROY_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xE565FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureEntityDestroy_TypeDefinitionIndex = 56604;

	class AdventureEntityDestroy : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 _EntityID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureEntityDestroy* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AdventureEntityDestroy*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_INIT_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREENTITYDESTROY_SET_ENTITYID_OFFSET))(this, a1);
		}

	};
}
