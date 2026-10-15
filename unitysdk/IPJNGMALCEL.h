#pragma once
#include "unitysdk/unitysdk.h"
class BACCOPOCMPC;
class EFHJJIGLPDL;
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class ST_ByEnterCombat; }
namespace RPG::GameCore { class TaskContext; }

#define IPJNGMALCEL_CTOR_OFFSET UNITYSDK_OFFSET(0x16524110)
#define IPJNGMALCEL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16524330)

inline static constexpr unsigned int IPJNGMALCEL_TypeDefinitionIndex = 52189;

	class IPJNGMALCEL
	{
	public:
		::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x28
		::EFHJJIGLPDL* CDOLLHKGMEL; // 0x30
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
