#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapSkillAbortSource; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIIEPOGPLOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1643DC40)
#define IIIEPOGPLOI_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1643DC60)

inline static constexpr unsigned int IIIEPOGPLOI_TypeDefinitionIndex = 53806;

	class IIIEPOGPLOI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapSkillAbortSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapSkillAbortSource*))((::PBYTE)hIl2Cpp + IIIEPOGPLOI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + IIIEPOGPLOI_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
