#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PreloadBattlePerform; }
namespace RPG::GameCore { class TaskContext; }

#define AJKNIPDFJCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19D45D80)
#define AJKNIPDFJCJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19D45DB0)

inline static constexpr unsigned int AJKNIPDFJCJ_TypeDefinitionIndex = 59554;

	class AJKNIPDFJCJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PreloadBattlePerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PreloadBattlePerform*))((::PBYTE)hIl2Cpp + AJKNIPDFJCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKNIPDFJCJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
