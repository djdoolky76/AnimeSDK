#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetWolfBroAchievementData; }
namespace RPG::GameCore { class TaskContext; }

#define OKPDFBKKKJH_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFABF0)
#define OKPDFBKKKJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEFAC20)

	class OKPDFBKKKJH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetWolfBroAchievementData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetWolfBroAchievementData*))((::PBYTE)hIl2Cpp + OKPDFBKKKJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPDFBKKKJH_ONTASKBEGIN_OFFSET))(this);
		}

	};
