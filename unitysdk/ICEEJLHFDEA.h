#pragma once
#include "unitysdk/unitysdk.h"
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_ByRandom; }

#define ICEEJLHFDEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C662DD0)
#define ICEEJLHFDEA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C662DF0)

inline static constexpr unsigned int ICEEJLHFDEA_TypeDefinitionIndex = 37002;

	class ICEEJLHFDEA
	{
	public:
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_ByRandom* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_ByRandom*))((::PBYTE)hIl2Cpp + ICEEJLHFDEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEEJLHFDEA_EVALUATE_OFFSET))(this);
		}

	};
