#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvTeamMembers; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EANBEPBCNKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1267E7F0)
#define EANBEPBCNKP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1267E840)

inline static constexpr unsigned int EANBEPBCNKP_TypeDefinitionIndex = 59082;

	class EANBEPBCNKP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvTeamMembers* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + EANBEPBCNKP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EANBEPBCNKP_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
