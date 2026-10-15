#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSelector; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EICEMMCHGCE_CTOR_OFFSET UNITYSDK_OFFSET(0x154BC940)
#define EICEMMCHGCE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x154BC9B0)

inline static constexpr unsigned int EICEMMCHGCE_TypeDefinitionIndex = 59201;

	class EICEMMCHGCE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetSelector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSelector*))((::PBYTE)hIl2Cpp + EICEMMCHGCE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EICEMMCHGCE_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
