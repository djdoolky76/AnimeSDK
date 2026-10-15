#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceStableScopeGuarder; }

#define CMCIMPHADHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A9170)
#define CMCIMPHADHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C5A91F0)
#define CMCIMPHADHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C5A9240)

inline static constexpr unsigned int CMCIMPHADHC_TypeDefinitionIndex = 37001;

	class CMCIMPHADHC
	{
	public:
		::IFBFJDCECML* JMMECHDFLKH; // 0x28
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder*))((::PBYTE)hIl2Cpp + CMCIMPHADHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCIMPHADHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCIMPHADHC_ONTASKRESET_OFFSET))(this);
		}

	};
