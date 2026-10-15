#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceRootDecision; }

#define LLGCBHOLIMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C73FBC0)
#define LLGCBHOLIMF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C73FBE0)
#define LLGCBHOLIMF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C73FD00)

	class LLGCBHOLIMF
	{
	public:
		::IFBFJDCECML* NOEPNKMBLPJ; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision*))((::PBYTE)hIl2Cpp + LLGCBHOLIMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGCBHOLIMF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGCBHOLIMF_ONTASKRESET_OFFSET))(this);
		}

	};
