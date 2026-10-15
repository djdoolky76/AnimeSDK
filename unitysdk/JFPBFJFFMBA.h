#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvProp; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFPBFJFFMBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1665C180)
#define JFPBFJFFMBA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1665C1D0)

	class JFPBFJFFMBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvProp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvProp*))((::PBYTE)hIl2Cpp + JFPBFJFFMBA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JFPBFJFFMBA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
