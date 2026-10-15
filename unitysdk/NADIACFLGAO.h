#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvTeamLeader; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NADIACFLGAO_CTOR_OFFSET UNITYSDK_OFFSET(0xBA50C00)
#define NADIACFLGAO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA50C50)

inline static constexpr unsigned int NADIACFLGAO_TypeDefinitionIndex = 59081;

	class NADIACFLGAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvTeamLeader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + NADIACFLGAO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NADIACFLGAO_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
