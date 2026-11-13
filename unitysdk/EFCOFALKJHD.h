#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"
#include "unitysdk/System/Object.h"
class AENHJIPFJPA;
class KJBFNECBPPK;

#define EFCOFALKJHD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A331E40)

inline static constexpr unsigned int EFCOFALKJHD_TypeDefinitionIndex = 77823;

	class EFCOFALKJHD : public ::System::Object
	{
	public:
		static ::KJBFNECBPPK* BPLPBPMEODA(::AENHJIPFJPA* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
		{
			return ((::KJBFNECBPPK*(*)(::AENHJIPFJPA*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + EFCOFALKJHD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
