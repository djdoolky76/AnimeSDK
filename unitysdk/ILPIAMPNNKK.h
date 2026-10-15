#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MuteEntitySound; }
namespace RPG::GameCore { class TaskContext; }

#define ILPIAMPNNKK_CTOR_OFFSET UNITYSDK_OFFSET(0x164CBE10)
#define ILPIAMPNNKK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164CBE40)

	class ILPIAMPNNKK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MuteEntitySound* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MuteEntitySound*))((::PBYTE)hIl2Cpp + ILPIAMPNNKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPIAMPNNKK_ONTASKBEGIN_OFFSET))(this);
		}

	};
