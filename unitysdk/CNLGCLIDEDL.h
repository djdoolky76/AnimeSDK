#pragma once
#include "unitysdk/unitysdk.h"
class DEKDEPEBHNC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNextSkillCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNLGCLIDEDL_CTOR_OFFSET UNITYSDK_OFFSET(0xE5F16D0)
#define CNLGCLIDEDL_DNNPCEPCFFM_OFFSET UNITYSDK_OFFSET(0xE5F1A30)
#define CNLGCLIDEDL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xE5F1720)

inline static constexpr unsigned int CNLGCLIDEDL_TypeDefinitionIndex = 60463;

	class CNLGCLIDEDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchNextSkillCaster* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNextSkillCaster*))((::PBYTE)hIl2Cpp + CNLGCLIDEDL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CNLGCLIDEDL_EVALUATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean DNNPCEPCFFM(::RPG::GameCore::TurnBasedGameMode* a1, ::DEKDEPEBHNC* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::DEKDEPEBHNC*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CNLGCLIDEDL_DNNPCEPCFFM_OFFSET))(this, a1, a2, a3);
		}

	};
