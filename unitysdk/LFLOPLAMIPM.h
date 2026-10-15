#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseTrashItemDecision; }

#define LFLOPLAMIPM_BINILHAIHDJ_OFFSET UNITYSDK_OFFSET(0x1C73ADD0)
#define LFLOPLAMIPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73ACB0)
#define LFLOPLAMIPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C73ACD0)
#define LFLOPLAMIPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C73B110)

	class LFLOPLAMIPM
	{
	public:
		::IFBFJDCECML* NOEPNKMBLPJ; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseTrashItemDecision*))((::PBYTE)hIl2Cpp + LFLOPLAMIPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLOPLAMIPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLOPLAMIPM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BINILHAIHDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLOPLAMIPM_BINILHAIHDJ_OFFSET))(this);
		}

	};
