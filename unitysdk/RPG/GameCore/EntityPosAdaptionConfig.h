#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/RPG/GameCore/EntityPosAdaptionOption.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityPosAdaptionConfig; }

#define RPG_GAMECORE_ENTITYPOSADAPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D679A60)
#define RPG_GAMECORE_ENTITYPOSADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D679670)

namespace RPG::GameCore
{
	class EntityPosAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EntityPosAdaptionOption Option; // 0x10
		::System::Single GroundCheckUp; // 0x14
		::System::Single GroundCheckDown; // 0x18
		::System::Single NavMeshCheckRadius; // 0x1C
		::System::Single PathFindMaxLengthLimit; // 0x20
		::System::Single AvoidanceRadius; // 0x24
		::System::Single StepGroundCheckDist; // 0x28
		::System::Single StepGroundCheckHeight; // 0x2C
		::System::Single StepGroundCheckDown; // 0x30
		::System::Single NavMeshEdgeAvoidanceRadius; // 0x34
		::System::Single SmoothTime; // 0x38
		::RPG::GameCore::CharacterAdventureSomatoType NavMeshSomatoType; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYPOSADAPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityPosAdaptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityPosAdaptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYPOSADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
