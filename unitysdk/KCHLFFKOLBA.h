#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchByTauntAndAggro; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCHLFFKOLBA_CTOR_OFFSET UNITYSDK_OFFSET(0xB336EC0)
#define KCHLFFKOLBA_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB336EE0)

inline static constexpr unsigned int KCHLFFKOLBA_TypeDefinitionIndex = 59153;

	class KCHLFFKOLBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchByTauntAndAggro* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + KCHLFFKOLBA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KCHLFFKOLBA_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
