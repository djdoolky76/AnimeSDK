#pragma once
#include "unitysdk/unitysdk.h"
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceSetAIState; }

#define GNFJEOCPDDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C648170)
#define GNFJEOCPDDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C648190)
#define GNFJEOCPDDB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C648360)

	class GNFJEOCPDDB
	{
	public:
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*))((::PBYTE)hIl2Cpp + GNFJEOCPDDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJEOCPDDB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJEOCPDDB_ONTASKRESET_OFFSET))(this);
		}

	};
