#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class RubikCubePuzzleBlockData; }
namespace RPG::Client::Prop { class RubikCubePuzzleBrick; }
namespace RPG::Client::Prop { class RubikCubePuzzleBrickData; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define BDEIDAMFDBN_CTOR_OFFSET UNITYSDK_OFFSET(0x162F3FC0)
#define BDEIDAMFDBN_PPEGOIODAKI_1_OFFSET UNITYSDK_OFFSET(0x162F3E90)
#define BDEIDAMFDBN_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x162F3D10)

inline static constexpr unsigned int BDEIDAMFDBN_TypeDefinitionIndex = 78832;

	class BDEIDAMFDBN : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* DECBKALIAHF; // 0x10
		::RPG::Client::Prop::RubikCubePuzzleBrick* IDMPPJCHPAM; // 0x18
		::System::Int32 DBBKDKFEKPP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEIDAMFDBN_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::UnityEngine::GameObject* a1, ::RPG::Client::Prop::RubikCubePuzzleBlockData* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::Client::Prop::RubikCubePuzzleCube* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Prop::RubikCubePuzzleBlockData*, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + BDEIDAMFDBN_PPEGOIODAKI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PPEGOIODAKI_1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::RPG::Client::Prop::RubikCubePuzzleBrickData* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::Client::Prop::RubikCubePuzzleBrickData*, ::System::Int32))((::PBYTE)hIl2Cpp + BDEIDAMFDBN_PPEGOIODAKI_1_OFFSET))(this, a1, a2, a3, a4);
		}

	};
