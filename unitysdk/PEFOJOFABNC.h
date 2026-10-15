#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCameraAimTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEFOJOFABNC_CTOR_OFFSET UNITYSDK_OFFSET(0xC03B0B0)
#define PEFOJOFABNC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC03B100)

	class PEFOJOFABNC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchCameraAimTargetList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCameraAimTargetList*))((::PBYTE)hIl2Cpp + PEFOJOFABNC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PEFOJOFABNC_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
