#pragma once
#include "unitysdk/unitysdk.h"
class DEKDEPEBHNC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNextSkillCaster; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNLGCLIDEDL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA516C0)
#define CNLGCLIDEDL_DNNPCEPCFFM_OFFSET UNITYSDK_OFFSET(0xDA51A20)
#define CNLGCLIDEDL_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDA51710)

inline static constexpr unsigned int CNLGCLIDEDL_TypeDefinitionIndex = 59186;

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
