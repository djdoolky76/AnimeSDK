#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNormalPam; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCNBJMODHBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C293C0)
#define HCNBJMODHBI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C29430)

	class HCNBJMODHBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchNormalPam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchNormalPam*))((::PBYTE)hIl2Cpp + HCNBJMODHBI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HCNBJMODHBI_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
