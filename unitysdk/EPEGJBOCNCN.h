#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

#define EPEGJBOCNCN_CTOR_OFFSET UNITYSDK_OFFSET(0x155950A0)

inline static constexpr unsigned int EPEGJBOCNCN_TypeDefinitionIndex = 80580;

	class EPEGJBOCNCN : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnState PIGMOFHJCOG; // 0x10
		::RPG::GameCore::InsertActionType GCAFBMIADCL; // 0x14
		::System::Void _ctor(::RPG::GameCore::TurnState a1, ::RPG::GameCore::InsertActionType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::InsertActionType))((::PBYTE)hIl2Cpp + EPEGJBOCNCN_CTOR_OFFSET))(this, a1, a2);
		}

	};
