#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/STSpecialEventType.h"
class PEGDAGNICHI;
namespace RPG::GameCore { class GameEntity; }

#define PEGDAGNICHI_CLEAR_OFFSET UNITYSDK_OFFSET(0xC03CAF0)
#define PEGDAGNICHI_CTOR_OFFSET UNITYSDK_OFFSET(0xC03CC00)
#define PEGDAGNICHI_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xC03CBB0)
#define PEGDAGNICHI_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xC03CB60)
#define PEGDAGNICHI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC03CA80)

inline static constexpr unsigned int PEGDAGNICHI_TypeDefinitionIndex = 56628;

	class PEGDAGNICHI : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* GIHMOMMHCKC; // 0x18
		::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x20
		::RPG::GameCore::STSpecialEventType LHNFFCMKLCE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDAGNICHI_CTOR_OFFSET))(this);
		}

		::PEGDAGNICHI* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::STSpecialEventType a3)
		{
			return ((::PEGDAGNICHI*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::STSpecialEventType))((::PBYTE)hIl2Cpp + PEGDAGNICHI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDAGNICHI_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDAGNICHI_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGDAGNICHI_GETEVENTTYPE_OFFSET))(this);
		}

	};
