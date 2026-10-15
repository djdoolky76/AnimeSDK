#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchNormalPam; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCNBJMODHBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C1C680)
#define HCNBJMODHBI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C1C6F0)

inline static constexpr unsigned int HCNBJMODHBI_TypeDefinitionIndex = 59089;

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
