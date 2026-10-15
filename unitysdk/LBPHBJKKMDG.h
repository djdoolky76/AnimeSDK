#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseRocketItemDecision; }

#define LBPHBJKKMDG_BINILHAIHDJ_OFFSET UNITYSDK_OFFSET(0x1C6F1F20)
#define LBPHBJKKMDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F1E00)
#define LBPHBJKKMDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C6F1E20)
#define LBPHBJKKMDG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C6F22F0)

inline static constexpr unsigned int LBPHBJKKMDG_TypeDefinitionIndex = 36996;

	class LBPHBJKKMDG
	{
	public:
		::IFBFJDCECML* NOEPNKMBLPJ; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision*))((::PBYTE)hIl2Cpp + LBPHBJKKMDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHBJKKMDG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHBJKKMDG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BINILHAIHDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPHBJKKMDG_BINILHAIHDJ_OFFSET))(this);
		}

	};
