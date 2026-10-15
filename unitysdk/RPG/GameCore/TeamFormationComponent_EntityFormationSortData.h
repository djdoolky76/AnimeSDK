#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ENTITYFORMATIONSORTDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xF65C0)

namespace RPG::GameCore
{
	struct alignas(8) TeamFormationComponent_EntityFormationSortData
	{
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean Active; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 FormationIndex; // 0x1C
		::System::UInt32 RemoveVersion; // 0x20
		/*
		::System::Int32 CompareTo(::RPG::GameCore::TeamFormationComponent_EntityFormationSortData a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TeamFormationComponent_EntityFormationSortData))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ENTITYFORMATIONSORTDATA_COMPARETO_OFFSET))(this, a1);
		}
		*/

	};
}
