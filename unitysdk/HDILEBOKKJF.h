#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAimAtTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HDILEBOKKJF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C37540)
#define HDILEBOKKJF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15C37590)

inline static constexpr unsigned int HDILEBOKKJF_TypeDefinitionIndex = 59157;

	class HDILEBOKKJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAimAtTargetList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAimAtTargetList*))((::PBYTE)hIl2Cpp + HDILEBOKKJF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HDILEBOKKJF_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
