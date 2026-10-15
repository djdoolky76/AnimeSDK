#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartAdvTutorialGraph; }
namespace RPG::GameCore { class TaskContext; }

#define EEIFJNEFIHC_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2E6A0)
#define EEIFJNEFIHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A2E6D0)
#define EEIFJNEFIHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A2E710)
#define EEIFJNEFIHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A2E880)

	class EEIFJNEFIHC
	{
	public:
		::System::Boolean EJDEKKEOHBE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartAdvTutorialGraph* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartAdvTutorialGraph*))((::PBYTE)hIl2Cpp + EEIFJNEFIHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEIFJNEFIHC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEIFJNEFIHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEIFJNEFIHC_ONTASKRESET_OFFSET))(this);
		}

	};
