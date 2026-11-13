#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvGroupEnterCombat; }
namespace RPG::GameCore { class TaskContext; }

#define KPOODNBKCNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1913CB60)
#define KPOODNBKCNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1913CB90)

inline static constexpr unsigned int KPOODNBKCNJ_TypeDefinitionIndex = 53491;

	class KPOODNBKCNJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGroupEnterCombat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGroupEnterCombat*))((::PBYTE)hIl2Cpp + KPOODNBKCNJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOODNBKCNJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
