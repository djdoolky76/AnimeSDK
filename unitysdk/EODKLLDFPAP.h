#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapSkillCastPos; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EODKLLDFPAP_CTOR_OFFSET UNITYSDK_OFFSET(0x155B0F70)
#define EODKLLDFPAP_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x155B0F90)

inline static constexpr unsigned int EODKLLDFPAP_TypeDefinitionIndex = 53805;

	class EODKLLDFPAP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapSkillCastPos* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapSkillCastPos*))((::PBYTE)hIl2Cpp + EODKLLDFPAP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EODKLLDFPAP_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
