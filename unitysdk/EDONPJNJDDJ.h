#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMonsterNameBoardMaxBuffCount; }
namespace RPG::GameCore { class TaskContext; }

#define EDONPJNJDDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1332E9F0)
#define EDONPJNJDDJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1332EA20)

inline static constexpr unsigned int EDONPJNJDDJ_TypeDefinitionIndex = 55549;

	class EDONPJNJDDJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterNameBoardMaxBuffCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterNameBoardMaxBuffCount*))((::PBYTE)hIl2Cpp + EDONPJNJDDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDONPJNJDDJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
