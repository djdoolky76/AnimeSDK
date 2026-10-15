#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchLastSearchEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MALFLPEHNOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB84C3D0)
#define MALFLPEHNOA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB84C440)

inline static constexpr unsigned int MALFLPEHNOA_TypeDefinitionIndex = 59096;

	class MALFLPEHNOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchLastSearchEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + MALFLPEHNOA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MALFLPEHNOA_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
