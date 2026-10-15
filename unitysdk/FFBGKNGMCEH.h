#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsDamageCritical; }
namespace RPG::GameCore { class TaskContext; }

#define FFBGKNGMCEH_CTOR_OFFSET UNITYSDK_OFFSET(0x15723F70)
#define FFBGKNGMCEH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15723FA0)

inline static constexpr unsigned int FFBGKNGMCEH_TypeDefinitionIndex = 54647;

	class FFBGKNGMCEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + FFBGKNGMCEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBGKNGMCEH_EVALUATE_OFFSET))(this);
		}

	};
