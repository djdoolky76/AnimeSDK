#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRacePlayMessage; }

#define AMJEICCFLDN_APDHDDNHIGB_OFFSET UNITYSDK_OFFSET(0x1D715A50)
#define AMJEICCFLDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D715930)
#define AMJEICCFLDN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1D715950)
#define AMJEICCFLDN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1D715CB0)

inline static constexpr unsigned int AMJEICCFLDN_TypeDefinitionIndex = 37917;

	class AMJEICCFLDN
	{
	public:
		::IFBFJDCECML* NOEPNKMBLPJ; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage*))((::PBYTE)hIl2Cpp + AMJEICCFLDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJEICCFLDN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJEICCFLDN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void APDHDDNHIGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJEICCFLDN_APDHDDNHIGB_OFFSET))(this);
		}

	};
