#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class InterruptSkillExecution; }
namespace RPG::GameCore { class TaskContext; }

#define HIKEMAHHNGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1903D190)
#define HIKEMAHHNGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1903D2A0)
#define HIKEMAHHNGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1903D400)

inline static constexpr unsigned int HIKEMAHHNGM_TypeDefinitionIndex = 56315;

	class HIKEMAHHNGM
	{
	public:
		::KFELGAIGHAP* CABNDBHDMBL; // 0x28
		::KFELGAIGHAP* LELCEGGODOP; // 0x30
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
