#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchTaskActionTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDIJLODKLJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4A5E0)
#define NDIJLODKLJB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB4A630)

	class NDIJLODKLJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchTaskActionTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + NDIJLODKLJB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + NDIJLODKLJB_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
