#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
class BKCLEAHHCOI;
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HIDPHKCBEFO_EFBHFNJPBNC_1_OFFSET UNITYSDK_OFFSET(0x15CE1990)
#define HIDPHKCBEFO_EFBHFNJPBNC_OFFSET UNITYSDK_OFFSET(0x15CE1900)
#define HIDPHKCBEFO_EOHONLNOIPG_OFFSET UNITYSDK_OFFSET(0x15CE1D70)
#define HIDPHKCBEFO_GCPAAGOPPFB_OFFSET UNITYSDK_OFFSET(0x15CE2020)
#define HIDPHKCBEFO_IFJNKKGMNEL_OFFSET UNITYSDK_OFFSET(0x15CE1F90)
#define HIDPHKCBEFO_LHECJGIONGN_OFFSET UNITYSDK_OFFSET(0x15CE1CD0)

	class HIDPHKCBEFO : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntity* EFBHFNJPBNC(::RPG::GameCore::EntityManager* a1, ::System::String* a2, ::RPG::GameCore::EntityType a3, ::UnityEngine::GameObject* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::System::String*, ::RPG::GameCore::EntityType, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HIDPHKCBEFO_EFBHFNJPBNC_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::GameEntity* EFBHFNJPBNC_1(::RPG::GameCore::EntityManager* a1, ::RPG::GameCore::LevelGraphConfig* a2, ::System::String* a3, ::RPG::GameCore::EntityType a4, ::UnityEngine::GameObject* a5, ::BKCLEAHHCOI* a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::EntityManager*, ::RPG::GameCore::LevelGraphConfig*, ::System::String*, ::RPG::GameCore::EntityType, ::UnityEngine::GameObject*, ::BKCLEAHHCOI*))((::PBYTE)hIl2Cpp + HIDPHKCBEFO_EFBHFNJPBNC_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 LHECJGIONGN(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + HIDPHKCBEFO_LHECJGIONGN_OFFSET))(a1);
		}

		static ::RPG::GameCore::TaskListTemplate* EOHONLNOIPG(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::TaskListTemplate*(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + HIDPHKCBEFO_EOHONLNOIPG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* IFJNKKGMNEL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HIDPHKCBEFO_IFJNKKGMNEL_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntityList* GCPAAGOPPFB(::RPG::GameCore::TargetEvaluator* a1, ::RPG::GameCore::GameWorld* a2, ::RPG::GameCore::AliveStateMask a3)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::GameWorld*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + HIDPHKCBEFO_GCPAAGOPPFB_OFFSET))(a1, a2, a3);
		}

	};
