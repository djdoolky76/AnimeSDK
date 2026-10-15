#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchParamEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHNBCLNAGNM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE74790)
#define OHNBCLNAGNM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE747E0)

	class OHNBCLNAGNM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchParamEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + OHNBCLNAGNM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OHNBCLNAGNM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
