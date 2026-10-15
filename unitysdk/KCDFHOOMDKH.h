#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByInAlertRange; }
namespace RPG::GameCore { class TaskContext; }

#define KCDFHOOMDKH_CTOR_OFFSET UNITYSDK_OFFSET(0xB3317E0)
#define KCDFHOOMDKH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB331810)

inline static constexpr unsigned int KCDFHOOMDKH_TypeDefinitionIndex = 53923;

	class KCDFHOOMDKH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByInAlertRange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByInAlertRange*))((::PBYTE)hIl2Cpp + KCDFHOOMDKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDFHOOMDKH_EVALUATE_OFFSET))(this);
		}

	};
