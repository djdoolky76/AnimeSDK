#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByEntitiesExist; }
namespace RPG::GameCore { class TaskContext; }

#define LMFBHDOCHJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB77CE30)
#define LMFBHDOCHJA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB77CE60)

inline static constexpr unsigned int LMFBHDOCHJA_TypeDefinitionIndex = 53111;

	class LMFBHDOCHJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByEntitiesExist* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByEntitiesExist*))((::PBYTE)hIl2Cpp + LMFBHDOCHJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMFBHDOCHJA_EVALUATE_OFFSET))(this);
		}

	};
