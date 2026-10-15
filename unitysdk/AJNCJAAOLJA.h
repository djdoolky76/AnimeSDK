#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchPassiveEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJNCJAAOLJA_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC2F00)
#define AJNCJAAOLJA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12CC2F50)

inline static constexpr unsigned int AJNCJAAOLJA_TypeDefinitionIndex = 59221;

	class AJNCJAAOLJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchPassiveEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchPassiveEntity*))((::PBYTE)hIl2Cpp + AJNCJAAOLJA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + AJNCJAAOLJA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
