#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetCompute; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKJGHBEECOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB74B290)
#define LKJGHBEECOF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB74B320)

inline static constexpr unsigned int LKJGHBEECOF_TypeDefinitionIndex = 59202;

	class LKJGHBEECOF
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* AFEBKKJACHH; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetCompute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetCompute*))((::PBYTE)hIl2Cpp + LKJGHBEECOF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LKJGHBEECOF_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
