#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvGroupEnterCombat; }
namespace RPG::GameCore { class TaskContext; }

#define KPOODNBKCNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D1F90)
#define KPOODNBKCNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5D1FC0)

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
