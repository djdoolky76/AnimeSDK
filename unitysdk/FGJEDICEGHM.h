#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTurnActionEntity; }
namespace RPG::GameCore { class TaskContext; }

#define FGJEDICEGHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1575A790)
#define FGJEDICEGHM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1575A7C0)

inline static constexpr unsigned int FGJEDICEGHM_TypeDefinitionIndex = 54698;

	class FGJEDICEGHM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTurnActionEntity*))((::PBYTE)hIl2Cpp + FGJEDICEGHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGJEDICEGHM_EVALUATE_OFFSET))(this);
		}

	};
