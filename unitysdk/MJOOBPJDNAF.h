#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIdleCanEnterAIState; }

#define MJOOBPJDNAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71EE50)
#define MJOOBPJDNAF_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C71EED0)

inline static constexpr unsigned int MJOOBPJDNAF_TypeDefinitionIndex = 36984;

	class MJOOBPJDNAF
	{
	public:
		::IFBFJDCECML* JMMECHDFLKH; // 0x28
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIdleCanEnterAIState*))((::PBYTE)hIl2Cpp + MJOOBPJDNAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOOBPJDNAF_EVALUATE_OFFSET))(this);
		}

	};
