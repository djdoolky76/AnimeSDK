#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseRocketItemDecision; }

#define LBPHBJKKMDG_BINILHAIHDJ_OFFSET UNITYSDK_OFFSET(0x1C720210)
#define LBPHBJKKMDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7200F0)
#define LBPHBJKKMDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C720110)
#define LBPHBJKKMDG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C7205E0)

	class LBPHBJKKMDG
	{
	public:
		::AGENEONNBML* HEJHGJIGEGK; // 0x28
		::IFBFJDCECML* NOEPNKMBLPJ; // 0x30
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
