#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetRelationGroupMemberType; }
namespace RPG::GameCore { class TaskContext; }

#define NPDOCLLKKBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC5EA3E0)
#define NPDOCLLKKBJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC5EA410)

inline static constexpr unsigned int NPDOCLLKKBJ_TypeDefinitionIndex = 56199;

	class NPDOCLLKKBJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetRelationGroupMemberType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetRelationGroupMemberType*))((::PBYTE)hIl2Cpp + NPDOCLLKKBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDOCLLKKBJ_EVALUATE_OFFSET))(this);
		}

	};
