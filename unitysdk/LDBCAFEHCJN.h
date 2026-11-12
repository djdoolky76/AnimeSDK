#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseItemDecision; }

#define LDBCAFEHCJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BA250)
#define LDBCAFEHCJN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1D8BA270)
#define LDBCAFEHCJN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1D8BA370)

inline static constexpr unsigned int LDBCAFEHCJN_TypeDefinitionIndex = 37923;

	class LDBCAFEHCJN
	{
	public:
		::IFBFJDCECML* NOEPNKMBLPJ; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision*))((::PBYTE)hIl2Cpp + LDBCAFEHCJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBCAFEHCJN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDBCAFEHCJN_ONTASKRESET_OFFSET))(this);
		}

	};
