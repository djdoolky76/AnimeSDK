#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRacePlayEmoji; }

#define JEDIHALCICJ_BOGKNBFHEGN_OFFSET UNITYSDK_OFFSET(0x1C6C6530)
#define JEDIHALCICJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C6410)
#define JEDIHALCICJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C6C6430)
#define JEDIHALCICJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C6C6710)

inline static constexpr unsigned int JEDIHALCICJ_TypeDefinitionIndex = 36988;

	class JEDIHALCICJ
	{
	public:
		::AGENEONNBML* HEJHGJIGEGK; // 0x28
		::IFBFJDCECML* NOEPNKMBLPJ; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayEmoji* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayEmoji*))((::PBYTE)hIl2Cpp + JEDIHALCICJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDIHALCICJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDIHALCICJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BOGKNBFHEGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEDIHALCICJ_BOGKNBFHEGN_OFFSET))(this);
		}

	};
