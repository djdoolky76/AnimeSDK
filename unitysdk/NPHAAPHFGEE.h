#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLastKillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPHAAPHFGEE_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF6740)
#define NPHAAPHFGEE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCF67B0)

inline static constexpr unsigned int NPHAAPHFGEE_TypeDefinitionIndex = 59125;

	class NPHAAPHFGEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchLastKillTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLastKillTarget*))((::PBYTE)hIl2Cpp + NPHAAPHFGEE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NPHAAPHFGEE_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
