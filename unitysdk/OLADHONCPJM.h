#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FightFestShowCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define OLADHONCPJM_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFDD60)
#define OLADHONCPJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEFDD90)

	class OLADHONCPJM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FightFestShowCutIn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FightFestShowCutIn*))((::PBYTE)hIl2Cpp + OLADHONCPJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLADHONCPJM_ONTASKBEGIN_OFFSET))(this);
		}

	};
