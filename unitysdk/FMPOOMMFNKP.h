#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLatestEnterStageAvatar; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FMPOOMMFNKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1585BF80)
#define FMPOOMMFNKP_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1585BFD0)

inline static constexpr unsigned int FMPOOMMFNKP_TypeDefinitionIndex = 59181;

	class FMPOOMMFNKP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + FMPOOMMFNKP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FMPOOMMFNKP_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
