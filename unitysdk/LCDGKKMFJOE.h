#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCurrentInsertTurnSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCDGKKMFJOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB60CED0)
#define LCDGKKMFJOE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB60CF20)

inline static constexpr unsigned int LCDGKKMFJOE_TypeDefinitionIndex = 59160;

	class LCDGKKMFJOE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + LCDGKKMFJOE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LCDGKKMFJOE_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
