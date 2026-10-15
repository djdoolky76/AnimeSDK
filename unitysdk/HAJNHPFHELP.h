#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceSelectSkillDecision; }

#define HAJNHPFHELP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C65BE00)
#define HAJNHPFHELP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C65BE20)
#define HAJNHPFHELP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C65BF40)

inline static constexpr unsigned int HAJNHPFHELP_TypeDefinitionIndex = 36991;

	class HAJNHPFHELP
	{
	public:
		::IFBFJDCECML* NOEPNKMBLPJ; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision*))((::PBYTE)hIl2Cpp + HAJNHPFHELP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJNHPFHELP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJNHPFHELP_ONTASKRESET_OFFSET))(this);
		}

	};
