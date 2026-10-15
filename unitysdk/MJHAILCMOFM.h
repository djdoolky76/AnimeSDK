#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvLineup; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJHAILCMOFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB966CC0)
#define MJHAILCMOFM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB966D10)

inline static constexpr unsigned int MJHAILCMOFM_TypeDefinitionIndex = 59218;

	class MJHAILCMOFM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAdvLineup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + MJHAILCMOFM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MJHAILCMOFM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
