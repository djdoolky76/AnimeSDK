#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class InterruptSkillExecution; }
namespace RPG::GameCore { class TaskContext; }

#define HIKEMAHHNGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15CEFAF0)
#define HIKEMAHHNGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CEFC00)
#define HIKEMAHHNGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CEFD60)

	class HIKEMAHHNGM
	{
	public:
		::KFELGAIGHAP* LELCEGGODOP; // 0x28
		::KFELGAIGHAP* CABNDBHDMBL; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InterruptSkillExecution* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InterruptSkillExecution*))((::PBYTE)hIl2Cpp + HIKEMAHHNGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKEMAHHNGM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKEMAHHNGM_ONTASKBEGIN_OFFSET))(this);
		}

	};
