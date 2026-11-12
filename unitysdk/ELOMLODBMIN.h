#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseFoodItemDecision; }

#define ELOMLODBMIN_BINILHAIHDJ_OFFSET UNITYSDK_OFFSET(0x1D784A50)
#define ELOMLODBMIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D770C90)
#define ELOMLODBMIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1D784950)
#define ELOMLODBMIN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1D785090)

inline static constexpr unsigned int ELOMLODBMIN_TypeDefinitionIndex = 37922;

	class ELOMLODBMIN
	{
	public:
		::AGENEONNBML* HEJHGJIGEGK; // 0x28
		::IFBFJDCECML* NOEPNKMBLPJ; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision*))((::PBYTE)hIl2Cpp + ELOMLODBMIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOMLODBMIN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOMLODBMIN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BINILHAIHDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOMLODBMIN_BINILHAIHDJ_OFFSET))(this);
		}

	};
