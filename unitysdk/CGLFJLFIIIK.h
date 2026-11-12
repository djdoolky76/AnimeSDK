#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByPerceiveValueReachMax; }
namespace RPG::GameCore { class TaskContext; }

#define CGLFJLFIIIK_CTOR_OFFSET UNITYSDK_OFFSET(0xD638F10)
#define CGLFJLFIIIK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD638F40)

inline static constexpr unsigned int CGLFJLFIIIK_TypeDefinitionIndex = 54280;

	class CGLFJLFIIIK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByPerceiveValueReachMax* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByPerceiveValueReachMax*))((::PBYTE)hIl2Cpp + CGLFJLFIIIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLFJLFIIIK_EVALUATE_OFFSET))(this);
		}

	};
