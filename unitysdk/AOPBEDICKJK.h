#pragma once
#include "unitysdk/unitysdk.h"
class AGENEONNBML;
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceFall; }

#define AOPBEDICKJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A22C0)
#define AOPBEDICKJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C5A22E0)
#define AOPBEDICKJK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C5A23E0)

	class AOPBEDICKJK
	{
	public:
		::IFBFJDCECML* JMMECHDFLKH; // 0x28
		::AGENEONNBML* HEJHGJIGEGK; // 0x30
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall*))((::PBYTE)hIl2Cpp + AOPBEDICKJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPBEDICKJK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPBEDICKJK_ONTASKRESET_OFFSET))(this);
		}

	};
