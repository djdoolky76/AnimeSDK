#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BlockSetVisibility; }
namespace RPG::GameCore { class TaskContext; }

#define KJCNNFEBNCH_CTOR_OFFSET UNITYSDK_OFFSET(0xB43A200)
#define KJCNNFEBNCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB43A230)

inline static constexpr unsigned int KJCNNFEBNCH_TypeDefinitionIndex = 55872;

	class KJCNNFEBNCH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockSetVisibility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockSetVisibility*))((::PBYTE)hIl2Cpp + KJCNNFEBNCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCNNFEBNCH_ONTASKBEGIN_OFFSET))(this);
		}

	};
