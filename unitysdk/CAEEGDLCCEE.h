#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAidProtector; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAEEGDLCCEE_CTOR_OFFSET UNITYSDK_OFFSET(0xC1BCEF0)
#define CAEEGDLCCEE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC1BCF40)

inline static constexpr unsigned int CAEEGDLCCEE_TypeDefinitionIndex = 59137;

	class CAEEGDLCCEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAidProtector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + CAEEGDLCCEE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CAEEGDLCCEE_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
