#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtInsertSkill; }
namespace RPG::GameCore { class TaskContext; }

#define PKLCOOHLBEH_CTOR_OFFSET UNITYSDK_OFFSET(0xC2D0810)
#define PKLCOOHLBEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2D0840)

	class PKLCOOHLBEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtInsertSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtInsertSkill*))((::PBYTE)hIl2Cpp + PKLCOOHLBEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLCOOHLBEH_ONTASKBEGIN_OFFSET))(this);
		}

	};
