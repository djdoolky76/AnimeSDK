#pragma once
#include "unitysdk/unitysdk.h"
class BACCOPOCMPC;
class EFHJJIGLPDL;
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class ST_ByEnterCombat; }
namespace RPG::GameCore { class TaskContext; }

#define IPJNGMALCEL_CTOR_OFFSET UNITYSDK_OFFSET(0x16516000)
#define IPJNGMALCEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16516220)

inline static constexpr unsigned int IPJNGMALCEL_TypeDefinitionIndex = 52189;

	class IPJNGMALCEL
	{
	public:
		::EFHJJIGLPDL* CDOLLHKGMEL; // 0x28
		::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x30
		::BACCOPOCMPC* PJLGDHFHFLO; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + IPJNGMALCEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJNGMALCEL_EVALUATE_OFFSET))(this);
		}

	};
