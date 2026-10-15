#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapCharacterChangeTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBGFMMDDHAF_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF61E0)
#define HBGFMMDDHAF_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x15BF6200)

inline static constexpr unsigned int HBGFMMDDHAF_TypeDefinitionIndex = 59184;

	class HBGFMMDDHAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetMapCharacterChangeTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapCharacterChangeTarget*))((::PBYTE)hIl2Cpp + HBGFMMDDHAF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + HBGFMMDDHAF_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
