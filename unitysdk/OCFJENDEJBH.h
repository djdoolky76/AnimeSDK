#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchCameraAnchorTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCFJENDEJBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBD5FB20)
#define OCFJENDEJBH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBD5FB70)

	class OCFJENDEJBH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchCameraAnchorTargetList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchCameraAnchorTargetList*))((::PBYTE)hIl2Cpp + OCFJENDEJBH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OCFJENDEJBH_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
