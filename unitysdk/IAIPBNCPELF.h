#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdvSetDynamicValueByTargetDistance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define IAIPBNCPELF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E02FE0)
#define IAIPBNCPELF_LJADELJLPFO_OFFSET UNITYSDK_OFFSET(0x15E03640)
#define IAIPBNCPELF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E03010)

inline static constexpr unsigned int IAIPBNCPELF_TypeDefinitionIndex = 57887;

	class IAIPBNCPELF
	{
	public:
		::RPG::GameCore::StringHash IMCFADGAEIN; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetDynamicValueByTargetDistance*))((::PBYTE)hIl2Cpp + IAIPBNCPELF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIPBNCPELF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void LJADELJLPFO(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IAIPBNCPELF_LJADELJLPFO_OFFSET))(this, a1, a2, a3);
		}

	};
