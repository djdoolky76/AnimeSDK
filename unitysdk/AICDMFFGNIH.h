#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerAidState.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }

#define AICDMFFGNIH_CTOR_OFFSET UNITYSDK_OFFSET(0x19B40750)

inline static constexpr unsigned int AICDMFFGNIH_TypeDefinitionIndex = 56977;

	class AICDMFFGNIH : public ::System::Object
	{
	public:
		::GELIALJDFBL* COCMPJEBMKP; // 0x10
		::RPG::GameCore::GameEntity* NKKGKNFDPPH; // 0x18
		::GELIALJDFBL* IBCHKLLMADD; // 0x20
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x28
		::GELIALJDFBL* DLAKDMCEKNO; // 0x30
		::RPG::GameCore::GameEntity* DOCIPOEABOM; // 0x38
		::System::Int32 KBAPBCNJHDB; // 0x40
		::RPG::GameCore::TriggerAidState BBCODJDANCH; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICDMFFGNIH_CTOR_OFFSET))(this);
		}

	};
