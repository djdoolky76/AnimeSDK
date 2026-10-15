#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchFateRinCardSkillMainTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLFPOMGMPMB_CTOR_OFFSET UNITYSDK_OFFSET(0xF89F180)
#define DLFPOMGMPMB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF89F1D0)

	class DLFPOMGMPMB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchFateRinCardSkillMainTargetList*))((::PBYTE)hIl2Cpp + DLFPOMGMPMB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DLFPOMGMPMB_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
