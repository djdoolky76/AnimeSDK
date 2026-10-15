#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowBonusUIEffect; }
namespace RPG::GameCore { class TaskContext; }

#define DLLICPEJDEI_CTOR_OFFSET UNITYSDK_OFFSET(0xF8ACA40)
#define DLLICPEJDEI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF8ACA50)
#define DLLICPEJDEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF8ACAF0)
#define DLLICPEJDEI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF8ACC20)
#define DLLICPEJDEI_TICK_OFFSET UNITYSDK_OFFSET(0xF8ACA90)

	class DLLICPEJDEI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowBonusUIEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::ShowBonusUIEffect* HAOKDAIPDIM; // 0x20
		::RPG::GameCore::TaskContext* OEGOIILHDOD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBonusUIEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBonusUIEffect*))((::PBYTE)hIl2Cpp + DLLICPEJDEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLICPEJDEI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLLICPEJDEI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLICPEJDEI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLICPEJDEI_ONTASKRESET_OFFSET))(this);
		}

	};
