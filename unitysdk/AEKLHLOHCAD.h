#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAdjoinEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEKLHLOHCAD_CTOR_OFFSET UNITYSDK_OFFSET(0xCEF9E60)
#define AEKLHLOHCAD_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xCEF9E80)

inline static constexpr unsigned int AEKLHLOHCAD_TypeDefinitionIndex = 59109;

	class AEKLHLOHCAD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapAdjoinEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + AEKLHLOHCAD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + AEKLHLOHCAD_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
