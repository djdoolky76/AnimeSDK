#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByRelationGroupType; }
namespace RPG::GameCore { class TaskContext; }

#define MKMIJGPHPGE_CTOR_OFFSET UNITYSDK_OFFSET(0xC258690)
#define MKMIJGPHPGE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC2586C0)

inline static constexpr unsigned int MKMIJGPHPGE_TypeDefinitionIndex = 56198;

	class MKMIJGPHPGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRelationGroupType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRelationGroupType*))((::PBYTE)hIl2Cpp + MKMIJGPHPGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMIJGPHPGE_EVALUATE_OFFSET))(this);
		}

	};
