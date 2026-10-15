#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAbilityGroup; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLAFMOFLEDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9DBF0)
#define GLAFMOFLEDK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A9DC40)

inline static constexpr unsigned int GLAFMOFLEDK_TypeDefinitionIndex = 59215;

	class GLAFMOFLEDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAbilityGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAbilityGroup*))((::PBYTE)hIl2Cpp + GLAFMOFLEDK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GLAFMOFLEDK_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
