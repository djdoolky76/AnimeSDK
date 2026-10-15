#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CharacterModelScaleEventParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ScaleCharacterModel; }
namespace RPG::GameCore { class TaskContext; }

#define KOLOAICIFDM_BPDGMAOEAFD_OFFSET UNITYSDK_OFFSET(0xB5A1EA0)
#define KOLOAICIFDM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A1530)
#define KOLOAICIFDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5A1570)
#define KOLOAICIFDM_PPFICACCHKB_OFFSET UNITYSDK_OFFSET(0xB5A2040)

inline static constexpr unsigned int KOLOAICIFDM_TypeDefinitionIndex = 55331;

	class KOLOAICIFDM
	{
	public:
		::RPG::GameCore::CharacterModelScaleEventParam* GJMEBCMNPMK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ScaleCharacterModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ScaleCharacterModel*))((::PBYTE)hIl2Cpp + KOLOAICIFDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLOAICIFDM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Single BPDGMAOEAFD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KOLOAICIFDM_BPDGMAOEAFD_OFFSET))(this, a1);
		}

		::System::Void PPFICACCHKB(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KOLOAICIFDM_PPFICACCHKB_OFFSET))(this, a1, a2, a3);
		}

	};
