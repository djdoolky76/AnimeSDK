#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerAidState.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }

#define AICDMFFGNIH_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9B320)

inline static constexpr unsigned int AICDMFFGNIH_TypeDefinitionIndex = 55774;

	class AICDMFFGNIH : public ::System::Object
	{
	public:
		::GELIALJDFBL* COCMPJEBMKP; // 0x10
		::GELIALJDFBL* IBCHKLLMADD; // 0x18
		::RPG::GameCore::GameEntity* DOCIPOEABOM; // 0x20
		::GELIALJDFBL* DLAKDMCEKNO; // 0x28
		::RPG::GameCore::GameEntity* NKKGKNFDPPH; // 0x30
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x38
		::RPG::GameCore::TriggerAidState BBCODJDANCH; // 0x40
		::System::Int32 KBAPBCNJHDB; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICDMFFGNIH_CTOR_OFFSET))(this);
		}

	};
