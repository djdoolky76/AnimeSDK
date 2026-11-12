#pragma once
#include "unitysdk/unitysdk.h"
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceSetAnimState; }

#define BKJHKBJLLOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7413E0)
#define BKJHKBJLLOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1D741400)
#define BKJHKBJLLOC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1D7414C0)

inline static constexpr unsigned int BKJHKBJLLOC_TypeDefinitionIndex = 37928;

	class BKJHKBJLLOC
	{
	public:
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAnimState*))((::PBYTE)hIl2Cpp + BKJHKBJLLOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJHKBJLLOC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJHKBJLLOC_ONTASKRESET_OFFSET))(this);
		}

	};
