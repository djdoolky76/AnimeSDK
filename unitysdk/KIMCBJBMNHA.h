#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEOOACHIEOJ;
namespace RPG::Client { class GridFightTrait; }

#define KIMCBJBMNHA_PIFFBNNOCJC_OFFSET UNITYSDK_OFFSET(0x19EF5620)

inline static constexpr unsigned int KIMCBJBMNHA_TypeDefinitionIndex = 67070;

	class KIMCBJBMNHA : public ::System::Object
	{
	public:
		static ::LEOOACHIEOJ* PIFFBNNOCJC(::RPG::Client::GridFightTrait* a1, ::LEOOACHIEOJ* a2)
		{
			return ((::LEOOACHIEOJ*(*)(::RPG::Client::GridFightTrait*, ::LEOOACHIEOJ*))((::PBYTE)hIl2Cpp + KIMCBJBMNHA_PIFFBNNOCJC_OFFSET))(a1, a2);
		}

	};
