#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTargetCustomUnselectable; }
namespace RPG::GameCore { class TaskContext; }

#define PDMPEJKBICJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC0216E0)
#define PDMPEJKBICJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC021710)

inline static constexpr unsigned int PDMPEJKBICJ_TypeDefinitionIndex = 54691;

	class PDMPEJKBICJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + PDMPEJKBICJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMPEJKBICJ_EVALUATE_OFFSET))(this);
		}

	};
