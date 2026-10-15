#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAidDefender; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNAJNAKBHPB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D8C030)
#define HNAJNAKBHPB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D8C080)

inline static constexpr unsigned int HNAJNAKBHPB_TypeDefinitionIndex = 59136;

	class HNAJNAKBHPB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAidDefender* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAidDefender*))((::PBYTE)hIl2Cpp + HNAJNAKBHPB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HNAJNAKBHPB_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
