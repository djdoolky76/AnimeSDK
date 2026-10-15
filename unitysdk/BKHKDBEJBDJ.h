#pragma once
#include "unitysdk/unitysdk.h"
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsAIState; }

#define BKHKDBEJBDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BFA80)
#define BKHKDBEJBDJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C5BFAA0)

inline static constexpr unsigned int BKHKDBEJBDJ_TypeDefinitionIndex = 36978;

	class BKHKDBEJBDJ
	{
	public:
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + BKHKDBEJBDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKDBEJBDJ_EVALUATE_OFFSET))(this);
		}

	};
