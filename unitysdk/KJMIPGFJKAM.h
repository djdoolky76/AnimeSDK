#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchMainMonster; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJMIPGFJKAM_CTOR_OFFSET UNITYSDK_OFFSET(0xB454F10)
#define KJMIPGFJKAM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB454F60)

inline static constexpr unsigned int KJMIPGFJKAM_TypeDefinitionIndex = 59228;

	class KJMIPGFJKAM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchMainMonster* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchMainMonster*))((::PBYTE)hIl2Cpp + KJMIPGFJKAM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KJMIPGFJKAM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
