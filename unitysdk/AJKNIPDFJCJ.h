#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PreloadBattlePerform; }
namespace RPG::GameCore { class TaskContext; }

#define AJKNIPDFJCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC3EA0)
#define AJKNIPDFJCJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CC3ED0)

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
