#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapSkillTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPBKLMOLCHB_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA0790)
#define OPBKLMOLCHB_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xBFA07B0)

inline static constexpr unsigned int OPBKLMOLCHB_TypeDefinitionIndex = 53804;

	class OPBKLMOLCHB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapSkillTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapSkillTarget*))((::PBYTE)hIl2Cpp + OPBKLMOLCHB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OPBKLMOLCHB_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
