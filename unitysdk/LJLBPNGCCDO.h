#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InfiniteWaveInsertMonster; }
namespace RPG::GameCore { class TaskContext; }

#define LJLBPNGCCDO_CTOR_OFFSET UNITYSDK_OFFSET(0xB71E930)
#define LJLBPNGCCDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB71E960)

inline static constexpr unsigned int LJLBPNGCCDO_TypeDefinitionIndex = 55123;

	class LJLBPNGCCDO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveInsertMonster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveInsertMonster*))((::PBYTE)hIl2Cpp + LJLBPNGCCDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLBPNGCCDO_ONTASKBEGIN_OFFSET))(this);
		}

	};
