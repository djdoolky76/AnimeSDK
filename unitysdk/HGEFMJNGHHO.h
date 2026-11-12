#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceTurn; }

#define HGEFMJNGHHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E77A0)
#define HGEFMJNGHHO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1D7E77C0)
#define HGEFMJNGHHO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1D7E8730)
#define HGEFMJNGHHO_TICK_OFFSET UNITYSDK_OFFSET(0x1D7E8260)

inline static constexpr unsigned int HGEFMJNGHHO_TypeDefinitionIndex = 37921;

	class HGEFMJNGHHO
	{
	public:
		::IFBFJDCECML* JMMECHDFLKH; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::UInt32 PGMIOKKLHIE; // 0x38
		::RPG::MVector3 KJEBJAJNNBP; // 0x3C
		::System::UInt32 PIFFDBAOMDE; // 0x48
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*))((::PBYTE)hIl2Cpp + HGEFMJNGHHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEFMJNGHHO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGEFMJNGHHO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEFMJNGHHO_ONTASKRESET_OFFSET))(this);
		}

	};
